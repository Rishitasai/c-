#include<iostream>
using namespace std;
 class student
 {
 	public:
 		int id;
 		string name;
 };
 int main ()
 {
 	student s1;
 	s1.id = 29;
 	s1.name ="ramu";
 	cout<<"Student ID :"<<s1.id<<endl;
 	cout<<"Student name :"<<s1.name<<endl;
 	return 0;
 }
