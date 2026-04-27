/*
Miguel Eduardo Cabrera Callejas
Lab 20, Parsing and File Handling
April 17, 2026
*/

#include<iostream>
using namespace std;

// Example 1: using cin to validate a data type
// if the input is a proper data type, cin will set a state to 'goodbit'
// if the input is not a proper data type, cin will set a state to 'failbit'

// function to collect and return an integer
int collectnumb(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if (cin.fail()){
        cout<<"Wrong data type! "<<endl;
        cin.clear();
        cin.ignore(10000,'\n');
        // recollect the number
        return collectnumb();
    }
    else{
        return n;
    }
}

// Example 2: Read File
// input file = ifstream
// output file = ofstream
// fstream has ifstream and ofstream
// after the library, we cna declare an ifstream and ofstream objects
#include<fstream>
void readfile(){
    // declare an object to handle ifstream
    ifstream fin;
    // declare a variable to hold each line of the read file
    string line;
    // declare a variable as a line counter
    int linecounter = 1; // first line
    // open the file
    fin.open("samplefile.txt");
    // use a loop to go through each line in the opened file
    while(getline(fin, line)){
        cout<<"Sentence = "<<linecounter<<" = "<<line<<endl;
        linecounter ++;
    }
    // close the file input when finished reading
    fin.close();
    
}

// Example 3:Write Files
// Function to Write or Create a New File
void writefile(string filename){
    // declare an object to handle output files, fout
    ofstream fout;
    // open the file
    // if the file exists, it will overwrite
    // if the file doesn't exist, it will create a new file
    fout.open (filename);
    // Write "Student's Full Name:" in the first line of file
    fout<<"Lab 20, File Streaming \n";
    fout<<"April 27, 2026\n";
    fout<<"Student's Full Name: ";
    // close the file output when finished writeing
    fout.close();

}

// Example 4: Append Data into an Existing File
void appendmsg(string filename, string msg){
    ofstream fout;
    fout.open(filename, ios::app);
    // append the following data
    for (int n=3; n>0; n--){
        fout<<n<<endl;

    }
    fout<<"GAME OVER\n"<<msg<<endl;
    fout.close();
    
}







