#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;

  
    cout << "Enter a string: ";
    getline(cin, input);

    int letters = 0, digits = 0, others = 0;

    
    for (char c : input) {
        if (isalpha(c)) { 
            letters++;
        } else if (isdigit(c)) { 
            digits++;
        } else { 
            others++;
        }
    }


    cout << "Amount of letters: " << letters << endl;
    cout << "Amount of numbers: " << digits << endl;
    cout << "Amount of others symbols: " << others << endl;

    return 0;
}
