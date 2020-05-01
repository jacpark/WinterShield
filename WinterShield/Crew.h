#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

class Crew
{

public:
	//prototype public methods (fuctions)
	void talk(string stuffToSay);
	void addCrewToShip(int& r_engineering, int & r_bruteForce, int& r_social);
	void removeCrewFromShip(int& r_engineering, int& r_bruteForce, int& r_social);

	//constructor
	Crew(string crewName, int Eng, int BF, int Soc);

private:
	//properties of crew
	string crewMemberName;
	int eng;
	int bF;
	int soc;


};

