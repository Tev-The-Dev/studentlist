
enum Course {MATH, ENGLISH, HISTORY};

class StudentList
{
public:
	StudentList();		// starts out empty
	~StudentList();		// cleanup (destructor)

	bool ImportFile(const char* filename);
	bool CreateReportFile(const char* filename);
	void ShowList() const;	// print basic list data

protected:

	StudentList(char*, char*, Course);

private:
	int size;
	char* fname,* lname;
	Course choose;

};

class English : public StudentList
{
public:
	English(const char* fname,const char* lname, Course s, int attend, int proj, int mid, int final);
	void GetFinal();
	void PrintAverage();

private:
	int Attendance, Project, Midterm, Final;

};


class Math : public StudentList
{
public:
	Math(char* fname, char* lname, Course s, int final, double qaverage);
	void GetFinal();
	void PrintAverage();
private:
	int q1, q2, q3, q4, q5, Test1, Test2, Final;
};

class History : public StudentList
{
public:
	History(char* fname, char* lname, Course s, double Term, double Midterm, double Final);
private:
	double Paper, Midterm, Final;
};

