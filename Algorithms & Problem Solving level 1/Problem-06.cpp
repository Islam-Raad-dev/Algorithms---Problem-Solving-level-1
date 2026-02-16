#include <iostream>   // Include iostream for input/output operations.
using namespace std;  // Use the standard namespace to avoid prefixing std:: to standard functions.

// Struct: stInfo
// Purpose: Stores a person's first and last name.
struct stInfo
{
    string FirstName;  // Stores the person's first name.
    string LastName;   // Stores the person's last name.
};

// Function: ReadInfo
// Purpose: Prompts the user to enter their first and last name and reads them from input.
// Returns: A struct containing the entered first and last name.
stInfo ReadInfo()
{
    stInfo Info;  // Declare a variable of type stInfo to store user input.

    // Prompt the user to enter their first name and store it in the struct.
    cout << "Please Enter Your First Name?" << endl;
    cin >> Info.FirstName;

    // Prompt the user to enter their last name and store it in the struct.
    cout << "Please Enter Your Last Name?" << endl;
    cin >> Info.LastName;

    return Info;  // Return the filled struct.
}

// Function: GetFullName
// Purpose: Constructs a full name from the first and last name.
// Parameter: Info - struct containing the first and last name.
// Parameter: Reversed - boolean value indicating whether to reverse the order of the names.
// Returns: A string containing the full name in the specified order.
string GetFullName(stInfo Info, bool Reversed)
{
    string FullName = "";  // Initialize an empty string for the full name.

    // If Reversed is true, store the full name as "LastName FirstName".
    if (Reversed)
        FullName = Info.LastName + " " + Info.FirstName;
    else  // Otherwise, store it as "FirstName LastName".
        FullName = Info.FirstName + " " + Info.LastName;

    return FullName;  // Return the constructed full name.
}

// Function: PrintFullName
// Purpose: Displays the full name provided as a parameter.
// Parameter: FullName - a string containing the person's full name.
void PrintFullName(string FullName)
{
    // Print the full name with a message, adding a newline for formatting.
    cout << "\n Your full name is: " << FullName << endl;
}

// Main function: Program entry point.
int main()
{
    // Read user information, construct the full name in reversed order, and print it.
    PrintFullName(GetFullName(ReadInfo(), true));

    return 0;  // Return 0 to indicate successful execution.
}