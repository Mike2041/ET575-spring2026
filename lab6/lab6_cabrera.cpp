/*
Miguel Eduardo Cabrera Callejas
Feb 4, 2026
lab 6, branching, control flow 
*/
#include<iostream>

using namespace std;

int main(){
    cout<<"\n ------ Example 1: bool variables ------"<<endl;
    // bool variable returns a 1 for True or a 0 for False
    bool ispositive;
    int number;
    
    cout<<"Enter a number: ";
    cin>>number;

    ispositive = number > 0;
    cout<<"Is "<<number<<" positive? "<<ispositive<<endl;

    cout<<"\n ------ Example 2: if statement ------"<<endl;
    // if statement will run the codes in between the curly braces if the statement is TRUE.
    int num1 = 3;
    int num2 = 5;

    if (num1 == num2){
        cout<<"the numbers are equal"<<endl;
    
    }

    cout<<"End of Example 2"<<endl;

    cout<<"\n ------ Example 3: if-else estatement ------"<<endl;
    // if-else works as a switch. If "if statement is true, the program will run the codes of the ifstatement and ignore the code of the 'else' statement.
    // example to check which number, num1 or num2, is greater.
    if(num1>num2){
        cout<<"num1 is greater than num2"<<endl;

    }
    else{
        cout<<"num2 is greater than num1"<<endl;


    }

    cout<<"\n ------ Example 4: multiway statement ------"<<endl;
    // multiway checks more than 2 conditions
    // example compare if num1 is equal to, great than, less than num2
    if(num1==num2){
        cout<<"num1 is greater than num2"<<endl;

    }
    else{
        cout<<"num2 is greater than num1"<<endl;

    }

    cout<<"\n ------ Example 5: multiway statement: find the depending of the wavelength ------"<<endl;
    /*
    - Ultraviolet: less than 379 nm and greater than or equal to 10nm
    - Blue: 380nm to 520nm, inclusive
    - Green: 521 nm to 590 nm, inclusive
    - Red: 591 nm to 740 nm
    - Any wavelength less than 10 nm is undefined
    */

    // declare variables
    int wavelength = 0;
    string color;

    // collect the wavelength
    cout<< "Enter a wavelength: "<<endl;
    cin>>wavelength;

    if(wavelength<=379 && wavelength>=10){
        color = "ultraviolet";

    }
    else if (wavelength<=520 && wavelength>=380)
        color = "blue";
    else if (wavelength<=590 && wavelength>=521)
        color = "green";
    else if (wavelength<=740 && wavelength>=591)
        color = "red";
    else if (wavelength<=741)
        color = "infrared";
    else
        color = "undefined";
    
    // print result
    cout<<"Wavelenght of "<<wavelength<<" emits color "<<color<<endl;

    cout<<"\n ------ EXERCISE ------"<<endl;
    // declare the variables
    char gpa = ' ';
    float final_exam = 0;
    float labs = 0;
    float homework = 0;
    float grade = 0;

    // collect data: final_exam, labs, and homework
    /* 
    - grade: between 100 and 90, GPA = A
    - grade: between 89 and 80, GPA = B
    - grade: between 79 and 70, GPA = C
    - grade: between 69 and 60, GPA = D
    - grade: below 59, GPA = F
    - any another grade, GPA = ""
    */

    // calculate the grade = final_exam *0.5 + labs*0.3 + homework*0.2
    

    // multiway condition

    // print result




    return 0;

}