// Write a C++ program to calculate the volume of a cuboid.
#include<iostream>
using namespace std;
int main()
{
    int length,breadth,height,volume;
    cout<<"Enter length breadth and height of cuboid";
    cin>>length>>breadth>>height;
    volume=length*breadth*height;
    cout<<"Volume of cuboid is "<<volume;
    return 0;
}