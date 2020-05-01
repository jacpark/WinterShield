#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

//Function to purchase fuel
void buyingFuel(int& r_gas, int& r_credits, string& r_broke, string& r_fullInventory, int& r_openSlots)
{
	int fuelPurchased;
	int fuelCost;
	cout << "Fuel tanks each cost 100 credits. How many fuel tanks would you like?\n";
	cin >> fuelPurchased;
	fuelCost = fuelPurchased * 100;

	//check player funds
	if (fuelCost > r_credits)
	{
		cout << r_broke;
	}
	//check inventory space
	else
	{
		if (fuelPurchased > r_openSlots)
		{
			cout << r_fullInventory;
		}
		else
		{
			r_gas = r_gas + fuelPurchased;
			r_credits = r_credits - fuelCost;
			cout << "You now have " << r_gas << " fuel.\nYou have " << r_credits << " credits remaining.\n";
		}
	}

}
//Function to purchase spare parts
void buyingParts(int& r_parts, int& r_credits, string& r_broke, string& r_fullInventory, int& r_openSlots)
{
	int partsPurchased;
	int partsCost;
	cout << "Spare parts each cost 200 credits. How many spare parts would you like?\n";
	cin >> partsPurchased;
	partsCost = partsPurchased * 200;

	//check player funds
	if (partsCost > r_credits)
	{
		cout << r_broke;
	}
	//check inventory space
	else
	{
		if (partsPurchased > r_openSlots)
		{
			cout << r_fullInventory;
		}
		else
		{
			r_parts = r_parts + partsPurchased;
			r_credits = r_credits - partsCost;
			cout << "You now have " << r_parts << " spare parts.\nYou have " << r_credits << " credits remaining.\n";
		}
	}
}
//Function to accept cargo
void acceptCargo(int& r_cargo, string& r_fullInventory, int& r_openSlots, int& r_numberOfCargo)
{
	cout << "How many cargo containers would you like? Enter a number between 0 and 4.\n";
	cin >> r_numberOfCargo;
	if (r_numberOfCargo > r_openSlots)
	{
		cout << r_fullInventory;
	}
	else if (r_numberOfCargo <= r_openSlots)
	{
		r_cargo = r_cargo + r_numberOfCargo;
		cout << "You now have " << r_cargo << " cargo containers.\n";
		//cout << "Your ship has " << r_openSlots << " inventory spaces left available.\n";
	}
	else
	{
	
	}

}
//Function to sell cargo
void sellCargo(int& r_credits, int& r_cargo, string& r_invalid, string& r_captain, int& r_numberOfCargo)
{
	int income;

	cout << r_captain << " You currently have " << r_cargo << " cargo containers.\n";
	cout << "How many cargo containers would you like to sell?\n";
	cin >> r_numberOfCargo;
	if (r_numberOfCargo > r_cargo)
	{
		cout << r_invalid << endl;
	}
	else
	{
		income = r_numberOfCargo * 100;
		r_cargo = r_cargo - r_numberOfCargo;
		r_credits = r_credits + income;
		cout << r_captain << " You now have " << r_credits << " credits.\n";
	}

}
//Function to accept contraband
void acceptContraband(int& r_contraband, string& r_fullInventory, int& r_openSlots, int r_numberOfContraband)
{

	if (r_numberOfContraband > r_openSlots)
	{
		cout << r_fullInventory;
	}
	else
	{
		r_contraband = r_contraband + r_numberOfContraband;
		cout << "You now have " << r_contraband << " contraband containers.\n";
		//cout << "Your ship has " << r_openSlots << " inventory spaces left available.\n";
	}
}
//Function to sell Contraband
void sellContraband(int& r_credits, int& r_contraband, string& r_invalid, string& r_captain, int& r_numberOfContraband)
{
	int income;

	cout << r_captain << " You currently have " << r_contraband << " contraband containers.\n";
	cout << "How many contraband containers would you like to sell?\n";
	cin >> r_numberOfContraband;
	if (r_numberOfContraband > r_contraband)
	{
		cout << r_invalid << endl;
	}
	else
	{
		income = r_numberOfContraband * 200;
		r_contraband = r_contraband - r_numberOfContraband;
		r_credits = r_credits + income;
		cout << r_captain << " You now have " << r_credits << " credits.\n";
	}

}