#include "studentlist.h"
#include <iostream>
#include <iomanip>

using namespace std;

void menu();

int main()
{
	char choice;
	choice = toupper(choice);
	
		menu();
	do
	{
		switch(choice)
		{
			case 'I':	//import student file aka open file and read from it
			case 'S':	//Show student list
			case 'E':	//Export student info to a file
			case 'M':	menu();
			case 'Q':	
			{
				cout << "Be Seeyin ya real soon." << endl;
				break;
			}
			default:
			{
				cout << "That was not one of your options. Do it again" << endl;
				break;
			}	

		}
	}while(choice != 'Q');

return 0;
}

void menu()
{
	cout << "\t\t*** Student List menu ***" << endl << endl;

	cout <<"I \t Import students from a file" << endl;
	cout <<"S \t Show student list (brief)" << endl;
	cout <<"E \t Export a grade report (to file)"<< endl;
	cout <<"M \t Show this Menu"<< endl;
	cout <<"Q \t Quit Program"<< endl;
}
