/*
Miguel Eduardo Cabrera Callejas 
Lab 16, Pointers and intro to array
April13, 2026
*/

#include<iostream>

using namespace std;

#include "lab16_function_Cabrera.cpp"

int main(){
    cout<<"\n ----- Example 1: Pointer and Reference ----- "<<endl;
    pointerreference();

    cout<<"\n ----- Example 2: Passing Pointer and Reference ----- "<<endl;
    string something = "Hello World!";
    printvalue(something);
    printaddress(&something);
    printreference(something);

    cout<<"\n ----- Example 3: Intro to Array ----- "<<endl;
    introarray();

    cout<<"\n ----- Example 4: Length of an Array ----- "<<endl;
    lenghtarray();

    cout<<"\n ----- Example 5: Loop Through an Array ----- "<<endl;  
    looparray();

    cout<<"\n ----- Example 6: Pass an Array to a Function ----- "<<endl;
    // declare an array
    const int s = 3;
    int numbers[s];
    
    // fill uup the Array with data 
    fillup(s,numbers);

    // Print the Values in an Array
    printaray (s,numbers);

    // Print the max Value
    int m = maxnumber(s,numbers);
    cout<<"The Maximum number is "<<m<<endl;

    cout<<"\n ----- Exercise Lab 6 ------ "<<endl;
    inarray();

    return 0;
}







