/*
Miguel Eduardo Cabrera Callejas
Homework#3 for loop
March 15/2026
*/

/*
Program 1: write a C++ code that will ask the user to enter 10 numbers and check how many of the
numbers are negative, positive, and zero. Use a for loop a read each entered number. 
After the for loop, the program displays the result as:
Total positive numbers =        
Total negative numbers =        
Total zeros  =                 
*/

#include <iostream>

using namespace std;

int main(){
    cout<<"\n -------- PROGRAM No.1 -------- "<<endl;
    int number;
    int positive = 0;
    int negative = 0;
    int zero = 0;

    for(int i=1; i<=10; i++)
    {
        cout<<"Enter a number: ";
        cin>>number;

        if(number>0)
            positive++;
        else if(number<0)
            negative++;
        else
            zero++;
    }

    cout<<"Total positive numbers = "<<positive<<endl;
    cout<<"Total negative numbers = "<<negative<<endl;
    cout<<"Total zeros = "<<zero<<endl;

/*
Program 2: write a C++ code that takes daily sales figures over a period of time and calculates their total. 
It then uses this total to compute the average daily sales. The program:
Ask the user to enter the number of days.
Loop through the number of days, prompting the user to enter the sales figure for each day.
Calculate the total sales by accumulating the daily sales values.
Compute the average daily sales as average sales = total sales / number of days.
Display the total sales, number of sales days, and the average daily sales as shown below: 
Total sales $ _____ for _____ days.  Average daily sales $ ______
*/



    cout<<"\n -------- PROGRAM No.2 -------- "<<endl;

    int days;
    int i;
    double sales;
    double total = 0;
    double average;

    cout<<"Enter number of days: ";
    cin>>days;

    for(i=1; i<=days; i++)
    {
        cout<<"Enter sales: ";
        cin>>sales;

        total = total + sales;
    }

    average = total / days;

    cout<<"Total sales $ "<<total<<" for "<<days<<" days. ";
    cout<<"Average daily sales $ "<<average<<endl;


    return 0;
}



