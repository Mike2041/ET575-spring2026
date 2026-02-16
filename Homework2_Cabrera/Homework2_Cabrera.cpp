/*Homework2: Branching
Miguel Eduardo Cabrera Callejas
Feb 15,2026
*/

/*Write a C++ program that prompts the user to enter their age and determines their eligibility for various activities based on the following criteria: Under 13 years: Not eligible for any activities. 
Ages 13 to 17: Eligible for youth activities. 
Ages 18 to 64: Eligible for adult activities. 
65 years and older: Eligible for senior activities. 
Additionally, your program should: 
Check if the user’s age is negative or unrealistic (greater than 120). If so, print "Invalid age. Please enter a valid age." 
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"\n ------ Program # 1: age eligibility ------"<<endl;
    int age;

// User enter your age
    cout<<"Enter your age: ";
    cin>>age;

// Check if age is invalid
    if (age < 0 || age > 120) {
        cout<<"Invalid age. Please enter a valid age."<<endl;
    }
    // Age Under 13 old
    else if (age < 13) {
        cout<<"Not eligible for any activities."<<endl;
    }
    // Ages 13 to 17 year old
    else if (age <= 17) {
        cout<<"Eligible for youth activities."<<endl;
    }
    // Ages 18 to 64 year old
    else if (age <= 64) {
        cout<<"Eligible for adult activities."<<endl;
    }
    // Age 65 and older
    else {
        cout<<"Eligible for senior activities."<<endl;
    }

    cout<<"\n ------ Program # 2: nested conditional statement  ------"<<endl;


    /*
    My Steps to Follow:
    1. Ask the user to enter two numbers.
    2. Read the two numbers from the keyboard.
    3. Add the numbers to get the sum.
    4. Check the value of the sum:
        → If below 0 → False alarm message.
        → If between 1 and 100 → use nested conditions:
            multiple of 5
            odd number
        → If between 101 and 200 → lucky number message.
        → If between 201 and 999 → dreaming number message.
        → If 1000 or more → nested conditions:
            even number
            2000 or more
    5. Display the correct message.
    */

    int num1, num2, sum;

    // Collect numbers from keyboard
    cout<<"Enter first number: ";
    cin>>num1;

    cout<<"Enter second number: ";
    cin>>num2;

    // The Result or Sum of two numbers is:
    sum = num1 + num2;

    // Below 0
    if (sum < 0) {
        cout<<"False alarm! The sum is "<<sum<<endl;
    }

    // The Sum of two numbers between 1 and 100
    else if (sum >= 1 && sum <= 100) {

    // Nested condition: if the numbers is multiple of 5
        if (sum % 5 == 0) {
            cout<<sum<<" is a pentagon"<<endl;
        }
    // Nested condition: if the numbers is odd
        else if (sum % 2 != 0) {
            cout<<sum<<" is an odd guess"<<endl;
        }
        else {
            cout<<"The sum is "<<sum<<endl;
        }
    }

    // The Sum of two numbers between 101 and 200
    else if (sum >= 101 && sum <= 200) {
        cout<<"The new lucky number is "<<sum<<endl;
    }

    // The Sum of two numbers between 201 and 999
    else if (sum >= 201 && sum <= 999) {
        cout<<sum<<" is a dreaming number"<<endl;
    }

    // The Sum of two numbers 1000 and above
    else {

        // Nested condition: even number
        if (sum % 2 == 0) {
            cout<<sum<<" approaches to the infinite evenly!"<<endl;
        }

        // Nested condition: 2000 or more
        if (sum >= 2000) {
            cout<<sum<<" approaches to the infinite and beyond!"<<endl;
        }
    }


    cout<<"\n ------ Program # 3: Temperature Converter   ------"<<endl;
    cout<<"\n -------------- Switch-Case -----------------------"<<endl; 
   /*
    Display a menu with the following options: 
        1. Celsius to Fahrenheit
        2. Fahrenheit to Celsius
        3. Kelvin to Celsius
        4. Kelvin to Fahrenheit
        5. Exit 
    Prompt the user to select an option from 1 to 5 with the above description. 
    If the user selects a conversion, prompt a next message asking to enter the temperature to be converted.
    Must use 'switch-case’ statements to implement the logic for the conversion option from 1 to 5.
    Perform the conversion and display the result.  
    A template to display the result message, for example from Celsius to Fahrenheit, should be as:
            ___ Celsius is equal to ____ Fahrenheit 
    */
    

    int choice;
    double temp, result;

    // Menu Principal
    cout<<"Temperature Conversion Menu\n";
    cout<<"1. Celsius to Fahrenheit\n";
    cout<<"2. Fahrenheit to Celsius\n";
    cout<<"3. Kelvin to Celsius\n";
    cout<<"4. Kelvin to Fahrenheit\n";
    cout<<"5. Exit\n";

    cout<<"Select Menu Option (1-5): ";
    cin>>choice;

    // Switch-case Statement
    switch (choice) {

        case 1:
            cout<<"Enter temperature in Celsius: ";
            cin>>temp;
            result = (temp * 9/5) + 32;
            cout<<temp<<" Celsius is equal to "
                 <<result<<" Fahrenheit"<<endl;
            break;

        case 2:
            cout<<"Enter temperature in Fahrenheit: ";
            cin>>temp;
            result = (temp - 32) * 5/9;
            cout<<temp<<" Fahrenheit is equal to "
                <<result<<" Celsius"<<endl;
            break;

        case 3:
            cout<<"Enter temperature in Kelvin: ";
            cin>>temp;
            result = temp - 273.15;
            cout<<temp<<" Kelvin is equal to "
                <<result<<" Celsius"<<endl;
            break;

        case 4:
            cout<<"Enter temperature in Kelvin: ";
            cin>>temp;
            result = (temp - 273.15) * (9/5) + 32;
            cout<<temp<<" Kelvin is equal to "
                <<result<<" Fahrenheit"<<endl;
            break;

        case 5:
            cout<<"Program exited."<<endl;
            break;

        default:
            cout<<"Invalid option. Please select between 1 and 5."<<endl;
    }

    return 0;
}

























