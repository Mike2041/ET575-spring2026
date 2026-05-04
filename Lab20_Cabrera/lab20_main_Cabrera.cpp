/*
Miguel Eduardo Cabrera Callejas
Lab 20, Parsing and File Handling
April 17, 2026
*/

#include<iostream>
#include"lab20_function_Cabrera.cpp"

using namespace std;
int main(){
    cout<<"\n ----- Example 1: Collect a Number ----- "<<endl;
    int n= collectnumb();
    cout<<"Collected number = "<<n<<endl;
    cout<<"\n ----- Example 2: Reading File ----- "<<endl;
    readfile();

    cout<<"\n ----- Example 3: Writing File ----- "<<endl;
    writefile("intro.txt");

    cout<<"\n ----- Example 4: Append Data ----- "<<endl;
    appendmsg("samplefile.txt", "Miguel Eduardo Cabrera Callejas:");

    cout<<"\n ----- Example 5: Check if a File Exists ----- "<<endl;
  
    checkfile("samplefile.txt");
    checkfile("National-Geographic..txt");

    cout<<"\n ----- Lab Exercise: File Handling ----- "<<endl;
    string filename = "data_user.txt";
    createFile(filename);                         // Create file and write initial text
    appendToFile("Miguel Eduardo Cabrera Callejas", filename); // Append a name (or any message)
    readFile(filename);           // Read and display file contents

    return 0;
}







