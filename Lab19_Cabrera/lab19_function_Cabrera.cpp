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
void populate (int arr[3][4]){
    for(int row = 0; row<3; row++){
        for(int col = 0; col<4; col++){
            arr[row][col] = rand() % 101; //random number between 0 and 100
        }
        
        }
    
    }

void printvaluearray(int arr[3][4]){
    cout<<"\nThe 2D Array Exercise is: "<<endl;
    for(int row = 0; row<3; row++){
        for(int col = 0; col<4; col++){
            cout<<arr[row][col]<<"\t";
        }
        cout<<endl;
    }
}

double average(int arr[3][4]){
    int sum = 0;
    int count = 0;
    
    for(int row = 0; row<3; row++){
        for(int col = 0; col<4; col++){
            sum += arr[row][col];
            count++;
        }
    }
    return (double)sum/count;
}





