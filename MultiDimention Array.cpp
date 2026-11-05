#include<iostream>
using namespace std;
int main(){
    int n,m,i,j;
    cout<<"Enter a Number";
    cin>>n>>m;
    int a[n][m];
    cout<<"Array Elements:";
    for(int i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {

            cin>>a[i][j];
        }
    }
    cout<<"\nEnter Array Elements:\n";
    for(i=0;i<n;i++)
    {
    for(j=0;j<m;j++)
    {
    cout<<a[i][j]<<"\t";
    }
    cout<<endl;
    }
}