#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

void buyingFuel(int& r_gas, int& r_credits, string& r_broke, string& r_fullInventory, int& r_openSlots);
void buyingParts(int& r_parts, int& r_credits, string& r_broke, string& r_fullInventory, int& r_openSlots);
void acceptCargo(int& r_cargo, string& r_fullInventory, int& r_openSlots, int& r_numberOfCargo);
void sellCargo(int& r_credits, int& r_cargo, string& r_invalid, string& r_captain, int& r_numberOfCargo);
void acceptContraband(int& r_contraband, string& r_fullInventory, int& r_openSlots, int r_numberOfContraband);
void sellContraband(int& r_credits, int& r_contraband, string& r_invalid, string& r_captain, int& r_numberOfContraband);