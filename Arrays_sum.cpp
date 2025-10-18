#include <iostream>

using namespace std;

int main() {
    // Declaring and initializing an array
    int numbers[5] = {10, 20, 30, 40, 50};
    int sum = 0;
    
    cout << "Array elements are: ";
    for (int i = 0; i < 5; ++i) {
        cout << numbers[i] << " ";
        sum += numbers[i];
    }
    
    cout << endl;
    cout << "Sum of array elements: " << sum << endl;
    
    return 0;
}
