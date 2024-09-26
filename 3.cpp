#include <iostream>
#include <string>

using namespace std; 
int main() {
    string input;

    
    cout << "Enter a string: ";
    cin >> input;

    
    string fullInput;
    char ch;

    
    while (cin.get(ch)) {
        if (ch == '\n') break; 
        fullInput += ch; 
    }

   
    for (char &c : fullInput) {
        if (c == ' ') {
            c = '\t';
        }
    }

   
    cout << "Line after replacing spaces with tabs:\n";
    cout << fullInput << endl;

    return 0;
}
