#include <iostream>
#include <fstream> 
#include <string>

using namespace std;

int main() {
    string fileName = "example_data.txt";
    string line;

    // 1. Writing to a file (ofstream)
    ofstream fileOut(fileName);

    if (fileOut.is_open()) {
        fileOut << "Hello, this is line 1 written from C++.\n";
        fileOut << "This is line 2 with a number: 12345.\n";
        fileOut.close();
        cout << "Successfully wrote data to " << fileName << endl;
    } else {
        cout << "Unable to open file for writing." << endl;
    }

    // 2. Reading from a file (ifstream)
    ifstream fileIn(fileName);

    cout << "\n--- Reading from the file ---" << endl;
    if (fileIn.is_open()) {
        while (getline(fileIn, line)) {
            cout << line << endl;
        }
        fileIn.close();
    } else {
        cout << "Unable to open file for reading." << endl;
    }
    
    return 0;
}
