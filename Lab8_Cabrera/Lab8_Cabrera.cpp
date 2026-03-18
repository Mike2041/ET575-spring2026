/*
Miguel Eduardo Cabrera
Feb 11, 2026
Lab8, Control Flow using switch-case statement
*/ 
#include<iostream>

using namespace std;

int main(){
    cout<<"\n ------ Example 1: Switch-case ------"<<endl;
    // use switch-case statement to ask the user to select a dayoff
    //declare variasbles
    int day;
    string dayoff;
    //prompt message
    cout<<"Select a dayoff: "<<endl;
    cout<<"1 for Monday"<<endl;
    cout<<"2 for Tuesday"<<endl;
    cout<<"3 for Wednesday"<<endl;
    cout<<"4 for Thursday"<<endl;
    cout<<"5 for Friday"<<endl;
    // collect the dayoff
    cin>>day;

    //switch-case statement
    switch(day)
    {
    case 1:
        dayoff = "Monday";
        break;
    case 2:
        dayoff = "Tuesday";
        break;
    case 3:
        dayoff = "Wednesday";
        break;
    case 4:
        dayoff = "Thursday";
        break;
    case 5:
        dayoff = "Friday";
        break;

    default:
        dayoff = "invalid";
        break;
     
    }
// prompt result
cout<<"Your dayffo is "<<dayoff<<endl;

cout<<"\n ------ Example 2: Switch-case ------"<<endl;
// use switch-case statement to pick a gender
// declare variables
char gender;
cout<<"Select a gender: "<<endl;
cout<<"f for female"<<endl;
cout<<"m for male"<<endl;
cout<<"o for other"<<endl;
//collect gender
cin>>gender;

//switch-case statement
switch(gender)
{
case'f':
case'F':
    cout<<"Gender = Female"<<endl;
    break;
case 'm': case 'M':
cout<<"Gender = Male"<<endl;
    break;
case 'o': case 'O':
    cout<<"Gender = Other"<<endl;
    break;
default:
    cout<<"Gender = Undefined"<<endl;
    break;

}

cout<<"\n ------ EXERCISE ------"<<endl;
// user to enter the first number.
// user to enter the second number.
int numb1;
int numb2;
char operation;

cout<<"Enter the firs number: ";
cin>>numb1;
cout<<"Enter the second number: ";
cin>>numb2;
cout<<"Choose an operation:";
cin>>operation;

// Switch-case
switch (operation)
{
case '+':
    cout<<"Result: "<<numb1<<" + "<<numb2<<" = "<<numb1+numb2<<endl;
    break;
case '-':
    cout<<"Result: "<<numb1<<" - "<<numb2<<" = "<<numb1-numb2<<endl;
    break;
case '*':
    cout<<"Result: "<<numb1<<" * "<<numb2<<" = "<<numb1*numb2<<endl;
    break;
case '/':
    cout<<"Result: "<<numb1<<" / "<<numb2<<" / "<<numb1/numb2<<endl;
    break;
case '%':
    cout<<"Result: "<<numb1<<" % "<<numb2<<" % "<<numb1%numb2<<endl;
    break;
case 'q': case 'Q':
    cout<<"No Result: ";
default:
    break;
}


return 0;
}


