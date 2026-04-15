/*
Miguel Eduardo Cabrera Callejas 
Lab 16, Pointers and intro to array
April13, 2026
*/

#include<iostream>

using namespace std;

// example 1: pointer and reference
void pointerreference(){
    int num = 12;
    char syn = 'T';
    string n = "Peter";

    // declare the pointers
    int* pointerint;
    char* pointerchar;
    string* pointerstring;  // declare and initialized a pointer

    // check a pointer ==> show memory address
    cout<<"int pointer "<<pointerint<<endl;

    // assign value to a pointer
    pointerint = &num; 
    pointerchar = &syn;

    // check pointers' value ==> memory address
    cout<<"int pointer =   "<<pointerint<<endl;
    cout<<"char pointer =   "<<pointerchar<<endl;
    cout<<"string pointer =   "<<pointerstring<<endl; 
    
    // use dereference operator to obtain the value of the pointer memory address
    cout<<"value of int pointer =   "<<*pointerint<<endl;
    cout<<"value of the char pointer =   "<<*pointerchar<<endl;

}

// example 2: pass pointer into a function
// pass a value
void printvalue(string n){
    cout<<"Value =   "<<n<<endl;

}

// pass a point
void printaddress(string* n){
    cout<<"Pointer = "<<n<<endl;

}

// passing a reference value
void printreference(string& n){
    cout<<"Pointer value = "<<n<<endl;
}

// Example 3: array 
void introarray (){
    // declare an array of size 5
    int scores[5];

    // assign values to an array. use indexing to access to each cell in an array. indexing starts from 0
    scores[0] = 90;  // accessing the fist (most-left) cell in array scores
    scores[1] = 70;
    scores[2] = 86;
    scores[3] = 92;
    scores[4] = 60;

    // find the average of the scores
    float average = (scores[0]+scores[1]+scores[2]+scores[3]+scores[4])/5.0;
    cout<<"The average is "<<average<<endl;

    // initialize an array
    char symbols[3] = {'%', '$', '#'};
    cout<<"The second symbol is = "<<symbols[1]<<endl;

    // initialize an array without an array's size
    string names[] = {"Peter", "Annie"};

    cout<<"The first name is = "<<names[0]<<endl;

}

// Example 4: Length of an Array
void lenghtarray(){
    // size function returns the number of bytes of 
    cout<<"character = " <<sizeof(char)<<endl;
    cout<<"string = " <<sizeof(string)<<endl;
    cout<<"interger = " <<sizeof(int)<<endl;
    cout<<"float = " <<sizeof(float)<<endl;
    cout<<"double = " <<sizeof(double)<<endl;

    // array
    int numbers[] = {2, 7, 9, -10, 3};

    cout<<"Lenth of Array Numbers = "<<sizeof(numbers)<<endl;
    // to find the number of values in an array = total size of an array/ size of the data
    cout<<"There is "<<(sizeof(numbers)/sizeof(int))<<" Values in an Array "<<endl;
}

// Example 5: Loop through an Array
void looparray(){
    const int s = 5;
    int arr[s] = {1, 2, 3, 4, 5 };

    // create a pointer to arr
    int *ptr_array = arr; 

    // loop through an array
    for (int index = 0; index<s ; index++){
        cout<<"index = "<<index<<" has value = "<<arr[index]<<endl;
    }
}

// Example 6: Pass an Array to a function
// function to populate data into an array
void fillup(int arraysize, int arrnumbers[]){
    for(int index = 0; index<arraysize; index++){
        cout<<"Enter a Number: ";
        cin>>arrnumbers[index];
    }
}

// Function to Print all Data in an Array
void printaray(int arraysize, int arrnumbers[]){
    for(int index = 0; index<arraysize; index++){
        cout<<arrnumbers[index]<<"\t";
    }
    cout<<endl;

}

// function to find the maximum number in an array
int maxnumber (int arraysize, int *arrnumbers){
    int maxvalue = arrnumbers[0];
    for(int index = 0; index<arraysize; index++){
        if(arrnumbers [index]>maxvalue){
            maxvalue = arrnumbers[index];
        }
    }
    return maxvalue;
}

// Exercise Lab 6
// write a code, using loop, to find the LOWEST score of array 'scores', and prompt the result message as 'The lowest score is ___ ' where the blank is the lowest score of array 'scores'.

// declare an array with 6 values ==> fixed length array
void inarray(){
int scores[6];

// assign value to each item in array 'scores'
scores[0] = 60;
scores[1] = 90;
scores[2] = 75;
scores[3] = 88;
scores[4] = 100;
scores[5] = 44;

// Find Array Size
int size = sizeof(scores)/sizeof(scores[0]);

int lowest = scores[0];

// Loop using array size
for (int index = 1; index<size; index++){
    if(scores[index]<lowest){
        lowest = scores[index];
    }
}
cout<<"The Lowest score is "<<lowest<<endl;

}





