/*
Miguel Eduardo Cabrera Callejas
April 24, 2026
Homework 8, Finding a value in a 2D Arrays
*/

/*
Write a program that takes a 4-by-4 array from the user and then 
asks for a specific value to search for in the array. If the value 
is found, print its location (row and column indices); if it is not
found, display a message saying it does not exist in the array. 

The program will define the following functions: 
A function to search for a value in a 2D array. The function takes
the search value as an argument. If the value is found, it saves 
the row and column position, index, in a new array. If the value 
is not found, it saves –1 as the index for both the row and column
positions in the new array. 
A function to display a message if: 
If the value is found in the array, display the message: 
“Number __ was found in row __ and column __,” where the first 
blank is the search value, the second blank is the row index, 
and the third blank is the column index. 
If the value is NOT found in the array, display the message:
“Number___ was not found” where the first blank is the search value. 
*/

#include<iostream>
#include "homerwork8_function_Cabrera.cpp"

using namespace std;

int main()
{
    int array[ROWCOL_ARRAY][ROWCOL_ARRAY]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };

    int value;
    int result[2];

    cout<<"Enter value to search: ";
    cin>>value;

    // call search function
    searchvalue(array, ROWCOL_ARRAY, value, result);

    // call display function
    display(value, result);

    return 0;
}





