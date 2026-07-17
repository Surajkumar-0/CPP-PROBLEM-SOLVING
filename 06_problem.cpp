// Write a C++ program to convert Fahrenheit to Celsius.

#include<iostream>
using namespace std;
int main(){
    float fahrenheit;

    cout<<"Enter Temperature in fahrenheit : ";
    cin>>fahrenheit;

    cout<<"Temperature in celsius = "<<(fahrenheit- 32) * 5 / 9;

    return 0;
}