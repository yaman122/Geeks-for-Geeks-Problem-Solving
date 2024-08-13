
// The substr() function in C++ is a member function of the std::string class. It is used to extract a substring from a given string.

// Syntax
// cpp
// Copy code
// std::string substr(size_t pos = 0, size_t len = npos) const;
// Parameters
// pos: The starting position of the substring. It is zero-based, so the first character of the string has an index of 0.
// len: The length of the substring to extract. If this parameter is not specified, or if it is std::string::npos, the substring includes all characters from pos to the end of the string.
// Return Value
// The function returns a new string object that contains the substring starting at position pos and spanning len characters.
// Example Usage
// cpp
// Copy code
// #include <iostream>
// #include <string>

// int main() {
//     std::string str = "Hello, World!";

//     // Extracting "World" from the string
//     std::string sub1 = str.substr(7, 5);   7TH INDEX SIE 5 SIZE
//     std::cout << "Substring 1: " << sub1 << std::endl; // Output: "World"

//     // Extracting "Hello" from the string
//     std::string sub2 = str.substr(0, 5);   0 INDEX SIE 5 SIZE
//     std::cout << "Substring 2: " << sub2 << std::endl; // Output: "Hello"

//     // Extracting "World!" from the string
//     std::string sub3 = str.substr(7);    7TH INDEZ SIE PURA 
//     std::cout << "Substring 3: " << sub3 << std::endl; // Output: "World!"

//     return 0;
// }











// CODE FOR GETTING INDEX OF THE SUBSTR
#include <iostream>
#include <string>
using namespace std;

// int main() {
//     string str = "Hello, World!";
    
//     // Trying to find "av" in the string
//         size_t position = str.find("av");

//     if (str.find("Hell")!= string::npos) {
//         std::cout << "'av' found at position: " << str.find("hell")<< std::endl;
//     } else {
//         std::cout << "'av' not found!" << std::endl;
//     }

//     return 0;
// }

// int main() {
//     std::string str = "Hello, World!";
    
//     // Trying to find "av" in the string
//     size_t position = str.find("av");              IMP STEP

//     if (position != std::string::npos) {
//         std::cout << "'av' found at position: " << position << std::endl;
//     } else {
//         std::cout << "'av' not found!" << std::endl;
//     }

//     return 0;
// }
