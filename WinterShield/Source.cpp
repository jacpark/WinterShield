#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include "getInputFromUser.h"
#include "getInventoryItems.h"
#include "planets.h"
#include "playerShip.h"

using namespace std;

//Forward Declarations

int addition(int a, int b);



//***Main Program***
int main() 
{
	//Story progress variable
	int story = 2;
	int progress = 0;


	//Spaceship stats
	int engineering = 0;
	int bruteForce = 0;
	int social = 0;
	int gas = 3;
	int parts = 1;
	int credits = 500;
	int cargo = 0;
	int contraband = 0;
	int storage = 8;

	//variables to alter ship stats
	int numberOfCargo;
	int numberOfContraband;


	int openSlots = 0;
	int fine;

	//Common strings
	string captain;
	string YesOrNo;
	string locationChoice;
	string onLocationChoice;
	string invalid = "Invalid entry please try again";
	string confirm = "Are you happy with your choice?";
	string broke = "You lack the funds to purchase that.\nTry entering a lower number or completeing jobs.\n";
	string fullInventory = "Your ship lacks space for that much cargo\n";

	//Characters
	string currentCharacter;
	int alicia = 0;
	int nathaniel = 0;
	int carlos = 0;
	
	//References
	int& r_story = story;
	int& r_progress = progress;
		//Ref Characters
	int& r_alicia = alicia;
	int& r_nathaniel = nathaniel;
	int& r_carlos = carlos;
		//Ref Spaceship stats
	int& r_engineering = engineering;
	int& r_bruteForce = bruteForce;
	int& r_social = social;
	int& r_gas = gas;
	int& r_parts = parts;
	int& r_credits = credits;
	int& r_cargo = cargo;
	int& r_contraband = contraband;
	int& r_storage = storage;
	int& r_openSlots = openSlots;
		//Ref alter spaceship stats
	int& r_numberOfCargo = numberOfCargo;
	int& r_numberOfContraband = numberOfContraband;
		//Ref-Common strings
	string& r_captain = captain;
	string& r_YesOrNo = YesOrNo;
	string& r_locationChoice = locationChoice;
	string& r_onLocactionChoice = onLocationChoice;
	string& r_invalid = invalid;
	string& r_broke = broke;
	string& r_fullInventory = fullInventory;
		//Ref-characters
	string& r_currentCharacter = currentCharacter;

	//***Story Starts***
	while (story > 0)
	{
		while (story == 2)
		{
			//Allow user to pick a captain update ship stats respectivly
			while (progress == 0)
			{
				chooseCaptain(r_captain, r_invalid, r_currentCharacter);
				cout << confirm << endl;
				YOrN(r_YesOrNo, r_invalid, r_progress);
			}
			//update ship stats respectivly
			while (progress == 1)
			{
				changeShipStats(r_engineering, r_bruteForce, r_social, r_currentCharacter);
				cargoBay(r_gas, r_parts, r_credits, r_cargo, r_contraband, r_storage, r_openSlots);
				shipStats(r_engineering, r_bruteForce, r_social, r_gas, r_parts, r_credits, r_cargo, r_contraband, r_storage);
				cout << "To see this at any time simply type \'ship\' when prompted for a word.\nPress enter to continue\n\n";
				cin.ignore();
				//Let user decide where to go first-restricted to first two planets for tutorial section
				cout << "Your fuel is low and parts are starting to break down its time to find a job.\n";
				cout << "Let's decide where to go.\nYour old war buddy Harkin is now a small time smuggler at Ria station.\n Or you could take your chances with the bounty hunters on the nearby planet of Boros\n";
				cout << "Would you like to go to Ria Station or the world of Boros? Type Ria for Ria Staition or Boros for Boros and press enter\n";
				locationSelection(r_locationChoice, r_story, r_invalid);
				progress = 0;
			}
		}
		//Ria first visit
		progress = 0;
		while (story == 3)
		{
			if (progress == 0)
			{
				Ria(r_onLocactionChoice, r_progress, r_invalid, r_captain);				
			}
			else if (progress == 1)
			{
				//cout << "Fuel tanks each cost 100 credits. How many fuel tanks would you like?\n";
				buyingFuel(r_gas, r_credits, r_broke, r_fullInventory, r_openSlots);
				cargoBay(r_gas, r_parts, r_credits, r_cargo, r_contraband, r_storage, r_openSlots);
				progress = 0;
			}
			else if (progress == 2)
			{
				//cout << "Spare parts each cost 100 credits. How many spare parts would you like?\n";
				buyingParts(r_parts, r_credits, r_broke, r_fullInventory, r_openSlots);
				cargoBay(r_gas, r_parts, r_credits, r_cargo, r_contraband, r_storage, r_openSlots);
				progress = 0;
			}
			else if (progress == 3)
			{
				cout << "You quickly track down Harkin on the station. He offers you a job transporting goods to Chondax.\nHe has 4boxes of cargo and 3boxes of contraband.\nYou will be paid 100 credits per box of cargo and 200 for each box of contraband you deliver\nChondax is 2 fuel points away\n";
				cout << "Would you like to accept Harkin's job?\n";
				YOrN(r_YesOrNo, r_invalid, r_progress);
			}
			else if (progress == 4)
			{
				//Ask user if they want to buy cargo
				acceptCargo(r_cargo, r_fullInventory, r_openSlots, r_numberOfCargo);
				cargoBay(r_gas, r_parts, r_credits, r_cargo, r_contraband, r_storage, r_openSlots);
				cout << "Your ship has " << r_openSlots << " inventory spaces left available.\n";

				
				//Ask user if they want to buy contraband
				cout << "How many contraband containers would you like? Enter a number between 0 and 3.\n";
				cin >> r_numberOfContraband;
				acceptContraband(r_contraband, r_fullInventory, r_openSlots, r_numberOfContraband);
				cargoBay(r_gas, r_parts, r_credits, r_cargo, r_contraband, r_storage, r_openSlots);
				cout << "Your ship has " << r_openSlots << " inventory spaces left available.\n";
				progress = 0;
			}
			else if (progress == 5) 
			{
				locationSelection(r_locationChoice, r_story, r_invalid);
			}
			else if (progress == 6)
			{
				shipStats(r_engineering, r_bruteForce, r_social, r_gas, r_parts, r_credits, r_cargo, r_contraband, r_storage);
				cin.ignore();
				progress = 0;
			}
		}
		//Boros first visit
		progress = 0;
		while (story == 4)
		{
			
			if (progress == 0)
			{
				Boros(r_onLocactionChoice, r_progress, r_invalid, r_captain);
			}
			else if (progress == 1) 
			{
				cout << "There is one job available. Smuggle 3 crates of contraband to chondax. Will you accept?\n";
				YOrN(r_YesOrNo, r_invalid, r_progress);
			}
			else if (progress == 2)
			{
				r_numberOfContraband = 3;
				acceptContraband(r_contraband, r_fullInventory, r_openSlots, r_numberOfContraband);
				cargoBay(r_gas, r_parts, r_credits, r_cargo, r_contraband, r_storage, r_openSlots);
				cout << "Your ship has " << r_openSlots << " inventory spaces left available.\n";
				progress = 0;
			}
			else if (progress == 3)
			{
				cout << "At the bar you find two potential crew members.\nAGrowing up in fringe space Alicia had honed her combat skills to a razors edge. She will boost your Brute Force.\nA life long tinkerer, Nathaniel will boost your engineering.\n";
				cout << "Each crew member will initally cost you 200 credits to hire and you will have to pay each of them 100 credits everytime you complete a job.\n";
				cout << "Would you like to hire Alicia or Nathaniel? Enter the crew members name you want to hire.\n";
				chooseCrew(r_currentCharacter, r_invalid, r_broke, r_credits, r_alicia, r_nathaniel);
				progress = 0;
			}
			else if (progress == 5)
			{
				locationSelection(r_locationChoice, r_story, r_invalid);
			}
			else if (progress == 6)
			{
				shipStats(r_engineering, r_bruteForce, r_social, r_gas, r_parts, r_credits, r_cargo, r_contraband, r_storage);
				cin.ignore();
				progress = 0;
			}

		}
		//Chondax first visit
		progress = 0;
		while (story == 5) 
		{
			cout << "Chondax, a beautiful agri world. With sprawling fields and wide blue skys, its open beauty belies a sinister danger waiting to strike\n";
			cout << "To sell cargo type market.\nTo sell contraband type underhive\n";
		}
		//story = 0;
	}


	return 0;
}


//Functions

//Adds two numbers
int addition(int a, int b)
{
	int r;
	r = a + b;
	return r;
}





