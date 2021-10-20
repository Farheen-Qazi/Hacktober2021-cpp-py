#include<iostream>
using namespace std;
struct students{
	int obtained_marks;
	float total_marks;
	int percentage;
	
};
int main()
{
	students s1;
	cout<<"enter obtained marks: ";
	cin>>s1.obtained_marks;
	cout<<"enter total marks: ";
	cin>>s1.total_marks;
	cout<<"DISPLAYING PERCENTAGE OF STUDENTS...\n";
	cout<<"OBTAINED MARKS="<<s1.obtained_marks<<endl;
	cout<<"TOTAL MARKS="<<s1.total_marks<<endl;
	s1.percentage=s1.obtained_marks/s1.total_marks*100;
	cout<<"PERCENTAGE IS = "<<s1.percentage<<"%.";
	return 0;
}
