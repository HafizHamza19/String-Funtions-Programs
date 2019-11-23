#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
void main()
{
	char name[20];
	cout<<"Enter Your Name : ";
	cin >>name;
	char lname[20];
	cout<<"Enter Your Last Name : ";
	cin>> lname;
	strcmp(name,lname);
	if(strcmp(name,lname)==0){
	cout <<"\nThese are same "<< endl;

	
	}
	else if(strcmp(name,lname)!= 0){
	
	cout <<"\nThese are not same "<< endl;
	}



	getch();
}