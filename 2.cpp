#include <iostream>
#include <string>
using namespace std;

int main() {
    const int SIZE = 5;
    string students[SIZE];

   
    cout << "Enter surnames of 5 students:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << "Student " << i + 1 << ": ";
        getline(cin, students[i]);
    }

   
    for (int i = 0; i < SIZE - 1; i++) {
        for (int j = 0; j < SIZE - i - 1; j++) {
            if (students[j] < students[j + 1]) {
            
                string temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }

   
    cout << "Surnames of students after sorting in descending order:" << endl;
    for (int i = 0; i < SIZE; i++) {
        cout << students[i] << endl;
    }

    return 0;
}

