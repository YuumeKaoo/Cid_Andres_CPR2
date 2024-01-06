#include <iostream>
#include <string>
#include <windows.h>
#include <conio.h>
#include <iomanip>
#include <ios>

using namespace std;

int passed = 0;
int failed = 0;
string fname;
string program;
string course1;
string course2;
string course3;
string course4;
string remarks[] = {"Passed", "Failed", "Passed", "Failed"};
string remark1;
string remark2;
string remark3;
string remark4;
float gwa;
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
    
    SubjA1:
    cout << "Term 1: ";
    cin >> subjA1;
    if (subjA1 >= 100 || subjA1 <= 0){
    	cout << "Invalid number! Please enter a valid number." << endl;
    	goto SubjA1;
	}
	SubjA2:
    cout << "Term 2: ";
    cin >> subjA2;
    if (subjA2 >= 100 || subjA2 <= 0){
    	cout << "Invalid number! Please enter a valid number." << endl;
    	goto SubjA2;
	}
	SubjA3:
    cout << "Term 3: ";
    cin >> subjA3;
    if (subjA3 >= 100 || subjA3 <= 0){
    	cout << "Invalid number! Please enter a valid number." << endl;
    	goto SubjA3;
	}
	SubjA4:
    cout << "Term 4: ";
    cin >> subjA4;
    if (subjA4 >= 100 || subjA4 <= 0){
    	cout << "Invalid number! Please enter a valid number." << endl;
    	goto SubjA4;
	}
    cout << "*********************************************************************" << endl;
    
    Course2Name:
    cout << "Enter Course Name 2: \t";
    cin.ignore();
    getline(cin, course2);
    
    SubjB1:
    cout << "Term 1: ";
    cin >> subjB1;
    if (subjB1 >= 100 || subjB1 <= 0){
    	cout << "Invalid number! Please enter a valid number." << endl;
    	goto SubjB1;
	}
	SubjB2:
    cout << "Term 2: ";
    cin >> subjB2;
    if (subjB2 >= 100 || subjB2 <= 0){
    	cout << "Invalid number! Please enter a valid number." << endl;
    	goto SubjB2;
	}
	SubjB3:
    cout << "Term 3: ";
    cin >> subjB3;
    if (subjB3 >= 100 || subjB3 <= 0){
    	cout << "Invalid number! Please enter a valid number." << endl;
    	goto SubjB3;
	}
	SubjB4:
    cout << "Term 4: ";
    cin >> subjB4;
    if (subjB4 >= 100 || subjB4 <= 0){
    	cout << "Invalid number! Please enter a valid number." << endl;
    	goto SubjB4;
	}
    cout << "*********************************************************************" << endl;
    
    Course3Name:
    cout << "Enter Course Name 3: \t";
    cin.ignore();
    getline(cin, course3);
    
    SubjC1:
    cout << "Term 1: ";
    cin >> subjC1;
    if (subjC1 >= 100 || subjC1 <= 0){
    	cout << "Invalid number! Please enter a valid number." << endl;
    	goto SubjC1;
	}
	SubjC2:
    cout << "Term 2: ";
    cin >> subjC2;
    if (subjC2 >= 100 || subjC2 <= 0){
    	cout << "Invalid number! Please enter a valid number." << endl;
    	goto SubjC2;
	}
	SubjC3:
    cout << "Term 3: ";
    cin >> subjC3;
    if (subjC3 >= 100 || subjC3 <= 0){
    	cout << "Invalid number! Please enter a valid number." << endl;
    	goto SubjC3;
	}
	SubjC4:
    cout << "Term 4: ";
    cin >> subjC4;
    if (subjC4 >= 100 || subjC4 <= 0){
    	cout << "Invalid number! Please enter a valid number." << endl;
    	goto SubjC4;
	}
    cout << "*********************************************************************" << endl;
    
    Course4Name:
    cout << "Enter Course Name 4: \t";
    cin.ignore();
    getline(cin, course4);
    
    SubjD1:
    cout << "Term 1: ";
    cin >> subjD1;
    if (subjD1 >= 100 || subjD1 <= 0){
    	cout << "Invalid number! Please enter a valid number." << endl;
    	goto SubjD1;
	}
	SubjD2:
    cout << "Term 2: ";
    cin >> subjD2;
    if (subjD2 >= 100 || subjD2 <= 0){
    	cout << "Invalid number! Please enter a valid number." << endl;
    	goto SubjD2;
	}
	SubjD3:
    cout << "Term 3: ";
    cin >> subjD3;
    if (subjD3 >= 100 || subjD3 <= 0){
    	cout << "Invalid number! Please enter a valid number." << endl;
    	goto SubjD3;
	}
	SubjD4:
    cout << "Term 4: ";
    cin >> subjD4;
    if (subjD4 >= 100 || subjD4 <= 0){
    	cout << "Invalid number! Please enter a valid number." << endl;
    	goto SubjD4;
	}
    cout << "*********************************************************************" << endl;
    
    cout << "Generating Report Card";
    for (int i = 0; i <=4; i++){
    	Sleep(1000);
    	cout << ".";
}
	system("cls");
	
	avg1 = (subjA1 + subjA2 + subjA3 + subjA4) / 4;
	remark1 = avg1 >= 70 ? "Passed" : "Failed";
	avg2 = (subjB1 + subjB2 + subjB3 + subjB4)/ 4;
	remark2 = avg2 >= 70 ? "Passed" : "Failed";
	avg3 = (subjC1 + subjC2 + subjC3 + subjC4) / 4;
	remark3 = avg3 >= 70 ? "Passed" : "Failed";
	avg4 = (subjD1 + subjD2 + subjD3 + subjD4) / 4;
	remark4 = avg4 >= 70 ? "Passed" : "Failed";
	
    if (remark1 == "Passed") {
      passed++;
    } else if (remark1 == "Failed") {
      failed++;
    }
    if (remark2 == "Passed") {
      passed++;
    } else if (remark2 == "Failed") {
      failed++;
    }
    if (remark3 == "Passed") {
      passed++;
    } else if (remark3 == "Failed") {
      failed++;
    }
    if (remark4 == "Passed") {
      passed++;
    } else if (remark4 == "Failed") {
      failed++;
    }
  
	gwa = (avg1 + avg2 + avg3 + avg4) / 4;

	cout << "*********************************************************************" << endl;
	cout << "Student Name: \t" << fname << endl; 
	cout << "Program: \t" << program << endl;
	cout << "*********************************************************************" << endl;
	cout << "Course Name\t\t\t" << "Term 1\t\t" << "Term 2\t\t" << "Term 3\t\t" << "Term 4\t\t" << "Average\t\t" << "Remarks\t\t" << endl;
	cout << course1 << setw(12) << setprecision(2) << fixed << subjA1 << "\t\t" << subjA2 << "\t\t" << subjA3 << "\t\t" << subjA4 << "\t\t" << avg1 << "\t\t" << remark1 << endl;
	cout << course2 << setw(15) << setprecision(2) << fixed << subjB1 << "\t\t" << subjB2 << "\t\t" << subjB3 << "\t\t" << subjB4 << "\t\t" << avg2 << "\t\t" << remark2 << endl;
	cout << course3 << setw(20) << setprecision(2) << fixed << subjC1 << "\t\t" << subjC2 << "\t\t" << subjC3 << "\t\t" << subjC4 << "\t\t" << avg3 << "\t\t" << remark3 << endl;
	cout << course4 << setw(22) << setprecision(2) << fixed << subjD1 << "\t\t" << subjD2 << "\t\t" << subjD3 << "\t\t" << subjD4 << "\t\t" << avg4 << "\t\t" << remark4 << endl;
	cout << "*********************************************************************" << endl;
	cout << "General Weighted Average: " << setw(11) << setprecision(2) << fixed << gwa << endl;
	cout << "Courses Passed: " << setw(21) << fixed << passed << endl;
	cout << "Courses Failed: " << setw(21) << fixed << failed << endl;
	cout << "*********************************************************************" << endl;
	return 0;
}
