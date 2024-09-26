#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;

    
    cout << "Enter a sentences: ";
    getline(cin, input);

    int wordCount = 0;
    bool inWord = false;

    
    for (char c : input) {
        if (isspace(c)) {
            inWord = false; 
        } else {
            if (!inWord) {
                wordCount++;  
                inWord = true;
            }
        }
    }

  
    cout << "Number of words in that sentences: " << wordCount << endl;

    return 0;
}
