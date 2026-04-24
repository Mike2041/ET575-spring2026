/*
Miguel Eduardo Cabrera Callejas
April 22, 2026
Lab 19, 2D Arrays
*/

const int COLSIZE = 5;
#include<iostream>
#include "lab19_function_Cabrera.cpp"
#include<cstdlib> //for rand, and srand(initialize (start) the random number generator)
#include<ctime>

using namespace std;

int main(){
    cout<<"\n ----- Example 1: 2D Array -----"<<endl;

    // initialize a 2D Array
    const int rowsize = 4;
    int a[rowsize][COLSIZE] ={
        {4, 8, -12},
        {1, -8, 3, 5, 7},
        {-6, 2, 9}
    };

    // Call the Print Function
    print2d(a,rowsize);

    cout<<"\n ----- Example 2: Sum of all Positive Even Numbers -----"<<endl;
    printsum(sumevenpositive(a,rowsize));

    

/*
Lab exercise description:
Create a multidimensional, 2D, array with 3 rows and 4 columns and use a function, populate() , to populate each cell of the array with numbers. The numbers will be randomly generated between 0 and 100.
Define a function named printvaluearray(), to print each element in the 2D array.
Define another function, average(), that will calculate and return the average of all numbers within the array.
At the end, the program will ask if the user wants another run. For each run, there will be a new set of random numbers.  
*/ 

char choice;
srand(time(0));
do{
    int array[3][4];
    populate (array);
    printvaluearray(array);
    cout<<"\nAverage = "<<average(array)<<endl;
    cout<<"\nAnother run? (y/n): ";
    cin>>choice;
}while(choice=='y' || choice=='Y');


return 0;
}
