#include "Crew.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

//Crew member class
Crew::Crew(string crewName, int Eng, int BF, int Soc) 
{
	//cout << "I am born!\n";
	crewMemberName = crewName;
	eng = Eng;
	bF = BF;
	soc = Soc;
}

void Crew::talk(string stuffToSay)
{
	cout << endl << crewMemberName<< " sais " << stuffToSay << endl;
}
void Crew::addCrewToShip(int& r_engineering, int& r_bruteForce, int& r_social)
{
	r_engineering = r_engineering + eng;
	r_bruteForce = r_bruteForce + bF;
	r_social = r_social + soc;
}
void Crew::removeCrewFromShip(int& r_engineering, int& r_bruteForce, int& r_social)
{
	r_engineering = r_engineering - eng;
	r_bruteForce = r_bruteForce - bF;
	r_social = r_social - soc;
}