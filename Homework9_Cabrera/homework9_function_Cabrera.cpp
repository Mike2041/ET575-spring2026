/*
Miguel Eduardo Cabrera Callejas 
Homework_9, Reversing the Values of an Array 
April 26, 2026
*/

#include<iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
/*
Function	    Type of function
arraysize()	    Value-returning function
randPopulate()	Void function (modifies array)
print()	        Void function (displays data)
reverse()	    Void function (modifies array)
→ noise is a list of numbers that:
starts in random order, then gets reversed
*/

// Function to Get Valid Array Size
int arraysize(){
    int size;

    cout<<"\nEnter an Array Size Between 1 and 100: ";
    cin>>size;

    while (size<1 || size>100){
        cout<<"Invalid input. Enter a value between 1 and 100: ";
        cin>>size;
    }
    return size;
}

// Function to Fill Array with Random Numbers
void randPopulate(int noise[], int size){
    for(int index=0; index<size; index++){
        noise[index]=rand() % 21+10;
    }
}

// Function to Print Array
void print(int noise[], int size){
    for(int index=0; index<size; index++){
        cout<<noise[index]<<"\t";
    }
    cout<<endl;
}

// Function to Reverse Array
void reverse(int noise[], int size){
    int temp;

    for(int index=0; index<size / 2; index++){
        temp = noise[index];
        //This code help me to exchanges elements from opposite ends of the array until the whole array is reversed.
        noise[index] = noise[size - 1 - index];
        noise[size - 1 - index] = temp;
    }
}





