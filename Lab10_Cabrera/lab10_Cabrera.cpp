/*
Miguel Eduardo Cabrera
March 2, 2026
Lab 10, loop mechanims
*/

#include<iostream>

using namespace std;
int main(){
    cout<<"\n-------- Example 1: for loop basics --------"<<endl;
    for (int action = 0; action<5; action++ ){
        cout<<"Hello"<<action<<endl;

    }
    /*
    loop iteration  |   action  |   action<5    |   cout<<"Hello"<<action   |   action++
    ------------------------------------------------------------------------------------
        1           |   0       |       true    |       Hello 0             |   action = 0+1 = 1
        2           |   1       |       true    |       Hello 1             |   action = 1+1 = 2
        3           |   2       |       true    |       Hello 2             |   action = 2+1 = 3
        4           |   3       |       true    |       Hello 3             |   action = 3+1 = 4
        5           |   4       |       true    |       Hello 4             |   action = 4+1 = 5
        6           |   5       |       false (stop the loop)
        */

    cout<<"\n-------- Example 2: for loop as an increament counter --------"<<endl;
    // conter from 1 to 10 (inclusive) with step of 1 --->1,2,3,4,5,6,7,8,9,10
    int x = 1; 
    for (x; x<=10 ; x++){
        cout<<x<<" \t ";
    } 
    cout<<endl;
    cout<<"\n-------- Example 3: for loop as an decrement counter --------"<<endl;
    // counter from 2 to -5 (inclusive) with step of 1 ---> 2,1,0,-1,-2,-3,-4,-5
    for(int n = 2; n>= -5; n--){
        cout<<n<<"\t";
    }
    cout<<endl;

    cout<<"\n-------- Example 4: for loop as an increment counter with different steps --------"<<endl;
    // counter from 1 to 20 (exclusive)in a step of 3 ---> 1, 4, 7, 10, 13, 16, 19
    for (int m = 1 ; m<20; m+=3){
        cout<<m<<"\t";
    }
    cout<<endl;

    cout<<"\n-------- Example 5: neested conditional statement within the loop --------"<<endl;
    // counter from -10 to 10, step of 3, count how many numbers are multipled of 5 within the counter
    int counter_5 = 0;
    for (int x = -10; x<=10; x += 3){
        cout<<x<<"\t";
        if (x%5==0 && x !=0){
            counter_5 ++;
        }
    }
    cout<<endl;
    cout<<"There is/are "<<counter_5<<" number/s multipled of 5"<<endl;

    cout<<"\n -------- EXERCISE 1 --------"<<endl;
    // create a for loop that decrement from 21 to -21, inclusive, with a decrement step of 5 at each iteration. Also count the number of times that the loop counter is multiplied of 2 

    int usernumber;
    cout<<"Enter an inital number: ";
    cin>>usernumber;

    for(usernumber = 20; usernumber >- 5; usernumber += 2){
        cout<<usernumber<<"\t";


    }

    return 0;
}




