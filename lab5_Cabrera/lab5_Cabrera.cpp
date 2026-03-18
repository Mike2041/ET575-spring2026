#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    
    // Ask the user to type a word
    cout << "Enter a word: ";
    cin >> word;

    // Print the 2nd character (index 1)
    if (word.length() >= 2) {
        cout << "Second character: " << word[1] << endl;
    } else {
        cout << "The word is too short to have a second character." << endl;
    }

    // Print the length of the word
    cout << "Length of the word: " << word.length() << endl;

    // Replace 2 characters from the 3rd character (index 2) with "--$--"
    string replaced = word;
    if (word.length() >= 3) {
        replaced.replace(2, 2, "--$--");
        cout << "After replacement: " << replaced << endl;
    } else {
        cout << "Word too short to perform replacement." << endl;
    }

    // Remove 3 characters from the end of the word
    string truncated = word;
    if (word.length() > 3) {
        truncated.erase(truncated.length() - 3, 3);
    } else {
        truncated = "";
    }
    cout << "After removing last 3 characters: " << truncated << endl;

    return 0;
}

/*
- This is Perplexity AI
→ The program code is correct and run smooth.
→ It is readable and properly comented.
→ It is with many concepts that I learned during class, with the exception the new command "Truncated" we did not use it in class yet
→ The Output is great
*/
