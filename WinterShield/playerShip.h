#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

void chooseCaptain(string& r_captain, string& r_invalid, string& r_currentCharacter);
void chooseCrew(string& r_currentCharacter, string& r_invalid, string& r_broke, int& r_credits, int& r_alicia, int& r_nathaniel);
void changeShipStats(int& r_engineering, int& r_bruteForce, int& r_social, string& r_currentCharacter);
void shipStats(int& r_engineering, int& r_bruteForce, int& r_social, int& r_gas, int& r_parts, int& r_credits, int& r_cargo, int& r_contraband, int& r_storage);
void cargoBay(int& r_gas, int& r_parts, int& r_credits, int& r_cargo, int& r_contraband, int& r_storage, int& r_openSlots);
