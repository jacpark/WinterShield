#pragma once
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

//Prototype functions
//get word from user
string getWordFromUser();
//get yes or no from user
void YOrN(string& r_YesOrNo, string& r_invalid, int& r_progress);
//get a destination from user
void locationSelection(string& r_locationChoice, int& r_story, string& r_invalid);
