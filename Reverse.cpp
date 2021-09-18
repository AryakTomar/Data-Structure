#include<iostream>
using namespace std;

int main()
{
   int arr[10];
   cout<<"enter the elements"<<endl;
   for(int i=0;i<10;i++)
   {
       cin>>arr[i];
   }
   cout<<"reversed array: "<<endl;
   for(int i=9;i>=0;i--)
   {
       cout<<arr[i]<<endl;
   }

    return 0;
}