# Aperture Anthology: Project Capture
A videogame archeological project regarding Valve's F-STOP.

1. F-STOP Mechanic: You can take a picture of an object, scale it up or down and place it back into the environment.
2. Chicken mechanics: 
	1) Small chickens can be squished by stepping on them. 
	2) Big chickens are agressive to mannequins and players and will attempt to attack them.
3. Mannequin's mechanics:
	1st part of the game: Mannequins are calm, will not attempt to attack the player. (Regular NPC)
	2nd part of the game: Mannequins will try to sneakely run away from you and hide, unless you are looking at them. (Custom code)
	3rd part of the game: Mannequins are agressive, will attempt to attack the player. (Regular HL2 Zombie AI code)
	They all can be squished by big heavy objects falling onto them.
4. Baloon mechanic: by taking a photo of a baloon, and attaching it to any object, it will be lifted by said baloon up into the air. (Apply negative gravity to the object)
5. Fan mechanic: by taking a photo of a fan, and attaching it to the floor, you propel yourself upwards. (Overcomplicated trigger_push)
6. The Dollhouse mechanic: a small dollhouse, which after you scale it up, you can step inside it.
7. The Mousetrap mechanic: a portable aerial faith plate with a big mousetrap model.

Most of the F-STOP code is located within the developer repository of L4D2, and is severely broken.

# F-STOP IN PORTAL 2
There are a lot of f-stop references in:
"
weapon_placement
weapon_camera
m_bPlacingPhoto
m_bShowingViewfinder
"
Other than that, no traces of F-STOP were found in the reverse engineered Portal 2 code.
