/*
Miguel Eduardo Cabrera
Homework#1, string, string methods and numerical variables
Activity#2
Feb 8, 2026
*/

/* Step 1) sets variable pi as a constant with initial value of 3.14159
Step 2) Asks the user to enter a radius and a height from the keyboard. Store the values as float variable.
Step 3) Checks if the radius is greater than the height. Store the result in a bool variable
Step 4) Checks if the radius is equal to the height. Store the result in a bool variable
Step 5) Triple the height and increase the radius by 5 using assignment operators.
Step 6) uses logical and comparison operators to check if the radius is not equal to the height and greater than the height. Store the result in a bool variable.
Step 7) uses the radius and height from step 5 to calculate the volume of the right cylinder. The formula to calculate the volume of the right cylinder is:
Volume = PI*radius2*height
Store the volume in a float variable.
Step 8) Prompt result from step 3, 4, 5, 6, and 7 (you must use \t to align the result).
*/

#include<iostream>
using namespace std;

int main(){

// Step 1: Set constant pi
    const float pi = 3.14159;

// Step 2: Ask user for radius and height
    float radius, height;
    cout<<"Enter radius (cm): ";
    cin>>radius;
    cout<<"Enter height (cm): ";
    cin>>height;

// Step 3: Check if radius > height
    bool isRadiusGreater = radius > height;

// Step 4: Check if radius == height
    bool isRadiusEqual = radius == height;

// Step 5: Triple height and increase radius by 5
    height = height * 3;  // triple height
    radius = radius + 5;  // increase radius by 5

// Step 6: Check if radius != height AND radius > height
    bool condition = (radius != height) && (radius > height);

// Step 7: Calculate the volume of the right cylinder
    float volume = pi * radius * radius * height;


    cout << "\n ---- RESULT ACTIVITY 2 ----\n";
    cout << "Is the radius greater than height?\t"<<isRadiusGreater<<endl;
    cout << "Is the radius equal to height?\t"<<isRadiusEqual<<endl;
    cout << "Triple height =\t"<<height<<"cm"<<endl;
    cout << "Increased radius by 5 =\t"<<radius<<"cm"<<endl;
    cout << "Is the radius not equal to and greater than height?\t"<<condition<<endl;
    cout << "The volume of a right cylinder with radius "<<radius<<"cm and height "<<height<<"cm is = "<<volume<<"cm^3"<<endl;

    return 0;
}



