#include<iostream.h>
#include<conio.h>

void main()
{
 clrscr();
 char *sub[7]= {"Web development(PHP/JSP)","Java Programming","Unix & Shell programming", "Cloud Computing", "Data Structures & Algorithms", "Discrete Structures","Data Communication"};
 cout<<endl;
 cout<<"Subjects in THIRD SEMESTER"<<endl;
	       cout<<endl;
 for(int i=0;i<7;i++)
 {
 cout<<i+1<<"."<<" "<<sub[i]<<endl;

}
getch();
}