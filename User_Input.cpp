#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    string name;

    // Taking user input
    cout << "Enter your name: ";
    // Use getline for full name with spaces
    getline(cin, name); 
    
    cout << "Enter your age: ";
    cin >> age;
    
    // Applying a basic condition
    if (age >= 18) {
        cout << name << ", you are an adult." << endl;
    } else {
        cout << name << ", you are a minor." << endl;
    }
    
    return 0;
}
