/*
Miguel Eduardo Cabrera Callejas
March 16/2026
Lab_13_Function Introduction to functions
*/
#include <iostream> 

using namespace std;

void printHello(){
//Example 1: void function. void functions are functions that don't return any value.
    cout<<"Hello World"<<endl;
    return; // the return line is optional for a void function
}

// Example 2: function that passes values
void greeting(string username){
    cout<<"Welcome to function "<<username<<endl;
}

// Example 3: function that passes and returns a value
// function that passes a number and return the triple of the number
int triplenumber(int number){
    return number *3;
}

// Example 4: function to check if a number is positive, negative, or zero
// this function returns a string

string checknumber(int number){
    if(number>0){
        return "positive";
    }
    else if (number<0){
        return "negative";
    }
    else{
        return "zero";
    }
}

// Example 5: composition function
// function to validate that a number is positive
// function only returns a positive number

int validatepositive(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;

    // recollect the number if the number is not positive
    while(n<=0){
        cout<<"Enter a positive number: ";
        cin>>n;
    }
    return n;
}

// function 2: function to calculate and return the area of a rectangle
int arearectangle(int lenght, int width){
    return lenght*width;

}

// function 3: print the result
void printarea(int lenght, int width, int area){
    cout<<"The area of a rectangle with "<<lenght<<" and "<<width<<" is "<<area<<endl;
}

// Exercise: Define Two Functions
// Function No. 2, printing the result 
/*void printResult(int number, bool result)
{
    cout << "Is " << number << " even? " << result << endl;
}*/

/*
    one function that will check if a number is even. The function should have a parameter that requests an integer number to check and return a bool value. The argument for the function is collected from the main() function. Hint: use if-else statement within the function to check if a number is even. 
    one function to print the result as Is ___ even? ____ 
    */

     
    bool isEven(int num){
    cout<<"\n -- EXERCISE: Define Two Functions ------"<<endl;
    if(num % 2 == 0)
        return true;

    else
        return false;
    }

void printResult(int number, bool result){}

