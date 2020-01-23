#include<iostream>
using namespace std;
int main()
{
int a[10],n,i,p,j,c=0;
cout<<"enter size";
cin>>n;
cout<<"enter elements of array";
for(i=0;i<n;i++)
{
cin>>a[i];

}
cout<<"array elements are";
for(i=0;i<n;i++)
{
cout<<a[i];
}
cout<<"enter the elements to be deleted";
cin>>p;
for(i=0;i<n;i++)
{
if(p==a[i])
{

for(j=i;j<n;j++)
{

    a[j]=a[j+1];
}
n--;
}

}

cout<<"new array is";
for(i=0;i<n;i++)
{

    cout<<a[i];
}
}
