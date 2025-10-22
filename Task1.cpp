#include <iostream>
#include <string>
using namespace std;

bool isNumericConstant(string s) {
    for (int i=0;i<s.length();i++){
        if (s[i]<48|| s[i]>57) {
            return false;
        }
        else
             return true;
    }

}

int main() {
    string input;
    cout << "Enter the input: ";
    cin >> input;

    if (isNumericConstant(input)) {
        cout << "Numeric constant" << endl;
    } else {
        cout << "Not numeric" << endl;
    }

    return 0;
}
