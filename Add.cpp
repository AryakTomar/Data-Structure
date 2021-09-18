#include<iostream>
using namespace std;
int main()
{
int A[10][10],B[10][10],C[10][10];
int i,j,m,n,p,q;
cout<<"Enter size of array A";
cin>>m>>n;
cout<<"Enter size of array B";
cin>>p>>q;
cout<<"Enter matrix A values";
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
cin>>A[i][j];
}
}
cout<<"Enter elements of B";
for(i=0;i<p;i++){
    for(j=0;j<q;j++){
        cin>>B[i][j];
    }
    }
    
    for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
C[i][j]=(A[i][j])*(B[i][j]);
}
}
cout<<"The addition of Matrix is";
for(i=0;i<p;i++){
    for(j=0;j<q;j++){
        cout<<C[i][j];
        cout<<endl;
    }
    }
return 0;
}