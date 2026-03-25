/*
Miguel Eduardo Cabrera Callejas
Review_Examen2
March 03/24/2026
*/

#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

// generate random number from 1 to 20
int rand_side(){
    return rand() %20 + 1;
}

// calculate hypotenuse
double hyp(int side1, int side2) {
    return sqrt(pow(side1, 2) + pow(side2, 2));
}

// print result with rounding (2 decimal places)
void print_result(int side1, int side2, double hypotenuse){
    double rounded = round(hypotenuse * 100) / 100;

    cout<<"The hypotenuse of a right angle with side "
         <<side1<< " and "<<side2
         <<" is = "<<rounded<<endl;
}

// Exercise No.2 Descending Order Entries
// 1. collectNumber: prompt user and return input
int collectNumber(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    return num;
}

// 2. inOrder: check if numbers are in descending order
bool inOrder(int num1, int num2, int num3){
    if (num1 >= num2 && num2 >= num3){
        return true;  // descending
    }

    else{
        return false; // not descending
    }
}

// 3. runProgram: print result and ask user if they want to run again
void runProgram(int num1, int num2, int num3, bool desc_order){
    // print result
    if (desc_order){
        cout<<"The numbers "<<num1<<", "<<num2<<", "<<num3
            <<" are in descending order."<<endl;
    }
    else{
        cout<<"The numbers "<<num1<<", "<<num2<<", "<<num3
            <<" are NOT in descending order."<<endl;
    }

    // ask user if they want to run again
    char choice;
    cout<<"Do you want to run the program again? (y/n): ";
    cin>>choice;

    if (choice == 'y' || choice == 'Y') {
        // rerun program by calling main again
        int num1 = collectNumber();
        int num2 = collectNumber();
        int num3 = collectNumber();
        bool desc_order = inOrder(num1, num2, num3);
        runProgram(num1, num2, num3, desc_order);
    } 
    else{
        cout<<"Program ended."<<endl;
    }
}



