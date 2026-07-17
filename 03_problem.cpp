// Write a C++ program to calculate the area and perimeter of a rectangle.

#include<iostream>
using namespace std;
int main(){
    float length;
    float breadth;

    cout<<"Enter the length : ";
    cin>>length;

    cout<<"Enter the breadth :";
    cin>>breadth;

    cout<<"The area of rectangle is :"<<length*breadth<<endl;
    cout<<"The perimeter of a rectangle is :"<<2*(length+breadth);

    return 0;
}