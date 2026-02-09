/*
Miguel Eduardo Cabrera
Lab#1, introduction to iostream and numerical variables
Jan 26, 2026
*/

/*
Declare four variables:
→ one string variable named as country
→ one character variable named as gender 
→ one integer variable named as zipcode 
→ one float or double variable named as rate 
Cout a message asking the user to type a country, 
a gender (F for female, M for male, and O for others), a zip code, and a tax rate. 
The string variable is used to save the country, the character variable is used to save the gender, 
the integer variable is to save a zip code, and the float or double variable is to save a tax rate with decimal places.
*/

#include<iostream>
#include<string>

using namespace std;

int main(){

    // Step 1: Declare variables
    string country;
    char gender;
    int zipcode;
    double rate;  // for floating numers 

// Step 2: Ask user to input values
    cout<<"Please enter your country: ";
    cin>>country;

    cout<<"Please enter your gender (M for male, F for female, O for others): ";
    cin>>gender;

    cout<<"Please enter your zip code: ";
    cin>>zipcode;

    cout<<"Please enter the tax rate (with decimal places): ";
    cin>>rate;

    // Step 3: Display the entered values
    cout<<"\n ----- You entered the following information: -----\n";
    cout<<"Country: "<<country<<endl;
    cout<<"Gender: "<<gender<<endl;
    cout<<"Zip Code: "<<zipcode<<endl;
    cout<<"Tax Rate: "<<rate<<endl;

    return 0;
}


