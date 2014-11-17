// CharacterProject.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "CharacterBase.h"

int _tmain(int argc, _TCHAR* argv[])
{
	CharacterBase *cb = new CharacterBase();
	CharacterBase *cb2 = new CharacterBase(1,2,3,"bob");
	CharacterBase *cb3 = new CharacterBase("normal");
	CharacterBase *cb4 = new CharacterBase("fighter");
	CharacterBase *cb5 = new CharacterBase("wizard");
	CharacterBase *cb6 = new CharacterBase("i match nobody...");

	return 0;
}

