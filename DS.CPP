#include<iostream.h>
#include<conio.h>

void main()
{
 clrscr();
 char *sub[7]= {"Data Structures & Algorithms","Java Programming","Unix & Shell programming", "Cloud Computing", "Web Development", "Discrete Structures","Data Communication"};
 cout<<endl;
 cout<<"Subjects in Third Sem"<<endl;
	       cout<<endl;
 for(int i=0;i<7;i++)
 {
 cout<<i+1<<"."<<" "<<sub[i]<<endl;

}
getch();
}
