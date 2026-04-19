/*
Miguel Eduardo Cabrera Callejas 
Homework_7, Create Two Functions, array_avg() and array_min().
April 18, 2026
*/

#include<iostream>
#include <cstdlib> // includes the C Standard Library utilities.
#include <time.h> // includes the time library. time(0) 

using namespace std;

// function to collect the size of an array
int collect_size() {
    int size;
    cout<<"Enter array size: ";
    cin>>size;
    return size;
}

// function to populate an array
void populate_numbers(int *ar, int s) {

    // use loop to RANDOMLY generate numbers between 1 and 99
    for (int index = 0; index < s; index++) {
        ar[index] = rand() % 99 + 1;
    }
}

// function to print all numbers in an array
void print_numbers(int *ar, int s) {

    // use loop to print all numbers
    cout<<"Array elements: ";
    for(int index = 0; index < s; index++) {
        cout<<ar[index]<<" ";
    }

    cout << endl;
}

// function to find the minimum number in an array
int array_min(int *ar, int s) {
    int min = ar[0];  // assume first element is smallest

    for (int index = 1; index < s; index++) {
        if (ar[index] < min) {
            min = ar[index];
        }
    }

    return min;
}

// function to return the average of all numbers in an array
float array_avg(int *ar, int s){
    int sum = 0;

    for (int index = 0; index < s; index++){
        sum += ar[index];
    }

    return (float)sum / s;
}





