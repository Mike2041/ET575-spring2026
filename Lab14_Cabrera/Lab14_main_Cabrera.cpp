/*
Miguel Eduardo Cabrera Callejas
Lab 14, Functions
March 18, 2026
*/
#include<iostream>
#include "Lab14_function_Cabrera.cpp"
using namespace std;

int main(){
    cout<<"\n ------ Example 1: function calling function ------"<<endl;
    int calculate = calculatedb(2,3);
    cout<<calculate<<endl;

    cout<<"\n ------ Example 2: recursive function ------ "<<endl;
    cheers(4);

    cout<<"\n ------ Example 3: linear recursive function ------"<<endl;
    int n = linearfuction(3); 
    cout<<"The final result = "<<n<<endl;

    cout<<"\n ------ Example 4: built-in function ------ "<<endl;
    int side1 = collectnumber();
    int side2 = collectnumber();
    float h = hypotenuse (side1,side2);
    cout<<h<<endl;
    return 0;
}



