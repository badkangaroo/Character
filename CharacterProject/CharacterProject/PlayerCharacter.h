#pragma once
#include "Character.h"

using namespace std;
//after the : you tell the PlayerCharacter who it's parent class is
class PlayerCharacter: public Character
{
public:
	string Name;
	PlayerCharacter();
	PlayerCharacter(string name);
};