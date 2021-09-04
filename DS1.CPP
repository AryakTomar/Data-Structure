#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 char word[10]= {'D','N','A','L','R','E','H','T','O','M'};
 cout<<"After reversing the order in array."<<endl;
 for(int i=9;i>=0;i--)
 {
 cout<<word[i];
 }
 getch();
 }