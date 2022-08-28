// Write a C++ program to add all the numbers of an array of size 10
#include<iostream>
using namespace std;
int main()
{
    int n=10,i,sum=0;
    int num[n];

    cout<<"Enter 10 numbers: ";
    for(i=0;i<n;i++)
    {
        cin>>num[i];
        sum=sum+num[i];
    }
cout<<"Sum is "<<sum;
return 0;
}