#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
#include "playerShip.h"
using namespace std;

//Ria station
void Ria(string& r_onLocationChoice, int& r_progress, string& r_invalid, string& r_captain)
{
	int end = 0;

	while (end == 0)
	{

		cout << r_captain << ", you are on Ria Station.\n";
		cout << "Would you like to buy fuel, or spare parts for your ship, or search for harkin?\nEnter fuel, parts, or Harkin.\n";
		cout << "When your done here Enter fly to choose a new destination.\n";
		cin >> r_onLocationChoice;
		if (r_onLocationChoice == "Fuel" || r_onLocationChoice == "fuel")
		{
			r_progress = 1;
			++end;
		}
		else if (r_onLocationChoice == "Parts" || r_onLocationChoice == "parts")
		{
			r_progress = 2;
			++end;
		}
		else if (r_onLocationChoice == "Harkin" || r_onLocationChoice == "harkin")
		{
			r_progress = 3;
			++end;
		}
		else if (r_onLocationChoice == "Ship" || r_onLocationChoice == "ship")
		{
			cout << "Looking at stats\n";
			r_progress = 6;
			++end;
		}
		else if (r_onLocationChoice == "Fly" || r_onLocationChoice == "fly")
		{
			r_progress = 5;
			cout << "Where would you like to go next? Enter Boros or Chondax.\n";
			++end;
		}
		else
		{
			cout << r_invalid << endl;
		}
	}
}
//Boros Planet
void Boros(string& r_onLocationChoice, int& r_progress, string& r_invalid, string& r_captain)
{
	int end = 0;
	while (end == 0)
	{
		cout << r_captain << ", you are on the Planet of Boros.\n";
		cout << "Would you like to check the job board or look for crew at the bar? Enter Job or crew.\n";
		cout << "When your done here Enter fly to choose a new destination.\n";
		cin >> r_onLocationChoice;
		if (r_onLocationChoice == "Job" || r_onLocationChoice == "job")
		{
			r_progress = 1;
			++end;
		}
		else if (r_onLocationChoice == "Crew" || r_onLocationChoice == "crew")
		{
			r_progress = 3;
			++end;
		}
		else if (r_onLocationChoice == "Ship" || r_onLocationChoice == "ship")
		{
			cout << "Looking at stats\n";
			r_progress = 6;
			++end;
		}
		else if (r_onLocationChoice == "Fly" || r_onLocationChoice == "fly")
		{
			r_progress = 5;
			cout << "Where would you like to go next? Enter Ria or Chondax.\n";
			++end;
		}
		else
		{
			cout << r_invalid << endl;
		}

	}

}
//Chondax Planet
void Chondax(string& r_onLocationChoice, int& r_progress, string& r_invalid, string& r_captain) 
{
	int end = 0;
	while (end == 0)
	{
		cout << r_captain << " ,you are on the Planet Chondax.\n";
		cout << "To sell cargo type market.\nTo sell contraband type underhive\n";
		cin >> r_onLocationChoice;
		if (r_onLocationChoice == "Market" || r_onLocationChoice == "market")
		{
			r_progress = 1;
			++end;
		}
		else if (r_onLocationChoice == "Underhive" || r_onLocationChoice == "underhive")
		{
			r_progress = 3;
			++end;
		}
		else if (r_onLocationChoice == "Ship" || r_onLocationChoice == "ship")
		{
			cout << "Looking at stats\n";
			r_progress = 6;
			++end;
		}
		else if (r_onLocationChoice == "Fly" || r_onLocationChoice == "fly")
		{
			r_progress = 5;
			cout << "Where would you like to go next? Enter Ria or Boros\n";
			++end;
		}
		else
		{
			cout << r_invalid << endl;
		}
	}
}