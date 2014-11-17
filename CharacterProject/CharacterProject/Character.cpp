//this imports all of the definitions.
#include "stdafx.h"
#include "Character.h"

int Strength;
int Dexterity;
int Charisma;
int HitPoints;

//return value, name, args
int Character::getStrength()
{
	return Strength;
}

void Character::setStrength(int inputStrength)
{
	Strength = inputStrength;
}

//GET AND SET FOR Dexterity
int Character::getDexterity()
{
	return Dexterity;
}

void Character::setDexterity(int inputDexterity)
{
	Dexterity = inputDexterity;
}
//GET AND SET FOR Charisma
int Character::getCharisma()
{
	return Charisma;
}

void Character::setCharisma(int inputCharisma)
{
	Charisma = inputCharisma;
}
//GET AND SET FOR HitPoints
int Character::getHitPoints()
{
	return HitPoints;
}

void Character::setHitPoints(int inputHitPoints)
{
	Charisma = inputHitPoints;
}

Character::Character()
{
	Strength = 1;
	Dexterity = 1;
	Charisma = 1;
	HitPoints = 1;
}

Character::Character(int inputStrength, int inputDexterity, int inputCharisma, int inputHitPoints)
{
	Strength = inputStrength;
	Dexterity = inputDexterity;
	Charisma = inputCharisma;
	HitPoints = inputHitPoints;
}

Character::Character(string incomingString)
{
	string thief = "theif";
	string fighter= "fighter";
	string bard= "bard";

	//compare incomingString to normalString
	int thiefVal = incomingString.compare(thief);
	
	int fighterVal = incomingString.compare(fighter);

	int bardVal = incomingString.compare(bard);

	//stringCompareValue changes from 0 the further apart the two strings are
	bool isThief = (thiefVal == 0);
	//if the comparison is more than 0 then there are differences and the strings are different


	//if the strings are both Normal, then string "fighter" vs string "normal" would not be 0
	//so compare "norma" and "fighter", these are really different
	//so the value for stringIsFighter is not going to be 0, i'll be something different from 0
	bool isFighter = (fighterVal == 0);
	//buf compare "fighter" to "fighter" and you will get 0, so this bool here is true;

	bool isBard = (bardVal == 0);

	if(isThief)
	{
		Strength = 1;
		Dexterity = 10;
		Strength = 1;
		HitPoints = 10;
	}
	else if( isFighter )
	{
		Strength = 10;
		Dexterity = 1;
		Charisma = 1;
		HitPoints = 30;
	}
	else if( isBard )
	{
		Strength = 1;
		Dexterity = 1;
		Charisma = 10;
		HitPoints = 20;
	}
}

bool Character::operator<(const Character &other)
{
	if(other.Strength > Strength)
	{
		return true;
	}
	else
	{
		return false;
	}
}

//destructor needs to have something
Character::~Character()
{

}