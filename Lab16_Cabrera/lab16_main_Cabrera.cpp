/*
Miguel Eduardo Cabrera Callejas 
Lab 16, Pointers and intro to array
April13, 2026
*/

#include<iostream>

using namespace std;

#include "lab16_function_Cabrera.cpp"

int main(){
    cout<<"\n ----- Example 1: pointer and reference "<<endl;
    pointerreference();

    cout<<"\n ----- Example 2: passing pointer and reference "<<endl;
    string something = "Hello World!";
    printvalue(something);
    printaddress(&something);
    printreference(something);

    cout<<"\n ----- Example 3:intro to array "<<endl;
    introarray();

    return 0;
}







