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

    return 0;
}







