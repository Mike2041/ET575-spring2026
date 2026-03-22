/*
Miguel Eduardo Cabrera Callejas
Homework#5: Functions
March 03/21/26
*/

// ---- Program 1: Wind Chill Calculation -----

#include <iostream>   // input/output
#include <cmath>      // for pow()
using namespace std;

// -------- Function 1 --------
// Get wind speed (must be > 0 and < 100)
    int speed(){
    int v;

    cout<<"Enter wind speed (0 - 100): ";
    cin>>v;

// check if valid
    while (v <= 0 || v >= 100){
        cout<<"Invalid! Enter speed between 1 and 99: ";
        cin>>v;
    }

    return v;   // return valid speed
}

// -------- Function 2 --------
// Get temperature (must be <= 10 and > -90)
int temp(){
    int t;

    cout<<"Enter temperature (-90 to 10): ";
    cin>>t;

    // check if valid
    while (t > 10 || t <= -90) {
        cout<<"Invalid! Enter temperature between -89 and 10: ";
        cin>>t;
    }

    return t;   // return valid temperature
}

// -------- Function 3 --------
// Calculate wind chill
    double windspeed(int v, int t) {

// calculate v^0.16 using pow
    double power = pow(v, 0.16);

// applying the formula 
    double result = 13.12 + (0.6215 * t)
                    - (11.37 * power)
                    + (0.3965 * t * power);

    return result; // return wind chill
}

// -------- Function 4 --------
// Print result
void prompt_result(int v, int t, double w) {
    cout<<"\nWind Speed: "<<v<<endl;
    cout<<"Temperature: "<<t<<endl;
    cout<<"Wind Chill Index: "<<w<<endl;
}



// Program 2: Descending Order Entries
// -------- Function 1 --------
// Ask user for a number
    int collectNumber(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    return num;
}

// -------- Function 2 --------
// Check descending order
    bool inOrder(int a, int b, int c){

// descending means: a > b > c
    if(a>b && b>c){
        return true;  
    } 
    else{
        return false;
    }
}

// -------- Function 3 --------
// Print result and return true/false
    bool order_result(int n1, int n2, int n3){
    bool result = inOrder(n1, n2, n3);

    if (result == true){
        cout<<"Numbers are in descending order.\n";
    } 
    else{
        cout<<"Numbers are NOT in descending order.\n";
    }

    return result;
}

// -------- Function 4 --------
// Ask user to run again
    void runProgram(int n1, int n2, int n3, bool result) {

    char choice;

    cout<<"\nDo you want to run again? (y/n): ";
    cin>>choice;

    // loop if user says yes
    while (choice == 'y' || choice == 'Y'){

    // collect new numbers
        n1 = collectNumber();
        n2 = collectNumber();
        n3 = collectNumber();

    // check again
        result = order_result(n1, n2, n3);

        cout<<"\nDo you want to run again? (y/n): ";
        cin>>choice;
    }

    cout<<"Program ended.\n";
}






