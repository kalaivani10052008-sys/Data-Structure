#include<iostream>
using namespace std;
int main(){
int n,i;
cout <<"Enter the Number of array:";
cin>>n;
int a[n];
cout<<"Enter the Number of array elements:"; 
for (i=0;i<n;i++)
{
    cin>>a[i];
}
cout<<"Array Elements:";
for(i=0;i<n;i++)
{
    cout<<a[i];
}
}