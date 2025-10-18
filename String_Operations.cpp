#include <iostream>

#include <string> // স্ট্রিং ব্যবহার করার জন্য এই হেডার ফাইলটি প্রয়োজন



using namespace std;



int main() {

    // Declaring and initializing two strings

    string firstName = "Niloy";

    string lastName = "Ahsan";

    

    // 1. Finding the length

    cout << "Length of first name: " << firstName.length() << endl; // Output: 5

    

    // 2. Concatenation (joining strings)

    string fullName = firstName + " " + lastName;

    

    cout << "Full Name: " << fullName << endl;

    

    // 3. Accessing a character

    cout << "First character of Full Name: " << fullName[0] << endl; // Output: N

    

    return 0;

}#include <iostream>
#include <string> // স্ট্রিং ব্যবহার করার জন্য এই হেডার ফাইলটি প্রয়োজন

using namespace std;

int main() {
    // Declaring and initializing two strings
    string firstName = "Niloy";
    string lastName = "Ahsan";
    
    // 1. Finding the length
    cout << "Length of first name: " << firstName.length() << endl; // Output: 5
    
    // 2. Concatenation (joining strings)
    string fullName = firstName + " " + lastName;
    
    cout << "Full Name: " << fullName << endl;
    
    // 3. Accessing a character
    cout << "First character of Full Name: " << fullName[0] << endl; // Output: N
    
    return 0;
}#include <iostream>
#include <string> 

using namespace std;

int main() {
    // Declaring and initializing two strings
    string firstName = "Rahi";
    string lastName = "Chowdhury";
    
    // 1. Finding the length
    cout << "Length of first name: " << firstName.length() << endl; // Output: 5
    
    // 2. Concatenation (joining strings)
    string fullName = firstName + " " + lastName;
    
    cout << "Full Name: " << fullName << endl;
    
    // 3. Accessing a character
    cout << "First character of Full Name: " << fullName[0] << endl; // Output: N
    
    return 0;
}
