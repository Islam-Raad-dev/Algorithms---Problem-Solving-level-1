#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to use std::string and to_string().

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Function: ReadNumber
// Purpose: Prompts the user to enter an integer and reads it from input.
// Returns: The entered integer value.
int ReadNumber()
{
    int Num;  // Variable to store the user's input.

    // Prompt the user to enter a number.
    cout << "Please enter a number? " << endl;

    cin >> Num;  // Read the number entered by the user.

    return Num;  // Return the entered number.
}

// Function: CalculateHalfNumber
// Purpose: Calculates and returns half of the given number.
// Parameter: Num - the integer number to be divided by 2.
// Returns: A float value representing half of the given number.
float CalculateHalfNumber(int Num)
{
    return (float) Num / 2;  // Perform division and return the result as a float.
}

// Function: PrintResults
// Purpose: Constructs and displays a message showing half of the given number.
// Parameter: Num - the original integer number.
void PrintResults(int Num)
{
    // Construct the output message showing the original number and its half value.
    string Result = "Half of " + to_string(Num) + " is " + to_string(CalculateHalfNumber(Num));

    // Print the result message.
    cout << endl << Result << endl;
}

// Main function: Program entry point.
int main()
{
    // Read a number from the user, calculate its half, and print the result.
    PrintResults(ReadNumber());

    return 0;  // Return 0 to indicate successful execution.
}