// Write a C++ program to convert Celsius to Fahrenheit.

#include<iostream>
using namespace std;
int main(){
    float celsius;
    float fahrenheit;

    cout<<"Enter Temperature in Celsius : ";
    cin>>celsius;

    cout<<"Temperature in Fahrenheit = "<<(celsius * 9/5) + 32;

    return 0;
}