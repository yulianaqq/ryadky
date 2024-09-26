#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;

 
    cout << "Write a string: ";
    getline(cin, input);

    int left = 0;
    int right = input.length() - 1;
    bool isPalindrome = true;

    while (left < right) {
    
        while (left < right && !isalnum(input[left])) {
            left++;
        }
        while (left < right && !isalnum(input[right])) {
            right--;
        }

        
        if (tolower(input[left]) != tolower(input[right])) {
            isPalindrome = false;
            break;
        }

        left++;
        right--;
    }

   
    if (isPalindrome) {
        cout << "String is a palindrom" << endl;
    } else {
        cout << "String isn't a palindrom" << endl;
    }

    return 0;
}
