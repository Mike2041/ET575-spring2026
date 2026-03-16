/*
Miguel Eduardo Cabrera Callejas
March 16/2026
Lab_13_Function Introduction to functions
*/

#include <iostream> 

using namespace std;

#include "Lab_13_function_Cabrera.cpp"

int main(){
//example 1: void function. void functions are functions that don't return any value.
    cout<<"\n ------ Example 1: void function ------ "<<endl;
    printHello();
    printHello();

    cout<<"\n ------ Example 2: passes values ------ "<<endl;
    greeting ("Peter");
    greeting ("Annie");

    cout<<"\n ------ Example 3: triple a number ------ "<<endl;
    int n = triplenumber(3);
    cout<<n<<endl;
    cout<<triplenumber(5)<<endl;

    cout<<"\n ------ Example 4: check a number ------ "<<endl;
    
    cout<<checknumber (-10)<<endl;
    cout<<checknumber (0)<<endl;
    cout<<checknumber (5)<<endl;

    cout<<"\n ------ Example 5: function composition ------ "<<endl;
    
    // int area_rec = arearectangle(validatepositive(), validatepositive());
    int length = validatepositive();
    int width = validatepositive();
    int area_rec = arearectangle(length, width);

    printarea(length, width, area_rec);

    cout<<"\n -- EXERCISE: Define Two Functions ------"<<endl;
    /*
    one function that will check if a number is even. The function should have a parameter that requests an integer number to check and return a bool value. The argument for the function is collected from the main() function. Hint: use if-else statement within the function to check if a number is even. 
    one function to print the result as Is ___ even? ____ 
    */

    // Function No. 1: check if number is even
    bool isEven(int num){

    if(num % 2 == 0)
        return true;

    else
        return false;
    }
    
    return 0;
    }
