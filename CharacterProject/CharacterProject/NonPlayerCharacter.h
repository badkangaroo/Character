#pragma once
#include "Character.h"

using namespace std;
//after the : you tell the PlayerCharacter who it's parent class is
class NonPlayerCharacter: public Character
{
public:
	string Type;
	NonPlayerCharacter();
	NonPlayerCharacter(string Type);
};