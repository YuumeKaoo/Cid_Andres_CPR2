#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <iomanip>
#include <ios>

using namespace std;

string fname;
string program;
string course1;
string course2;
string course3;
string course4;
float avg1;
float avg2;
float avg3;
float avg4;
float subjA1;
float subjA2;
float subjA3;
float subjA4;
float subjB1;
float subjB2;
float subjB3;
float subjB4;
float subjC1;
float subjC2;
float subjC3;
float subjC4;
float subjD1;
float subjD2;
float subjD3;
float subjD4;

//Subjects: Theorycrafting, Lore, Character Design, Music

int main(){
	
	system("Color 0A");
	
	cout << "*********************************************************************" << endl;
	cout << "\t\t  HoYoverse Institute of Gacha Games" << endl;
	cout << "\t\t\tGrades Encoding System" << endl;
	cout << "*********************************************************************" << endl;
	
	StudentName:
	cout << "Student Name: \t";
    getline(cin, fname);
	
	ProgramName:
	cout << "Program: \t";
    getline(cin, program);
    
	cout << "*********************************************************************" << endl;
	
	Course1Name:
	cout << "Enter Course Name 1: \t";
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
	system("cls");
	
	avg1 = subjA1 + subjA2 + subjA3 + subjA4 / 4;
	avg2 = subjB1 + subjB2 + subjB3 + subjB4 / 4;
	avg3 = subjC1 + subjC2 + subjC3 + subjC4 / 4;
	avg4 = subjD1 + subjD2 + subjD3 + subjD4 / 4;

	cout << "*********************************************************************" << endl;
	cout << "Student Name: \t" << fname << endl; 
	cout << "Program: \t" << program << endl;
	cout << "*********************************************************************" << endl;
	cout << "Course Name \t\t\t\t" << "Term 1 \t\t" << "Term 2 \t\t" << "Term 3 \t\t" << "Term 4 \t\t" << "Average \t" << "Remarks \t" << endl;
	cout << course1 << setw(25) << "\t" << subjA1 << "\t" << subjA2 << "\t" << subjA3 << "\t" << subjA4 << "\t" << avg1;
	cin.ignore();
	getline(cin, course1);
	return 0;
}
