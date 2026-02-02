/*
Miguel Eduardo Cabrera
lab 4, string and string methods
Feb 2, 2026
*/
#include<iostream>
#include<string>

using namespace std;
int main(){
    cout<<"\n ------ example 1: string indexing ------"<<endl;
    // each character in a string can be accessed by its index number
    // index starts from 0, most-left chacacter
    string firstname = "Peter";
    cout<<"The 4th character of the first name = "<<firstname[3]<<endl;
    cout<<"The 3d character of the first name = "<<firstname.at(2)<<endl;

    cout<<"\n ------ Example 2: string length ------"<<endl;
    //lenght method returns the amoung of character in a string
    int firstname_length = firstname.length();
    cout<<"First name has "<<firstname_length<<" characters"<<endl;

    cout<<"\n ------Example 3: add or concatenate strings -----"<<endl;
    string color = "orange";
    string animal = "cat";
    string addstrings =  "My "+ animal + " loves " + color + "toys";
    cout<<addstrings<<endl;
    cout<<color+animal<<endl;

    cout<<"\n ------Example 4: substract characters from a string ------"<<endl;
    // substr() method substracts(extracts) characters from a string
    // substr(index from where the substraction would happen, amoung from characters to be extracted)
    string city ="Bayside";
    string sub_char = city.substr(3,4); // substract 4 characters from index 3
    cout<<"Subtracted characters = "<<sub_char<<endl;

    cout<<"\n ------Example 5: insert characters into a string ------"<<endl;
    // insert new characters into a string
    // insert (index from where the new characters will be inserted, characters to be inserted)
    // insert Queens- into Bayside. The result should be = BayQueens-side
    city.insert(3,"Queens-");
    cout<<"After insert method = "<<city<<endl;

    cout<<" ------Example 6: add characters to the end of a string ------"<<endl;
    //append method adds characters to the end of a string
    string fullname = "Peter Pan";
    // add the word "@neverland" to the end of the full name. The result should be 'Peter Pan@neverland'
    fullname.append("@neverland");
    cout<<"After append method = "<<fullname<<endl;

    cout<<" ------Example 7: replace characters in a string ------"<<endl;
    // replace method replaces characters in a string
    // replace(index where the replacement will happen, amoung of characters to be replaced, string of new replace)
    string word = "engineering";
    cout<<"Original word = "<<word<<endl;
    // replace the word 'ee' with 'FUTURE'. The result will be "enginFUTUREring"
    word.replace(5,2,"FUTURE");
    cout<<"After the replace method = "<<word<<endl;

    cout<<"\n ------Example 8: erase characters in a string ------"<<endl;
    // erase(index where the erase will happen, amoung of characters to be erased)
    word = "layout";
    cout<<"Original word = "<<word<<endl;
    // erase 'you' from word. The result should be 'lat'
    word.erase(2,3); // erase therr characters from index 2
    cout<<"After erase method = "<<word<<endl;
    
    cout<<"\n ------Example 9: find characters in a string ------"<<endl;
    // find method returns the index of the first found character
    word = "characters";
    // find letter 'a' from word
    int index_a = word.find("a");
    cout<<"Index for a = "<<index_a<<endl;
    // find the index for 'act'
    cout<<"Index for 'act' = "<<word.find("act")<<endl;

    cout<<"\n ------ Lab Exercise: ------"<<endl;
    // collect new word
    cout<<"Enter a new word: ";
    cin>>word;
    





    return 0;
}