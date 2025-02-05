#ifndef StudentManage_H
#define StudentManage_H
#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
#include<fstream>
#include<iostream>
#include "Student.h"
using namespace std;
class StudentManage{
private:
	vector <Student> students;
	string filename;
public:
	StudentManage(string fname);
	void AddStudent();
	void FindStudent();
	void ModifyStudent();
	void DeleteStudent();
	void SortStudent();
	void DisplayAllStudent();
	void SaveData();
	void Run();
	
};
#endif
