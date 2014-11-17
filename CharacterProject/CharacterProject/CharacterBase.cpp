//this imports all of the definitions.
#include "stdafx.h"
#include "CharacterBase.h"
CharacterBase::CharacterBase()
{
	std::cout<<"alive";
	CharacterBase::Int = 0;
	CharacterBase::Wis = 0;
	CharacterBase::Str = 0;
	CharacterBase::Name = "";
}

CharacterBase::CharacterBase(int s, int w, int i, string n)
{
	CharacterBase::Int = i;
	CharacterBase::Str = s;
	CharacterBase::Wis = w;
	CharacterBase::Name = n;
}

CharacterBase::CharacterBase(string incomingString)
{
	string normalString = "normal";
	string WarriorString = "fighter";
	string WizardString = "wizard";

	//compare incomingString to normalString
	int stringCompareValue = incomingString.compare(normalString);
	
	int stringFighterValue = incomingString.compare(WarriorString);

	int stringWizardValue = incomingString.compare(WizardString);

	//stringCompareValue changes from 0 the further apart the two strings are
	bool stringsAreBothNormal = (stringCompareValue == 0);
	//if the comparison is more than 0 then there are differences and the strings are different


	//if the strings are both Normal, then string "fighter" vs string "normal" would not be 0
	//so compare "norma" and "fighter", these are really different
	//so the value for stringIsFighter is not going to be 0, i'll be something different from 0
	bool stringIsFighter = (stringFighterValue == 0);
	//buf compare "fighter" to "fighter" and you will get 0, so this bool here is true;

	bool stringIsWizard = (stringWizardValue == 0);

	if(stringsAreBothNormal)
	{
		CharacterBase::Int = 1;
		CharacterBase::Wis = 1;
		CharacterBase::Str = 1;
		CharacterBase::Name = "I'm Normal";
	}
	else if( stringIsFighter )
	{
		CharacterBase::Int = 1;
		CharacterBase::Wis = 1;
		CharacterBase::Str = 10;
		CharacterBase::Name = "I'm a fighter";
	}
	else if( stringIsWizard )
	{
		CharacterBase::Int = 1;
		CharacterBase::Wis = 10;
		CharacterBase::Str = 1;
		CharacterBase::Name = "I'm a wizard";
	}
}
