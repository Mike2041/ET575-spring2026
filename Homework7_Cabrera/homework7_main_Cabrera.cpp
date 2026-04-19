/*
Miguel Eduardo Cabrera Callejas 
Homework_7, Create Two Functions, array_avg() and array_min().
April 18, 2026
*/

/* Activity description: Complete the code below: create two functions, array_avg() and array_min(), that will return the average and the minimum number of an array. The array and the array size are passed to the function as argument. */

#include<iostream>

using namespace std;

#include "homework7_function_Cabrera.cpp"

int main() {
    cout<<"\n ----- Creating Two Functions ----- "<<endl;

    srand(time(0)); // set random seed <time.h>

    // declare variable num to save the size of an array
    int num = collect_size();

    // declare and initialize array
    int a[num];

    // populate and print array
    populate_numbers(a, num);
    print_numbers(a, num);

    cout<<"Minimum number:\t"<<array_min(a, num)<<endl;
    cout<<"Average of numbers:\t"<<array_avg(a, num)<<endl;

    return 0;
}









