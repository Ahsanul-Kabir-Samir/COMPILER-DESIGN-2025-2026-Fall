#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    ifstream inputFile("Sample.txt");


    if (!inputFile.is_open()) {
        cerr << "Error: Could not open the file." << endl;
        return 1;
    }


    string word;

    while (inputFile >> word) {



        bool isIdentifier = true;


        if (!((word[0] >= 'A' && word[0] <= 'Z') || (word[0] >= 'a' && word[0] <= 'z') || (word[0] == '_'))) {
            isIdentifier = false;
        } else {

            for (int i = 1; i < word.length(); i++) {
                if (!((word[i] >= 'A' && word[i] <= 'Z') || (word[i] >= 'a' && word[i] <= 'z') || (word[i] >= '0' && word[i] <= '9') || (word[i] == '_'))) {
                    isIdentifier = false;
                    break;
                }
            }
        }


        if (isIdentifier) {
            cout << "'" << word << "' is an Identifier" << endl;
        } else {
            cout << "'" << word << "' is Not an Identifier" << endl;
        }


    }

    inputFile.close();
    return 0;
}
