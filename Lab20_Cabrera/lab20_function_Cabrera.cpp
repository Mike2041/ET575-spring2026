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

// Example 5: Check if a File Exists
void checkfile(string filename){
    ifstream fin;
    fin.open(filename);

    // If the filename doesn't exist in the root directory, exit the function
    if(fin.fail()){
        cout<<"File "<<filename<<" doesn't exist!"<<endl;
        return;

    }

    // If the filename exists, then read all the lines in the file
    string eachline;
    while(getline(fin, eachline)){
        cout<<"Line 1 = "<<eachline<<endl;

    }

    // Close the File
    fin.close();
}

/*Lab exercise description: define three functions:
 a function to create a file named 'data_user.txt'. 
 The program should write the following line in the text file: 
“This is my output file – Type your full name.\n”  
a function to append a new message to the file name 'data_user.txt'.
The new message is passed to the function as an argument. 
a function to read a file. The file name should be passed to the
 function as an argument.
*/

// Function 1: Create File

void createFile(string filename){
    ofstream file;
    file.open(filename);
    file<<"This is my output file - Miguel Eduardo Cabrera Callejas.\n";
    file.close();
}

// Function 2: Append a new message to the file
void appendToFile(const string& message, string filename){
    ofstream file;
    file.open(filename, ios::app); // append mode
    file<<message<<"\n";
    file.close();
}

// Function 3: Read a file (file name passed as argument)
void readFile(const string& filename){
    ifstream file;
    file.open(filename);
    string line;

        while(getline(file, line)){
            cout<<line<<endl;
        }
        file.close();
  
 
}
