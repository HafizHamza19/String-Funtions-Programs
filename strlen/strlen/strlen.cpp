#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
void main()
{
	char name[20];
	cout<<"Enter Your Name :";
	cin>>name;
	strlen(name);
	cout<<"\n"<<"This Name Has "<<strlen(name)<<"  Alphabets.";
	
	
	//String
	cout<<"\n\n\n     From String";
	string Fname;
	cout<<"\nEnter Your Father Name : ";
	cin>>Fname;
	cout<<"\n"<<"This Name Has "<<Fname.length()<<" Alphabets.";
	getch();
}