#include <iostream>
using namespace std;

// Function prototype
int add(int a, int b);

int main() {
    int result = add(5, 3); // Calling the function add
    cout << "Result: " << result <<endl;
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}


/*Function Prototyping:
Function prototyping is a declaration 
that specifies the function's name, return type, and parameter types
without providing the actual implementation. 
It informs the compiler about the function's signature before it is used in the program.
Prototyping is useful when you want to define a function later in the code 
but need to use it before its actual definition.

Function Definition:
Function definition provides the actual implementation of a function.
It defines what the function does, how it operates, and how it computes its result.

Function Calling:
Function calling is the process of invoking a function in your code.
It uses the function's name along with arguments (if any) to pass data to the function
and receive the return value.