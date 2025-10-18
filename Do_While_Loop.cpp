#include <iostream>

using namespace std;

int main() {
    int count = 1;
    
    cout << "Counting using do-while loop:" << endl;
    
    do {
        cout << "Count: " << count << endl;
        count++;
    } while (count <= 5); // Condition check happens after the block runs
    
    cout << "\nLoop finished." << endl;
    
    // Example of running at least once, even if condition is false
    int test = 10;
    cout << "\nTest case (runs once):" << endl;
    do {
        cout << "This line runs even though test > 5 is false at first." << endl;
        test++;
    } while (test < 5); 

    return 0;
}
