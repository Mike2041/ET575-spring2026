/*
Miguel Eduardo Cabrera Callejas 
Homework_9, Reversing the Values of an Array 
April 26, 2026
*/

#include<iostream>

using namespace std;

#include "homework9_function_Cabrera.cpp"

//Reversing the Values of an Array 
/*In this exercise, you will implement a program that reverses the values of a one-dimensional array named noise[]. The require functions for the program are: 
→ arraysize() function: 
This function will ask the user to enter an array size, which must be between
1 and 100 (inclusive). If the input is invalid (i.e., not in the range [1, 100]),
the function will continue prompting the user until a valid number is entered. 
The function will then return this valid size.
→ Array Initialization: Once the valid size is obtained from arraysize(), a 
one-dimensional array noise[] will be created with the specified size.
→ randPopulate() function: 
This function will randomly generate numbers between 10 and 30 (inclusive) 
and fill them into the noise[] array. 
→ print() function: 
This function will print the values in each cell of the noise[] array. 
→ reverse() function: 
This function will reverse the order of the values in the noise[] array by 
swapping the values at corresponding positions. 
Second Call to print() function:  After the reversal, print() will be called 
again to display the reversed array. 
*/

int main() {

    int sizearray = arraysize();//Get Array Size

    int noise[sizearray];
    srand(time(0));
    randPopulate(noise, sizearray);
    cout<<"Original Set:"<<endl;
    print(noise, sizearray);
    reverse(noise, sizearray);
    cout<<endl<<"Reversed Set:"<<endl;
    print(noise, sizearray);

    return 0;
}





