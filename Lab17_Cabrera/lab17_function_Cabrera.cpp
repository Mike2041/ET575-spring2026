/*
Miguel Eduardo Cabrera Callejas 
Lab 17, Passing Array in a Function
April 18, 2026
*/

#include<iostream>

using namespace std;

// Define two functions:
// One function that sums all even numbers in an array and returns the sum.
// One function that counts all negative numbers and returns the number of negative numbers in an array.


// Function to sum all even numbers
int sumEven(int arr[], int size) {
    int sum = 0;

    for (int index = 0; index < size; index++) {
        if (arr[index] % 2 == 0) {
            sum += arr[index];
        }
    }

    return sum;
}

// Function to count negative numbers
int countNegative(int arr[], int size) {
    int count = 0;

    for (int index = 0; index < size; index++) {
        if (arr[index]<0) {
            count++;
        }
    }
    return count;

}





