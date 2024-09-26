#include <iostream>
using namespace std;
bool isValidIP(const string& ip) {
    string part;
    int partsCount = 0;
    int i = 0;

    while (i < ip.length()) {
        part.clear();
    
        while (i < ip.length() && ip[i] != '.') {
            part += ip[i];
            i++;
        }
        i++;  

       
        if (part.empty() || part.length() > 3 || (part[0] == '0' && part.length() > 1)) {
            return false;
        }

        for (char c : part) {
            if (!isdigit(c)) return false;  
        }

        int num = stoi(part);
        if (num < 0 || num > 255) {
            return false;
        }

        partsCount++;
    }

    
    return partsCount == 4;
}

int main() {
    string ip;
    cout << "Enter IP-adress: ";
    cin >> ip;

    if (isValidIP(ip)) {
        cout << "Correct IP-adress." << endl;
    } else {
        cout << "Valid IP-adress" << endl;
    }

    return 0;
}
