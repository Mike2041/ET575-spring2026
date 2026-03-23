/*
Miguel Eduardo Cabrera Callejas
Lab15, Random Numbers
March 03/23/2026
*/

#include<iostream>
#include<cstdlib>

#include<time.h>

// Example 1: rand() and srand() functions
using namespace std;
int randomnumber(){
    srand(time(0));
    return rand();
}

// Example 2: range of random nubmers
// Generate numbers between 0 and 9 (inclusive)
int random_0_9(){
    srand(time(0));
    return rand()%10;
}

// Example 3: generate a number between 5 and 12
int random_5_12(){
    srand(time(0));
    return 5 + rand()%8;

}

// Example 4: match a number of a pair of dices 
// Function randomly generates number between 1 and 6
int rolldice(){
    srand(time(0));
    return 1+rand()%6;
}
// Function to check if two numbers are the same
bool matchdices(int roll1, int roll2){
    return roll1 == roll2;
}

// Function to print result
void printdices(int roll1, int roll2, bool result){
    cout<<"Is "<<roll1<<" the same as "<<roll2<<" ? "<<result<<endl;
    
}

// Exercise "Snake Eyes" game.
// Function 1: roll a die (1 to 6)

int rollDie(){
    int number = rand() % 6+1;
    return number;
}

// Function 2: check snake eyes
bool isSnakeEyes(int a, int b){
    if (a==1 && b==1){
        return true;
    } 
    else{
        return false;
    }
}

// Function 3: print result
void printResult(bool result){
    if (result==true){
        cout<<"Congrats! You got snake eyes"<<endl;
    }

    else{
        cout<<"Better luck next time"<<endl;
    }
}



