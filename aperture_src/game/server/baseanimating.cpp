/*
    F-STOP code from baseanimating.cpp in the April 23rd 2020 CSGO source code leak.
    Collected by UserPlace
*/

BEGIN_ENT_SCRIPTDESC( CBaseAnimating, CBaseEntity, "Animating models" )
    //**********//
    DEFINE_SCRIPTFUNC( GetObjectScaleLevel, "The scale size of the entity" )
    //**********//
END_SCRIPTDESC();
CBaseAnimating::CBaseAnimating()
{
    //**********//
    m_nObjectScaleLevel = 0;	 // No scale
    m_bCanBeCaptured = true;
    //**********//
}

void CBaseAnimating::Activate()
{
    //**********//
	// Scaled physics objects (re)create their physics here
	if ( GetObjectScaleLevel() != 0 && VPhysicsGetObject() )
	{	
		// sanity check to make sure 'm_flModelScale' is in sync with the 
		// mod specific 'm_nObjectScaleLevel' member.
		Assert( m_flModelScale > 0.0f && m_flModelScale != 1.0f );

		UTIL_CreateScaledPhysObject( this, m_flModelScale );
	}
    //**********//
}

void CBaseAnimating::SetModel( const char *szModelName )
{
    //**********//
	// After we set our bounds based on the model's default size,
	// scale the bounds based on any starting scale value set in the map.
	if ( GetObjectScaleLevel() != 0 )
	{	
		CaptureInfo_t captureInfo;
		UTIL_InitCaptureInfo( captureInfo, this );
		float flModelScale = 1.0f;
		if ( captureInfo.pPlacementQuery )
		{
			flModelScale = captureInfo.pPlacementQuery->GetScaleForStep( GetObjectScaleLevel(), &captureInfo );
		}
		
		// Scale by this amount to reach our target scale
		SetModelScale( flModelScale );
	}
    //**********//
}