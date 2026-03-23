/*
Miguel Eduardo Cabrera Callejas
Homework6-More about Functions
March 30/22/2026
*/
#include<iostream>

using namespace std;

int rose(int n){
    if (n<=0){
        return 1;
    }
    else{
        return (rose(n-1)*n);
    }
}









