//QUES- Addition Of Matrix

#include<iostream.h>
#include<conio.h>
void main()
{
 int mat1[10][10][10],mat2[10][10][10];
 int sum[10][10][10];
 int i,j,k;
 int A,B,C;
 clrscr();
 cout<<"Addition of two 3D arrays "<<endl;
 cout<<"Entering the values for both the matrices "<<endl;
 cout<<"Enter the number of 2d arrays you want to form "<<endl;
 cin>>A;
 cout<<"Enter the number of rows"<<endl;
 cin>>B;
 cout<<"Enter the number of columns "<<endl;
 cin>>C;
 cout<<"No. of entries in each matrix = "<<A*B*C<<endl;
 cout<<endl;
 cout<<"Now, enter the values in matrix 1"<<endl;
 for(i=0;i<A;i++)
 {
  for(j=0;j<B;j++)
  {
   for(k=0;k<C;k++)
   {
   cin>>mat1[i][j][k];
   }}}
   cout<<"Now, enter the values in matrix 2"<<endl;
 for(i=0;i<A;i++)
 {
  for(j=0;j<B;j++)
  {
   for(k=0;k<C;k++)
   {
   cin>>mat2[i][j][k];
   }}}
	 cout<<"Addition "<<endl;
 for(i=0;i<A;i++)
 {
  for(j=0;j<B;j++)
  {
   for(k=0;k<C;k++)
   {
   sum[i][j][k]=mat1[i][j][k]+mat2[i][j][k];
   cout<<"["<<i<<"]"<<"["<<j<<"]"<<"["<<k<<"]"<<" = "<<sum[i][j][k]<<endl;
   }}}
   getch();
   }