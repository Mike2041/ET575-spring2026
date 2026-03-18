/*
Miguel Eduardo Cabrera Callejas
Lab 14, Functions
March 18, 2026
*/
#include<iostream>

using namespace std;

// Example 1: function calling function
int multiply(int a, int b){
    return a*b;
}

int calculatedb(int x, int y){
    // function calling function
    return 2*multiply(x,y);
}

// Example 2: recursive function
void cheers (int n){
    // base case
    if (n ==1){
        cout<<"STOP"<<endl;

    }
    // recursive case
    else{
        cout<<(n*2)<<endl;
        cheers(n-1);
    }
}

/*
TABLE OF ANALYSIS
function        |               |               | else          |
iteration       | int n         |  if(n==1)     |  cout<<(n*2)  | cheer (n-1)
----------------------------------------------------------------------------------
    1           |   n=4         |   false       |   cout(4*2=8) | cheers(4-1=3)
    2           |   n=3         |   false       |   cout(3*2=6) | cheers(3-1=2)
    3           |   n=2         |   false       |   cout(2*2=4) | Cheers(2-1=1)
    4           |   N=1         |   true, cout<<STOP
*/

// Example 3: linear recursive function
int linearfuction(int m){
    if(m>10){
        return -6;
    }
    else{
        return (linearfuction(m+2) * (m-4));
    }

}
/*
function
iteration   |   int m   |   if(m>10)    |   else{return (linearfuction(m+2) * (m-4));}
---------------------------------------------------------------------------------------
    1       |   m=3     |   false       |   return linearfuction(3+2=5) * (3-4=1)
    2       |   m=5     |   false       |   return linearfuction(5+2=7) * (5-4=1)*-1
    3       |   m=7     |   false       |   return linearfunction(7+2=9) * (7-4=3)*1 * -1
    4       |   m=9     |   false       |   return linearfunction(9+2=11) * (9-4=5)*3*1*-1
    5       |   m=11    |   true, return -6

    final result = -6*5*3*1*-1 =90
*/

int collectnumber(){
    int n;
    cout<<"Enter a positive number: ";
    cin>>n;

    // recursive function to validate if n is positive
    if (n<=0){
        cout<<"Error! ";
        return collectnumber();

    }
    else{ 
        return n;
    }
}
#include<cmath>

// calculate and return the hypotenuse
float hypotenuse(int side1, int side2){
    return sqrt(pow(side1,2) + (side2,2));
}

// print result
void printresult(int side1, int side2, float h){
    cout<<"The hypotenuse of triangle with sides "<<side1<<" and "<<side2<<" is = "<<h<<endl;

}





