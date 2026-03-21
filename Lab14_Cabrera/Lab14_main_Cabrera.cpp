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

    cout<<"\n ----- LAB EXERCISE: Create Three Functions -----"<<endl;

    double x1, y1, x2, y2; // coordinates
    double d;              // distance

    // getting the first point
    cout << "Enter Point 1:\n";
    x1 = getNumber();  // get x1
    y1 = getNumber();  // get y1

    // getting the second point
    cout << "\nEnter Point 2:\n";
    x2 = getNumber();  // get x2
    y2 = getNumber();  // get y2

    // calculate distance
    d = getDistance(x1, y1, x2, y2);

    // print result
    printResult(x1, y1, x2, y2, d);

    return 0;
}



