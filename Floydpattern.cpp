#include <iostream>

using namespace std;

int main() {
    int rows = 4; 
    int number = 1; 
    
    // Outer loop for rows
    for (int i = 1; i <= rows; ++i) {
        
        // Inner loop for printing numbers in each row
        for (int j = 1; j <= i; ++j) {
            cout << number << " ";
            number++; 
        }
        
        cout << endl; 
    }
    
    return 0;
}
