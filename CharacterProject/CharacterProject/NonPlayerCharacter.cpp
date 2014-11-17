#include "stdafx.h"
#include "Character.h"
#include "NonPlayerCharacter.h"
string Type;
NonPlayerCharacter::NonPlayerCharacter() : Character()
{
	NonPlayerCharacter::Charisma = 1;
	NonPlayerCharacter::Strength = 1;
	NonPlayerCharacter::Dexterity = 1;
	NonPlayerCharacter::HitPoints = 1;
	Type = "Nothing";
}
NonPlayerCharacter::NonPlayerCharacter(string type) : Character(type)
{
	NonPlayerCharacter::Charisma = 1;
	NonPlayerCharacter::Strength = 1;
	NonPlayerCharacter::Dexterity = 1;
	NonPlayerCharacter::HitPoints = 1;
	Type = type;
}