#include <fstream>
#include <iostream>
#include <iomanip>
#include "studentlist.h"
#include <cstdlib>

using namespace std;

StudentList::StudentList()
{
	fname = 0;
	lname = NULL;
	choose = MATH;


}

StudentList::~StudentList()
{
	delete [] fname;
	delete [] lname;
}

bool StudentList::ImportFile(const char* filename)
{
	ifstream infile;

	infile.clear();
	infile.open(filename);

	if(!infile)
	{	
		cout << "Invalid file. No data imported" << endl;
		exit(0);
	}
	else
	{
		infile >> size;
		return 0;
	}
}

bool StudentList::CreateReportFile(const char* filename)
{
	ofstream outfile;
	
	outfile.clear();
	outfile.open(filename);
	
	if(!outfile)
		return 1;
	else
		return 0;
}

void StudentList::ShowList() const
{
	/*
 	This function should print to the screen the current list of students, one student per line. The only information needed in this printout is last name, first name, and course name. Format this output so that it lines up in columns

	 */
}

StudentList::StudentList(char* fn, char* ln, Course c)
{
	strcpy(fname, fn);
	strcpy(lname, ln);
	strcpy(choose, c);

}

/*=============================================================================*/
/*--------------------ENGLISH STUDENT INFORMATION------------------------------*/
/*=============================================================================*/
/*
English::English(const char* fn, const char* ln,const char* c, int atten, int proj, int mid, int fin)
		 :StudentList(fn, ln, c)
{
	Attendance = atten;
	Project = proj;
	Midterm = mid;
	Final = fin;
}
void English::GetFinal()
{
	return Final;
}
void English::PrintAverage()
{
	Average = (Final + Midterm + Term)/300.0;
	Average = Average *100.0;

	return Average;
}
*/
/*=============================================================================*/
/*--------------------MATH STUDENT INFORMATION------------------------------*/
/*=============================================================================*/
/*
Math::Math(const char* fn, const char* ln, const char* c, int qz1, int qz2, int qz3, int qz4, int qz5, int T1, int T2, int fin)	:StudentList(fn, ln, c)
{
  q1 = qz1;
  q2 = qz2;
  q3 = qz3;
  q4 = qz4;
  q5 = qz5;
  Test1 = T1;
  Test2 = T2;
  Final = fin;

}
int Math::GetFinal()
{
  return Final;
}
double Math::PrintAverage()
{
  Average =(q1 + q2+ q3 + q4 + q5 + Test_1 + Test_2 + Final)/800.0;
  Average = Average*100.0;

  return Average;
}
*/
/*=============================================================================*/
/*--------------------HISTORY STUDENT INFORMATION------------------------------*/
/*=============================================================================*/
/*
History::History(const char* fn, const char* ln,const char* c, int atten, int proj, int mid, int fin)
	:StudentList(fn, ln, c)
{

	Attendance = atten;
	Project = proj;
	Midterm = mid;
	Final = fin;
}

int History::GetFinal()
{
  return Final;
}
double History::Print_Avg()
{
  Average = (Attendance + Project + Midterm + Final)/400.0;
  Average = Average*100.0;


  return Average;
}
*/


