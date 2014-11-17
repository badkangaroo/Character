#pragma once
#include <iostream>
#include <string.h>

using namespace std;

class Character
{
public:
	//the CLASS! is CharacterBase, ***IF THERE IS A FUNCTION NAMED EXACTLY THE SAME AS THE CLASS*** this incicates the
	//constructor!!!
	//notice this "class CharacterBase" and "CharacterBase()"
	//these are the same
	Character();
	//an overloaded constructor!
	Character(int strength, int dexterity, int charisma, int hitpoints);
	Character(string type);
	//the little ~ indicates the function name of the destructor.
	~Character();

	int Strength;
	int Dexterity;
	int Charisma;
	int HitPoints;
	
	void setStrength(int inputStrength);
	void setDexterity(int inputDexterity);
	void setCharisma(int inputCharisma);
	void setHitPoints(int inputHitPoints);
	
	int getStrength();
	int getDexterity();
	int getCharisma();
	int getHitPoints();

	//function signature is always three parts!!!
	//first part is the return type...
	//this means what you GET out of a function...
	//in this case it's "void"
	//void means don't expect anything from this function

	//the second part of a function "signature" or the appearance of a function
	//is the function's name, what you use to "call" use or otherwise make a function
	//do something.

	//the third part is the argument list.
	//if there are no arguments listed then it looks like ()
	//otherwise there's a data type followed by a name.
	void getType();

	//string is the argument type, someString is what you're calling the argument
	//in the argument list.
	void getType(string someString);
	void getType(int someInt);
	
	//different but the same?
	void getType(int someInt, string someString);
	void getType(string someString, float someFloat);

	void getType(string firstString,
				string secondString,
				string thirdString,
				string fourthString);
	//this could be basically, unlimited as to the number of arguments in the argument list.

	void getType(float someFloat, int someInt);

	//notice that all of these are called "void getType(" are all the same!!!
	//this means that you can use any one of these when you need to.

	//but to do this you need to make sure that the CPP has these defined and working.
	//this .h "makes the entries in the dictionary" or they sort of pre-defines them
	//go to the cpp files for more info.

	bool operator<(const Character& other);


};//i forget this last ;

