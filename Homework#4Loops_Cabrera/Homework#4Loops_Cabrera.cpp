/*
Miguel Eduardo Cabrera Callejas
Homework#4_Loops
Marck 15/2026
*/

/*
Write a C++ program that will ask the user to enter a number greater than or equal to 10. 
If the user enters a number that is less than 10, the program will display the same message 
asking the user to enter a number again. For this question, apply do-while loop. Once a right
 number is entered, the program will print the number as:

	is a valid number!

Hint: you might use if statement nested in the do-while loop.
*/

#include <iostream>

using namespace std;

int main(){
    cout<<" -------- Question No. 1 -------- "<<endl;
    int num;

    do {
        cout<<"Enter a number greater than or equal to 10: ";
        cin>>num;

        if (num<10) {
            cout<<"Enter a number greater than or equal to 10."<<endl;
        }

    } while (num<10);

    cout<<" -------- Question No. 2 -------- "<<endl;

    /*
    Ask the user to enter two numbers and then print all numbers from the minimum to the maximum number.
    You must while loop for this program.

        ---> Hint: you can use a if-else statement to control the minimum and the maximum number.
    */

    
    int num1, num2, min, max;

    cout<<"Enter first number: ";
    cin>>num1;

    cout<<"Enter second number: ";
    cin>>num2;

    if(num1 > num2)
    {
        min = num2;
        max = num1;
    }
    else
    {
        min = num1;
        max = num2;
    }

    while(min<=max)
    {
        cout<<min<<" ";
        min++;
    }

    cout<<"\n -------- Question No. 3 Graphing a r letter -------- "<<endl;

    /*
    Create a C++ program that will print the letter r with sign # 
    Set the dimension as a global variable with value 11x11. For this program, use nested for loop.
    */

    
    for(int i = 0; i < SIZE; i++)         // rows
        for(int j = 0; j < SIZE; j++) {     // columns
            // print # for the lowercase "r"
            if(j == SIZE/4 ||                // left vertical line
               (i == SIZE/4 && j > SIZE/4 && j < SIZE/2) ||  // top horizontal line
               (i > SIZE/4 && i < SIZE/2 && j == SIZE/2))   // right vertical short line
            {
                cout << "# ";
            } else {
                cout << ". ";
            
        
        cout << endl;
    
    
    
     
    return 0;
    }


