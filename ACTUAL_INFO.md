# Game Mechanics

1. F-STOP Mechanic: You can take a picture of an object, scale it up or down and place it back into the environment.
2. Mannequin's mechanics:
	1st part of the game: Mannequins are calm, will not attempt to attack the player. (Regular NPC)
	2nd part of the game: Mannequins will try to sneakely run away from you and hide, unless you are looking at them. (Custom code)
	3rd part of the game: Mannequins are agressive, will attempt to attack the player. (Regular HL2 Zombie AI code)
	They all can be squished by big heavy objects falling onto them.
3. Baloon mechanic: by taking a photo of a baloon, and attaching it to any object, it will be lifted by said baloon up into the air. (Apply negative gravity to the object)
4. Fan mechanic: by taking a photo of a fan, and attaching it to the floor, you propel yourself upwards. (Overcomplicated trigger_push)
5. The Dollhouse mechanic: a small dollhouse, which after you scale it up, you can step inside it. (A CBaseAnimating with 2 worldportals attached)
# Code location
Most of the F-STOP code is located within the developer repository of L4D2, and is severely broken.