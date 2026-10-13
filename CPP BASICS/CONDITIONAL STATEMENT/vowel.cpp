#include <iostream>
#include <string>
using namespace std;

int main() {
    string phrase = "hello world";
    int vowelCount = 0;

    cout << "Analyzing the phrase: \"" << phrase << "\"" << endl;

    // Loop through each character of the string
    for (int i = 0; i < phrase.length(); i++) {
        char letter = phrase[i];

        // Skip spaces
        if (letter == ' ') {
            continue; 
        }

        // Check if the letter is NOT a vowel (consonant check)
        if (letter != 'a' && letter != 'e' && letter != 'i' && letter != 'o' && letter != 'u') {
            cout << "'" << letter << "' is a consonant. Skipping..." << endl;
            continue; // Skip the rest of the loop and move to the next letter
        }

        // This code only runs if the letter successfully passes the checks above (it's a vowel)
        cout << "-> Found a vowel: '" << letter << "'" << endl;
        vowelCount++;
    }

    cout << "\nTotal vowels found: " << vowelCount << endl;
    return 0;
}
