#include <iostream>
#include <string>

using namespace std;

int main() {
    string word;

    // Ask the user for a word
    cout << "Enter a word: ";
    cin >> word;

    // Print the 2nd character of the word
    if (word.length() >= 2) {
        cout << "2nd character: " << word[1] << endl;
    } else {
        cout << "Word is too short to get the 2nd character." << endl;
    }

    // Find and print the length of the word
    cout << "Length of the word: " << word.length() << endl;

    // Replace 2 characters starting from the 3rd character with "-- $ --"
    if (word.length() >= 4) {
        string replacedWord = word;
        replacedWord.replace(2, 2, "-- $ --");
        cout << "After replacement: " << replacedWord << endl;
    } else {
        cout << "Word is too short for replacement." << endl;
    }

    // Remove 3 characters from the end of the word
    if (word.length() > 3) {
        string shortenedWord = word;
        shortenedWord.erase(shortenedWord.length() - 3);
        cout << "After removing last 3 characters: " << shortenedWord << endl;
    } else {
        cout << "Word is too short to remove 3 characters from the end." << endl;
    }

    return 0;
}

/*
- This is ChatGPT AI
→ I run the programm code and it is correct.
→ the code is readable properly and very well comented.
→ The programing concepts are very similar or close according what I'm learning in class.
→ The Output is good
*/
