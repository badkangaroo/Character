#include "stdafx.h"
#include "Character.h"
#include "PlayerCharacter.h"
string Name;
PlayerCharacter::PlayerCharacter() : Character()
{
	PlayerCharacter::Charisma = 1;
	PlayerCharacter::Strength = 1;
	PlayerCharacter::Dexterity = 1;
	PlayerCharacter::HitPoints = 1;
	Name = "Nobody";
}
PlayerCharacter::PlayerCharacter(string name) : Character(name)
{
	PlayerCharacter::Charisma = 1;
	PlayerCharacter::Strength = 1;
	PlayerCharacter::Dexterity = 1;
	PlayerCharacter::HitPoints = 1;
	Name = name;
}