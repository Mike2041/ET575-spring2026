/*
Miguel Eduardo Cabrera Callejas
Homework 10, Parsing and File Handling
May 04, 2026 file streaming
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function to display file contents
void showFile(string filename){
    ifstream file(filename);
    string word;

    while (file>>word) {
        cout<<word<<" ";
    }
    cout<<endl;

    file.close();
}

// Function to count words and write to file
void countWords(string filename, string name) {
    ifstream file(filename);
    ofstream out("wordcounts.txt");

    string word;
    int count = 0;

    while (file>>word) {
        count++;
    }

    out<<name<<endl;
    out<<"Total number of words: "<<count<<endl;

    file.close();
    out.close();
}

// Function to count "Earth"
void countEarth(string filename){
    ifstream file(filename);
    ofstream out("wordcounts.txt", ios::app);

    string word;
    int count = 0;

    while (file>>word){
        if (word=="Earth"){
            count++;
        }
    }

    out<<"The word 'Earth' appears "<<count<<" times in the document."<<endl;

    file.close();
    out.close();
}








