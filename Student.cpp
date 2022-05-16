#include "Student.h"
#include <iostream>
#include <cstring>

// Assign studentId and name
Student::assignDetails(int pstudentId, const char pname[]) {
   studentId = pstudentId;
   strcpy(name,pname)
 }

// Display StudentId and Name
void Student::display() {
  cout<< ".................."<<endl;
  cout<<"Student ID :"<<studentId<<endl;
  cout<<"Student name:"<<name<<endl;
  cout<<"..................."<<endl;
}
