#include<iostream>
using namespace std;
int main()
{
 int arr[2][3][3]={{{1,2,3},{4,5,6},{7,8,9}},
                {{10,11,12},{13,14,15},{16,17,18}}};
 int i,j,k;
 cout<<"Row wise\n";
 for(i=0;i<2;i++)
   {
     for(j=0;j<3;j++) 
	 {
	 	for(k=0;k<3;k++)
	 	{
	 	cout<<"["<<i<<"]"<<"["<<j<<"]"<<"["<<k<<"]"<<"="<<arr[i][j][k];
	    }
	    cout<<"\n";
	 }
	 cout<<"\n";
   }
 cout<<"Coloumn wise\n";
 for(i=0;i<2;i++)
   {
     for(k=0;k<3;k++) 
	 {
	 	for(j=0;j<3;j++)
	 	{
        cout<<"["<<i<<"]"<<"["<<j<<"]"<<"["<<k<<"]"<<"="<<arr[i][j][k];	  
		  }
	    cout<<"\n";
	 }
	 cout<<"\n";
   }
   
   return 0;
}