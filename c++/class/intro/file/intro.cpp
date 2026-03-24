# include <iostream>

using namespace std;

int main(){
    // Question: Write a program to display all primitive data type variables. 
    // Take input from the user for every data type.
    // For bool you can take (0 -> False / 1 -> True)
    
    // Declare all primitive data type variables
    int intValue;
    float floatValue;
    double doubleValue;
    char charValue;
    short shortValue;   
    long longValue;
    bool boolValue;
    int boolInput;
    
    // Display welcome message
    cout << "==== Primitive Data Types Program ====" << endl;
    cout << "Enter values for different data types:" << endl;
    cout << endl;
    
    // Read boolean (0 or 1)
    cout << "Enter boolean (0 for false, 1 for true): ";
    cin >> boolInput;
    boolValue = (boolInput != 0);
    
    // Read character
    cout << "Enter a character: ";
    cin >> charValue;
    
    // Read integer
    cout << "Enter an integer: ";
    cin >> intValue;
    
    // Read short
    cout << "Enter a short integer: ";
    cin >> shortValue;
    
    // Read long
    cout << "Enter a long integer: ";
    cin >> longValue;
    
    // Read float
    cout << "Enter a float: ";
    cin >> floatValue;
    
    // Read double
    cout << "Enter a double: ";
    cin >> doubleValue;
    
    // Display all values
    cout << endl;
    cout << "==== Your Entered Values ====" << endl;
    cout << "Boolean: " << (boolValue ? "true" : "false") << endl;
    cout << "Character: " << charValue << endl;
    cout << "Integer: " << intValue << endl;
    cout << "Short: " << shortValue << endl;
    cout << "Long: " << longValue << endl;
    cout << "Float: " << floatValue << endl;
    cout << "Double: " << doubleValue << endl;
    
    return 0;
}