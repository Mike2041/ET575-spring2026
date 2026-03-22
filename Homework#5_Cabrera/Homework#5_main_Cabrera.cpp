/*
Miguel Eduardo Cabrera Callejas
Homework#5: Functions
March 03/21/26
*/

/*This program you will define four function speed(), temp(), windspeed(). and prompt_result(). 
The speed() function will ask the user to enter a wind speed and return the speed as an integer. Before returning the speed, the function code should check that the speed is a positive number less than 100. 
The temp() function will ask the user to enter a temperature and return the temperature as an integer. Before returning the temperature, the function code should check that the temperature must be less or equal to 10 and greater than -90 
The windspeed() function calculates the wind chill index using the return the wind chill index as an float or double number. The temperature and wind speed are passed to the function as arguments, and they are used to calculate the wind chill index using the following formula:  
Wind chill index = 
*/

#include<iostream>
#include"Homework#5_function_Cabrera.cpp"
using namespace std;

int main() {
    cout<<"\n -- Program 1: Wind Chill Calculation -- "<<endl;

 // wind speed and temperature
    int v, t;
// wind chill result
    double w;       

    // get inputs
    v = speed();
    t = temp();

    // calculate wind chill
    w = windspeed(v, t);

    // print result
    prompt_result(v, t, w);

    cout<<"\n -- Program 2: Descending Order Entries -- "<<endl;
/*
Complete a program that checks if three numbers are entered in descending order. The program should be divided into the following functions:
collectNumber: This function prompts the user to enter a number and returns the input.
inOrder: This function accepts three numbers as parameters and checks whether they are in descending order. It returns true (or 1) if they are in descending order; otherwise, it returns false (or 0).
order_result: This function prints the result of the check and asks the user if they want to run the program again. The program should continue to run as long as the user chooses to do so.
*/

    int num1 = collectNumber();
    int num2 = collectNumber();
    int num3 = collectNumber();

    bool desc_order = order_result(num1,num2,num3);

    runProgram(num1,num2,num3,desc_order); 


    return 0;
}



