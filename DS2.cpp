#include<iostream.h>
#include<conio.h>

void main()
{
 int arr1[5];
 int x;
 clrscr();
 
 for(x=0;x<5;x++)
 {
  cout<<"Enter the "<<x<<"th element:";
  cin>>arr1[x];
 }
 cout<<"\nElements of the array are:\n";
 for(x=0;x<5;x++)
 {
   cout<<"\narr["<<x<<"]="<<arr1[x];
 }
 getch();
}