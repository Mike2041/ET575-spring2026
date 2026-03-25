/*
Miguel Eduardo Cabrera Callejas
Review_Examen2
March 03/24/2026
*/

#include<iostream>
using namespace std;

#include "review_exam2_function_Cabrera.cpp"

int main() {
    cout<<"\n ------ Composition Function ----- "<<endl;
    srand(time(0));

    int side1 = rand_side();
    int side2 = rand_side();

    double h = hyp(side1, side2);

    print_result(side1, side2, h);

    cout<<"\n ----- Descending Order Entries -----"<<endl;
    int num1 = collectNumber();
    int num2 = collectNumber();
    int num3 = collectNumber();
    bool desc_order = inOrder(num1,num2,num3);
    runProgram(num1,num2,num3,desc_order); 

    return 0;
}





