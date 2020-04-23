#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

//Choose a captain
void chooseCaptain(string& r_captain, string& r_invalid, string& r_currentCharacter)
{
	int end = 0;
	while (end == 0)
	{
		cout << "You may choose your ships captain.\n";
		cout << "Your choices are:\nLeeman, A grizzled aggressive commander.\nHorus, a commander of great charisma.\nKaylee, a shipwise commander \n";
		cout << "Enter Your chosen captains name.\n";
		cin >> r_captain;
		if (r_captain == "Leeman" || r_captain == "leeman")
		{
			cout << "Greetings. I am " << r_captain << " I will boost your brute force and social stats\n";
			r_currentCharacter = "Leeman";
			++end;
		}
		else if (r_captain == "Horus" || r_captain == "horus")
		{
			cout << "Well met! I am " << r_captain << " I will boost your social and brute force stats.\n";
			r_currentCharacter = "Horus";
			++end;
		}
		else if (r_captain == "Kaylee" || r_captain == "kaylee")
		{
			cout << "Hey there! I am " << r_captain << " I will boost your engineering and social stats\n";
			r_currentCharacter = "Kaylee";
			++end;
		}
		else
		{
			cout << r_invalid << endl;
		}
	}
}
void chooseCrew(string& r_currentCharacter, string& r_invalid, string& r_broke, int& r_credits, int& r_alicia, int& r_nathaniel)
{
	cin >> r_currentCharacter;
	if (r_currentCharacter == "Alicia" || r_currentCharacter == "alicia")
	{
		if (r_alicia == 1) 
		{
			cout << "Alicia is already in your crew!\n";
		}
		else
		{
			if (r_credits < 200)
			{
				cout << r_broke << endl;
			}
			else
			{
				r_credits = r_credits - 200;
				cout << "Good to be aboard captain. I won't let you down.\n";
				r_alicia = 1;
			}		
		}
	}
	else if (r_currentCharacter == "Nathaniel" || r_currentCharacter == "nathaniel")
	{
		if (r_nathaniel == 1)
		{
			cout << "Nathaniel is already in your crew!\n";
		}
		else
		{
			if (r_credits < 200)
			{
				cout << r_broke << endl;
			}
			else
			{
				r_credits = r_credits - 200;
				cout << "Looking forward to new discoveries captain.\n";
				r_nathaniel = 1;
			}
		}
	}
	else
	{
		r_invalid;
	}
		
}

//Alter ship stats based on character
void changeShipStats(int& r_engineering, int& r_bruteForce, int& r_social, string& r_currentCharacter)
{
	if (r_currentCharacter == "Leeman")
	{
		r_bruteForce = r_bruteForce + 2;
		r_social = r_social + 1;
	}
	else if (r_currentCharacter == "Horus")
	{
		r_social = r_social + 2;
		r_bruteForce = r_bruteForce + 1;
	}
	else if (r_currentCharacter == "Kaylee")
	{
		r_engineering = r_engineering + 2;
		r_social = r_social + 1;
	}
}
//Display ship stats to user
void shipStats(int& r_engineering, int& r_bruteForce, int& r_social, int& r_gas, int& r_parts, int& r_credits, int& r_cargo, int& r_contraband, int& r_storage)
{
	int totalStuff = r_gas + r_parts + r_cargo + r_contraband;
	int openSlots = r_storage - totalStuff;
	cout << "The WinterShields stats are\nEngineering = " << r_engineering << "\nBrute Force = " << r_bruteForce << "\nSocial = " << r_social << endl;
	cout << "You have " << r_credits << " credits\n" << r_gas << " gas\n" << r_parts << " spare parts" << endl;
	cout << "Your carrying " << r_cargo << " cargo\n" << r_contraband << " contraband" << endl;
	cout << "You have " << openSlots << " Inventory slots available\n";
}
//Determines how many available inventory slots player has
void cargoBay(int& r_gas, int& r_parts, int& r_credits, int& r_cargo, int& r_contraband, int& r_storage, int& r_openSlots)
{
	int totalStuff = r_gas + r_parts + r_cargo + r_contraband;
	r_openSlots = r_storage - totalStuff;
}