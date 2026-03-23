/*
Miguel Eduardo Cabrera Callejas
Lab15, Random Numbers
March 03/23/2026
*/

#include<iostream>

using namespace std;

#include "lab15_function.Cabrera.cpp"

int main (){
    srand(time(nullptr));

    cout<<"\n ---- Example 1: Random number ----- "<<endl;
    cout<<randomnumber()<<endl;
    
    cout<<"\n ---- Example 2: random number between 0 and 9 ----- "<<endl;
    cout<<random_0_9()<<endl;
    
    cout<<"\n ---- Example 3: random number between 5 and 12 ----- "<<endl;
    cout<<random_5_12()<<endl; 
    

    cout<<"\n ---- Example 4: matching number ----- "<<endl;
    int roll1 = 1+rand()%6;

    cout<<endl<<endl;
    int roll2 = 1+rand()%6;

    bool resultmatch = matchdices(roll1,roll2);
    printdices(roll1,roll2,resultmatch);

    cout<<"\n ----- Exercise “Snake Eyes” game ----- "<<endl;
    
    srand(time(0));  // start random numbers

    int die1 = rollDie();
    int die2 = rollDie();

    cout<<"Die 1: "<<die1<<endl;
    cout<<"Die 2: "<<die2<<endl;

    bool answer = isSnakeEyes(die1, die2);

    printResult(answer);

    return 0;
}



