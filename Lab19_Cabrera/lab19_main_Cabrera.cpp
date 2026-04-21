/*
Miguel Eduardo Cabrera Callejas
March, Monday 20, 2026
Lab_19 1D Arrays and Functions 
*/

/*
In this exercise, you will practice using 1D arrays and functions in C++. 
You will write a program that collects up to five non-zero integers from the user. 
The input process ends when the user enters a sentinel value of 0 or when the array 
reaches five numbers. After collecting the values, the program will calculate the 
average of the entered numbers, determine which number in the array is closest to 
that average, and display the results.
*/

#include<iostream>
#include<cmath>

#include "lab19_function_Cabrera.cpp"

using namespace std;

// Function Prototypes or Function declarations

int collectnumber(int arr[], int maxSize);
double Averagenumber(int arr[], int size);
int Closestmean(int arr[], int size, double average);
void Printresult(double average, int closest);

int main(){

    const int SIZE = 5;
    int numbers[SIZE];
    int actualSize = collectnumber(numbers, SIZE);
    double average = Averagenumber(numbers, actualSize);
    int closest = Closestmean(numbers, actualSize, average);

    Printresult(average, closest);

    return 0;
}








