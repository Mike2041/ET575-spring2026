#include <iostream>

using namespace std;
int main(){

cout<<"\n -------- Example 9: break statement"<<endl;
// withdraw from an account. Original balance $1000
// if the amount is greater than the balance or negative, the program will recollect another amount.




int balance = 1000;
int w = 0;

while (true){
    cout<<"How much do you want to withdraw? ";
    cin>>w;
    if(w<0 || w>balance){
        cout<<"Can't withdraw $"<<w<<". Enter another amount or press 0 to exit";
        cin>>w;
    
        if(w == 0){
            break;
        }

    else{
        balance -= w;
        break;
    }
}

}

// print result
    cout<<"The balance is $"<<balance<<endl;
    return 0;
}
    



