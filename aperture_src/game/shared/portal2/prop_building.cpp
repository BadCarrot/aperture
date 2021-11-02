/*
    Code snippets for the Dollhouse from F-STOP.
    Recreated from Exposure by UserPlace.
*/

void CPropBuilding::CreatePortalTunnel()
{
    if(GetObjectScaleLevel >= 2)
    {
        CreatePortal(/*No code available*/);
    }
}

bool CPropBuilding::CanPlace(
    CheckPlacementData placementData,
    Vector &positionOut,
    QAngle &angleOut)
{
    positionOut = placementData.Trace.endpos;
    angleOut = vec3_angle./*No code available*/;

    if(/*No code available*/)
    {
        return true;
    }
    else
    {
        return false;
    }
}