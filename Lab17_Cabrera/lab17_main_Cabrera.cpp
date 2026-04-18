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


//int main(){
  //  cout<<"\n ----- Example 1: Sums all Even Numbers ----- "<<endl;

int main() {
    int numbers[] = {2, -3, 8, -6,-8, 10, -2};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int evenSum = sumEven(numbers, size);
    int negativeCount = countNegative(numbers, size);

    cout << "Sum of even numbers: " << evenSum << endl;
    cout << "Count of negative numbers: " << negativeCount << endl;

    return 0;
}


