/*
Author: Frida Mesa
Course: CSCI-135
Instructor: Genady Maryash
Assignment: Homework E3.5
I wrote a program that reads three numbers and prints “increasing” if they are in increasing order, “decreasing” if they are in decreasing order, 
and “neither” otherwise. Here, “increasing” means “strictly increasing”, with each value larger than its predecessor. 
The sequence 3 4 4 would not be considered increasing.
*/

#include <iostream>
using namespace std;
int main() 
{

int a, b, c;

cout << "Enter three numbers: "<< endl;

cin >> a >> b >> c;

if (a < b < c) 
{
cout << "increasing"<< endl;
} 

else if (a > b > c)
{
cout << "decreasing"<< endl;
} 

else 
{
cout << "neither"<< endl;
}

return 0;

}
