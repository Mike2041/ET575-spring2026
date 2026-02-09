/*
Miguel Eduardo Cabrera Callejas
Feb 9, 2026
Lab7, nested conditional statement
*/

#include<iostream>

using namespace std;

int main(){
    cout<<"\n ----- Example 1: nested conditional ----"<<endl;
    // use nested conditional statement to check if a number is positive (even or odd),negative (even or odd), or zero
    int number = -8;
    if (number>0){
        if (number%2==0)
            cout<<number<<" is positive and even!"<<endl;
        else
            cout<<number<<" is positive and odd!"<<endl;

    }
    else if (number<0){
        if(number%2==0)
            cout<<number<<" is negative and even!"<<endl;
        else
            cout<<number<<" is negative and odd!"<<endl;

    }

    else{
        cout<<"The number is zero"<<endl;
    }

    cout<<"\n ----- Example 2: nested conditional -----"<<endl;
    // print the sort three numbers from the highest to the lowest number
    // declare variables
    int num1, num2, num3;
    //collect values
    cout<<"Enter three numbers: "<<endl;
    cin>>num1>>num2>>num3;
    // conditional statement
    if(num1>num2 && num1>num3){
        cout<<num1<<"num1 is the highest number"<<endl;
        if(num2>num3)
            cout<<num1<<"\t"<<num2<<"\t"<<num3<<endl;
        else
            cout<<num1<<"\t"<<num3<<"\t"<<num2<<endl;
    } 
    else if (num2>num1 && num2>num3){
        cout<<num2<<"num2 is the highest number"<<endl;
        if(num1>num3)
            cout<<num2<<"\t"<<num1<<"\t"<<num3<<endl;
        else
            cout<<num2<<"\t"<<num3<<"\t"<<num1<<endl;
    }
    else{
        cout<<num3<<"num3 is the highest number"<<endl;
        if(num1>num2)
            cout<<num3<<"\t"<<num1<<"\t"<<num2<<endl;
        else 
            cout<<num3<<"\t"<<num2<<"\t"<<num1<<endl;

    }

    cout<<"\n ----- Example 3: nested conditional -----"<<endl;
    // use operands to check if a number is even or odd
    /*
    if (x%2==0)
        cout<<"Even"<<endl;
    else
        cout<<"Odd"<<endl;
    */

    int x = 5;
    cout<<"The number is "<<(x%2==0 ? "Even" : "Odd")<<endl;


    cout<<"\n -------- EXERCISE -------- "<<endl;
    /*
    using nested conditional statement, that classifies the type of car a user can afford based on their budget.
    */

    cout<<"\n ----- A car according to your Budget -----"<<endl;

    double budget;

    // User input their car budget
    cout<<"Enter your car budget: $";
    cin>>budget;

    // Conditions and outputs
    if (budget < 0)
    {
        cout<<"Invalid budget!"<<endl;
    }

    else if (budget < 10000)
    {
        cout<<"Keep saving!"<<endl;
    }

    else if (budget <= 30000)
    {
        cout<<"You can afford an Economy Car = ";

    // Nested condition
        if (budget <= 20000)
        {
            cout<<"Compact Car"<<endl;
        }

        else
        {
            cout<<"Mid-size Car"<<endl;
        }

    }
    else if (budget <= 70000)
    {
        cout<<"You can afford a Standard Car = ";

    // Nested condition
        if (budget <= 50000)
        {
            cout<<"Sedan"<<endl;
        }

        else
        {
            cout<<"Luxury Sedan"<<endl;
        }

    }
    else if (budget <= 150000)
    {
        cout<<"You can afford a Performance-oriented Car = ";

    // Nested condition
        if (budget <= 100000)
        {
            cout<<"Sports Car"<<endl;
        }

        else
        {
            cout<<"Supercar"<<endl;
        }

    }
    else
    {

        cout<<"High-end luxury cars"<<endl;

        cout << "Maserati or Rolls-Royce?"<<endl;
    }


    return 0;
}



