/*
Miguel Eduardo Cabrera Callejas
April 24, 2026
Homework 8, Finding a value in a 2D Arrays
*/
#include<iostream>
using namespace std;

// Function to Search for a Value in a 2D array
void searchvalue(int array[][4], int size, int value, int result[2])

{
    for (int row=0; row<size; row++)
    {
        for (int col=0; col<size; col++)
        {
            if (array[row][col] == value)
            {
                result[0] = row;
                result[1] = col;
                return;
            }
        }
    }

    // if not found
    result[0] = -1;
    result[1] = -1;
}

// Function to Display Message
void display(int value, int result[2])
{
    if (result[0] != -1 && result[1] != -1)
    {
        cout<<"Number "<<value<<" was found in row "
            <<result[0]<<" and column " <<result[1]<<endl;
    }
    else
    {
        cout<<"Number "<<value<<" was not found"<<endl;
    }
}

const int ROWCOL_ARRAY = 4;





