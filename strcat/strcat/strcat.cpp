#include<iostream>
#include<string>
#include<conio.h>
using namespace std;
void main()
{
	char fname[20];
	char lname[20];
	cout <<"Enter Your First Name : ";
	cin.getline(fname,20);
	cout <<"Enter Your Last Name : ";
	cin.getline(lname,20);
	 cout <<"\n\nCompared : "<<  strcat(fname,lname) << endl << endl;
	 getch();
}