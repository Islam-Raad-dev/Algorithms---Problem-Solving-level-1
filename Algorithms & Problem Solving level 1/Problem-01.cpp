#include <iostream>   // Include iostream for input/output operations.
#include <string>     // Include string to work with std::string.

using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Function: PrintName
// Purpose: Prints a message displaying the given name.
// Parameter: Name - a string containing the name to be displayed.
void PrintName(string Name)
{
    // Print the name with a message, adding a newline before for formatting.
    cout << "\n Your Name is: " << Name << endl;
}

// Main function: Program entry point.
int main()
{
    // Call the PrintName function, passing "Isalm" as the argument.
    // This will display: "Your Name is: Islam"
    PrintName("Islam");

    return 0;  // Return 0 to indicate successful execution.
}