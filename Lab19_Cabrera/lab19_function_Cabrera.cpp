/*
Miguel Eduardo Cabrera Callejas
April 22, 2026
Lab 19, 2D Arrays
*/

#include<iostream>
using namespace std;

// Example 1: Function to print the elements in a 2D Array
void print2d (int arr[][COLSIZE], int rowsize){
    for(int row = 0; row<rowsize; row++){
        for (int col = 0; col<COLSIZE; col++){
            cout<<arr[row][col]<<"\t";

        }
        cout<<endl;

    }
}

// Example 2: Function to sum all even Positive Numbers in a 2D Array
int sumevenpositive(int arr[][COLSIZE], int rowsize){
    int sumallevenpositive = 0;
    for(int row = 0; row<rowsize; row++){
        for(int col = 0; col<COLSIZE; col++){
            if (arr[row][col]>0 && arr[row][col]%2==0)
            sumallevenpositive += arr[row][col];
        }
        cout<<endl;
    }
    return sumallevenpositive;
}

void printsum(int sumevenpositive){
    cout<<"The Result is "<<sumevenpositive<<endl;
}

// Lab19 Exercise
// 2D Array with 3 Rows and 4 Colums  







