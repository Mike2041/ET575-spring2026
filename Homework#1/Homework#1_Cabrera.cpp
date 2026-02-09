/*
Miguel Eduardo Cabrera
Homework#1, string, string methods and numerical variables
Feb 8, 2026
*/

/* Activity 1
Procedure: Create a C++ program that:
Step 1) Has a string variable with an initial value of “Welcome to ” and another string with initial value “New York City”
Step 2) Has a string variable that will collect a name from computer keyboard.
Step 3) has a string variable that will concatenate the variables from step1 and step 2 using the + operator. The concatenated string should have the following order:
Welcome to New York City _____
where the blank is the name collected from the keyword
Step 4) prompts the concatenated string from Step 3
Step 5) uses string method to find the length of string variable from step 3. Store the return value in an integer variable
Step 6) uses string method to find word “ma” in the string variable from step 3. Store the result index in an integer variable.
Step 7) uses the string variable from step 3 and replace the word “ma” with the character  "%---%". Hint: use the index found in step 6
Step 8) prompts result from step 4, 5, 6, and 7, you must use \t to align the result, as:
*/

#include<iostream>
#include<string>

using namespace std;

int main(){
// Step 1: Initial strings
    string part1 = "Welcome to ";
    string part2 = "New York City";

// Step 2: Collect name from keyboard
    string name;
    cout << "Enter your name: ";
    getline(cin, name);

// Step 3: Concatenate strings
    string message = part1 + part2 + " " + name;

// Step 4: Prompt concatenated string
// (this step will be stored already in 'message', it is little confused in the way to wrote for me professor)

// Step 5: Find length of the string
    int length = message.length();

// Step 6: Find index of "ma"
    int index = message.find("ma");

// Step 7: Replace "ma" with "%---%"
    int index = message.find("ma");
    if (index != -1){
        message.replace(index, 2, "%---%");

    }
    

// Step 8: Display results using tabs
    cout << "\n -------- Result Activity 1 --------:\n";
    cout << "Message:\t\t" << message << endl;
    cout << "Length:\t\t\t" << length << endl;
    cout << "Index of \"ma\":\t\t" << index << endl;
    cout << "After replace:\t\t" << replacemessage << endl;

    return 0;
}



#include<



