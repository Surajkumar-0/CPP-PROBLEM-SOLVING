// Write a C++ program to calculate the area and circumference of a circle.

#include<iostream>
using namespace std;
int main(){
    float r;

    cout<<"Enter the radius : ";
    cin>>r;

    cout<<"The area of circle is :"<<3.14*r*r<<endl;
    cout<<"The circumference of a circle is :"<<2*3.14*r;

    return 0;
}