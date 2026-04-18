/*
Miguel Eduardo Cabrera Callejas 
Lab 17, Passing Array in a Function
April 18, 2026
*/

#include<iostream>

using namespace std;

#include "lab17_function_Cabrera.cpp"

// Define two functions:
// One function that sums all even numbers in an array and returns the sum.
// One function that counts all negative numbers and returns the number of negative numbers in an array.


int main() {
  cout<<"\n ----- Defining Two Functions ----- "<<endl;

    int numbers[] = {4, -3, 8, 6, -1, 12, -7, -9, 5};
    int size = 9;

    int evenSum = sumEven(numbers, size);
    int negativeCount = countNegative(numbers, size);

    cout<<"Sum of even numbers: "<<evenSum<<endl;
    cout<<"Number of negative numbers: "<<negativeCount<<endl;

    return 0;
}


