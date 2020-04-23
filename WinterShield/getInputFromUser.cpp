#include <iostream>
#include <ctime>
#include <cstdlib>
#include <string>
using namespace std;

string getWordFromUser()
{
	string input{};
	cin >> input;

	return input;
}

//Get yes or no from user
void YOrN(string& r_YesOrNo, string& r_invalid, int& r_progress)
{
	int end = 0;
	while (end == 0)
	{
		cout << "Enter \'Y\' for yes or \'N\' for no.\n";
		cin >> r_YesOrNo;


		if (r_YesOrNo == "y" || r_YesOrNo == "Y")
		{
			cout << "You chose yes\n";
			++r_progress;
			++end;
		}
		else if (r_YesOrNo == "n" || r_YesOrNo == "Y")
		{
			cout << "You chose no\n";
			r_progress = 0;
			++end;
		}
		else
		{
			cout << r_invalid << endl;
		}
	}
}
//Loop to ensure player enters a valid destination
void locationSelection(string& r_locationChoice, int& r_story, string& r_invalid)
{
	cin >> r_locationChoice;
	if (r_locationChoice == "Ria" || r_locationChoice == "ria")
	{
		r_story = 3;
	}
	else if (r_locationChoice == "Boros" || r_locationChoice == "boros")
	{
		r_story = 4;
	}
	else
	{
		cout << r_invalid << endl;
	}
}

