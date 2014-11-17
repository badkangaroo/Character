// CharacterProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Character.h"
#include "PlayerCharacter.h"
#include "NonPlayerCharacter.h"

int _tmain(int argc, _TCHAR* argv[])
{
	PlayerCharacter pc = PlayerCharacter("Bob");
	pc.setStrength(2);
	PlayerCharacter pc2 = PlayerCharacter();
	pc2.setStrength(3);
	NonPlayerCharacter npc = NonPlayerCharacter();
	npc.setStrength(4);
	if(pc < pc2 )
	{
		cout<<"dude";
	}

	return 0;
}

