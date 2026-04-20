/*
Miguel Eduardo Cabrera Callejas
March 20, 2026
Lab18 Array Application
*/

#include<iostream>
#include "lab18_function_Cabrera.cpp"

using namespace std;

int main(){
    cout<<"\n ----- Example 1: Search Function ----- "<<endl;
    const int ARRAYSIZE = 5;  // declare the Array Size
    int a[ARRAYSIZE];  // declare the Array
    int listsize;  // declare the variable to save the array size if there is less five consecutive potives
    int searchnumber = 20;  // declare the variable to save target

    fillarray(a, listsize, ARRAYSIZE);  // call function fillarray

    cout<<listsize<<endl; // testing listsize

    printelement(a, listsize);  // call function 2

    int foundindex = search(a, listsize, searchnumber);  // call function 3
    cout<<"Test seach Index = "<<foundindex<<endl;




    return 0;
}





