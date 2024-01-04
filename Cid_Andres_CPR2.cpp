#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

string fname;
string program;
string course1;
string course2;
string course3;
string course4;
int subjA1;
int subjA2;
int subjA3;
int subjA4;
int subjB1;
int subjB2;
int subjB3;
int subjB4;
int subjC1;
int subjC2;
int subjC3;
int subjC4;
int subjD1;
int subjD2;
int subjD3;
int subjD4;

//Subjects: Theorycrafting, Lore, Character Design, Music

int main(){
	
	system("Color 0A");
	
	cout << "*********************************************************************" << endl;
	cout << "\t\t  HoYoverse Institute of Gacha Games" << endl;
	cout << "\t\t\tGrades Encoding System" << endl;
	cout << "*********************************************************************" << endl;
	
	StudentName:
	cout << "Student Name: \t";
	cin.ignore();
    getline(cin, fname);
	
	ProgramName:
	cout << "Program Name: \t";
	cin.ignore();
    getline(cin, program);
    
	cout << "*********************************************************************" << endl;
	
	Course1Name:
	cout << "Enter Course Name 1: \t";
	cin.ignore();
    getline(cin, course1);
    
    Course1Grades:
    cout << "Term 1: ";
    cin >> subjA1;
    cout << "Term 2: ";
    cin >> subjA2;
    cout << "Term 3: ";
    cin >> subjA3;
    cout << "Term 4: ";
    cin >> subjA4;
    cout << "*********************************************************************" << endl;
    
    Course2Name:
    cout << "Enter Course Name 2: \t";
	cin.ignore();
    getline(cin, course2);
    
    Course2Grades:
    cout << "Term 1: ";
    cin >> subjB1;
    cout << "Term 2: ";
    cin >> subjB2;
    cout << "Term 3: ";
    cin >> subjB3;
    cout << "Term 4: ";
    cin >> subjB4;
    cout << "*********************************************************************" << endl;
    
    Course3Name:
    cout << "Enter Course Name 3: \t";
	cin.ignore();
    getline(cin, course3);
    
    Course3Grades:
    cout << "Term 1: ";
    cin >> subjC1;
    cout << "Term 2: ";
    cin >> subjC2;
    cout << "Term 3: ";
    cin >> subjC3;
    cout << "Term 4: ";
    cin >> subjC4;
    cout << "*********************************************************************" << endl;
    
    Course4Name:
    cout << "Enter Course Name 4: \t";
	cin.ignore();
    getline(cin, course4);
    
    Course4Grades:
    cout << "Term 1: ";
    cin >> subjD1;
    cout << "Term 2: ";
    cin >> subjD2;
    cout << "Term 3: ";
    cin >> subjD3;
    cout << "Term 4: ";
    cin >> subjD4;
    cout << "*********************************************************************" << endl;
    
    cout << "Generating Report Card";
    for (int i = 0; i <=4; i++){
    	Sleep(1000);
    	cout << ".";
}
	return 0;
}
