/*
Miguel Eduardo Cabrera Callejas
Feb 20, 2026
Lab_Exercise9, Getting Help from AI to Build a Temperature Converter
*/

#include<iostream>
using namespace std;

int main(){
    int choice;
    double celsius, fahrenheit;

    cout<<"Choose conversion type:\n";
    cout<<"1. Celsius to Fahrenheit\n";
    cout<<"2. Fahrenheit to Celsius\n";
    cout<<"Enter choice: ";
    cin>>choice;

    if(choice == 1){
        cout<<"Enter temperature in Celsius: ";
        cin>>celsius;
        fahrenheit = (celsius * 9.0/5.0) + 32;
        cout<<celsius<<"°C is "<<fahrenheit<<"°F"<<endl;
    } 

    else if(choice == 2){
        cout<<"Enter temperature in Fahrenheit: ";
        cin>>fahrenheit;
        celsius = (5.0 / 9.0)*(fahrenheit - 32);
        cout<<fahrenheit<<"°F is "<<celsius<<"°C"<<endl;
    }

    else{
        cout<<"Invalid choice. Please enter 1 or 2."<<endl;
    }

    return 0;
}

/*
1. Does the AI code use C++ concepts you're unfamiliar with? Explain.
No, the code uses basic C++ concepts that I am familiar and we use in class, such as variables, if/else statements, user input (cin), and output (cout). I think these concepts or code are fundamental and basic concepts in C++.

2. Are there any issues or improvements you noticed? Explain.
The program works correctly, I Debug it first and it not showed me any error and then I run the program and it run smoothly but it could improved with the result about the decimal For example: by using "setprecision" we didn't use it in class, I was cheching it in other examples in different website, I think we will use it future on. 

3. What test cases did you try, and why? Explain.
I tested the two different cases to make sure both conversions worked, and test it few time to see the different conversion and everything worked good, also I test input 3 and the program gave invalid choice. It show me Please enter 1 or 2.

*/






