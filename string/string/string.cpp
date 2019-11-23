#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
void main()
{
	char name[20];
	cout<<"Enter Your Name : ";
	cin.getline(name,20);
	char fname[20];
	
	strcpy(fname,name);

	cout<<"\n\nThe Copied Is "<<fname;

	getch();
}