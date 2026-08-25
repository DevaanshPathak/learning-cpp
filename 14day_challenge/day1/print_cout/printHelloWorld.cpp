#include <iostream> // C++ has lots of functionality available through libraries.
// iostream gives us tools for input and output.

using namespace std; //Technically, cout belongs to something called the std namespace.
// Technically, cout belongs to something called the std namespace. 
// std::cout << "Hello World"; This is how you would use cout without the using namespace std; line.

int main() { // main() is where your program starts running.
    cout << "Hello World"; // cout is print function of cpp.
    // cout << "My age is " << 18; gives output My age is 18
    //cout << "Hello";
    //cout << "World";
    // This will give output HelloWorld. If you want to print Hello World in separate lines, you can use endl or \n.
    cout << "Hello" << "\n" << "World"; // endl is used to print in new line.
    return 0; // For now, think of it as telling the operating system: "My program finished successfully."
}