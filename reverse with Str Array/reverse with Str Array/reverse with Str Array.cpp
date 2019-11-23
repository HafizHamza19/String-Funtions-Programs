#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
void main()
{
	string word[5];
	int x;
	for(x=0;x<5;x++)
	{
		cout<<"Enter Word : ";
		getline(cin,word[x]);
	}
	cout<<"         Reverse Form Is";
	for(x=0;x<5;x++)
{		
	cout<<"\n"<<word[x]<<" = ";
	reverse(word[x].begin(),word[x].end());
	cout<<word[x];

	}
	getch();
}