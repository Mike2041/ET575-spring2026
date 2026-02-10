/*
student's full name
Jan28, 2026
lab 3, numerical variables
*/

#include<iostream>

using namespace std;

int main (){
    cout<<"\n------ Example 1: ------" <<endl;
    //declare variables
    int number = 10.9;
    float n = 7.8;

    cout<<"number = "<<number<<endl;
    cout<<"n = "<<n<<endl;

    cout<<"\n------ Example 2: numerical operators ------ "<<endl;
    // numerocal operator, + - * /
    // % returns the remainder of a division
    number = 5;
    int number2 = 2;
    cout<<"sum = "<<number + n<<endl;
    cout<<"without casting, division = "<<number/number2 <<endl;
    // casting conver one type into another data type 
    cout<<"division = " << number/static_cast<float>(number2)<<endl;

    //%modulus
    cout<<"mod of two numbers = "<< number%number2 <<endl;

    cout<<"\n ----- Example 3: assigment operator ------ "<<endl;
    // assignment operators assign a value to a variable itself
    // ++ increment by 1
    number++;
    cout<<"updated number = "<<number<<endl;
    // -- decrement by 1
    cout<<"original number2 = "<<number2<<endl;
    number2 --;
    cout<<"updated number = "<<number<<endl;

    // +=
    number = 10;
    cout<<"original number = "<<number<<endl;
    number+= 5;
    cout<<"updated number = "<<number<<endl;

    // -=
    number -= 8;
    cout<<"updated number with -= 8 --> " <<number<<endl;

    cout<<"\n ----- Example 4: comparison operators ------ "<<endl;
    // == compare if numbers are not equal
    // != 
    // > greater than
    // < less than
    // >= greater than or equal to  
    // <= less than or equal to
    // C++ returns 1 for True and 0 for False

    number = 3;
    number2 = 8;
    
    bool check1 = number != number2;
    bool check2 = number > number2;
    cout<<"are number and number2 different? "<<check1<<endl;
    cout<<"is number greater than number2? "<<check2<<endl;

    cout<<"\n------ Example 5: logical operators ------ "<<endl;
    // determine the logic between values
    // && AND logic. returns TRUE if all statements are TRUE
    // || OR logic. returs TRUE if at least one of the statements is TRUE
    // ! NOT(INVERTER) logic. returns TRUE from a FALSE or vicerse
    number = 3;
    number2 = 5;

    bool check3 = number < number2; // check3 = true(1)
    bool check4 = number >= number2; // check4 = false(0)
    bool check5 = number2 != 10; // check5 = true(1)
    bool check6 = number == 3; // check6 = true(1)

    bool logicalcom = check3 && check5 && check6; // true && true && true = true
    bool logicalcom2 = check4 && check5 && check6; // false && true && true = false
    bool logicalcom3 = check4 || check5 || check6; // false || true || true = true
    bool logicalcom4 = !logicalcom; // !true = false

    // print result
    cout<<"logical comparison 1 = "<<logicalcom<<endl;
    cout<<"logical comparison 2 = "<<logicalcom2<<endl;
    cout<<"logical comparison 3 = "<<logicalcom3<<endl;
    cout<<"logical comparison 4 = "<<logicalcom4<<endl;


cout<<"\n------ Lab Exercise ------ "<<endl;

    int a, b;

    // User input
    cout << "Enter first integer (a): ";
    cin >> a;

    cout << "Enter second integer (b): ";
    cin >> b;

    // Arithmetic operations
    /*Ask the user to input two integers and save them in variables a and b.
    Perform and display the results of addition, subtraction, multiplication, 
    division, and modulus operations.*/

    cout<<"\n------ Arithmetic Operations ------"<<endl;
    cout<<"Addition (a + b): "<<a + b<<endl;
    cout<<"Subtraction (a - b): "<<a - b<<endl;
    cout<<"Multiplication (a * b): "<<a * b<<endl;
    cout<<"Division (a / b): "<<a / b<<endl;
    cout<<"Modulus (a % b): "<<a % b<<endl;

    // Assignment operations
    /*Increment a by 10 using the += operator.
    Decrement b by 5 using the -= operator.
    Display the updated values of a and b.*/

    a += 10;
    b -= 5;

    cout<<"\n------ Assignment Operations ------"<<endl;
    cout<<"Updated value of a (a += 10): "<<a<<endl;
    cout<<"Updated value of b (b -= 5): "<<b<<endl;

    // Boolean (logical) operations
    /*Check and display the result of the following conditions:
    Is a greater than b?
    Is a equal to b?
    Is a not equal to b?
    Are both a and b positive numbers? (use &&)
    Is either a or b a negative number? (use ||)
    Is a not greater than b? (use ! operator)*/


    cout<<"\n------ Boolean Operations ------"<<endl;
    cout<<"Is a greater than b? "<<(a > b)<<endl;
    cout<<"Is a equal to b? "<<(a == b)<<endl;
    cout<<"Is a not equal to b? "<<(a != b)<<endl;
    cout<<"Are both a and b positive numbers? "<<(a > 0 && b > 0)<<endl;
    cout<<"Is either a or b a negative number? "<<(a < 0 || b < 0)<<endl;
    cout<<"Is a not greater than b? "<<!(a > b)<<endl;

    
    return 0;
}

   






