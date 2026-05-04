/*
Miguel Eduardo Cabrera Callejas
Homework 10, Parsing and File Handling
May 04, 2026 file streaming
*/

#include<iostream>
#include"homework10_function_Cabrera.cpp"
using namespace std;

/*
Create a C++ program that performs the following tasks:
Define a function to read the contents of the text file and display them on the 
console, Terminal. The name of the file should be passed to the function as argument.
Define a function to count the number of words in a file and write the count in a new
 file named ‘wordcounts.txt’. The ‘wordcounts.txt’ should write the result as:
Student’s full name
Total number of words:
Define a function to count the number of time that the word ‘Earth’ appears on the file.
 Append the result to file ‘wordcounts.txt’ as:
The word ‘Earth’ appears ____ times in the document.
Where the blank is the number of times that the word ‘Earth’ appears on the 
file ‘wordcounts.txt’.
*/

int main(){
    string filename, name;

    cout<<"Enter file name: ";
    cin>>filename;

    cout<<"Enter your full name: ";
    cin.ignore();
    getline(cin, name);

    showFile(filename);
    countWords(filename, name);
    countEarth(filename);

    cout<<"Done. Check wordcounts.txt"<<endl;

    return 0;
}







