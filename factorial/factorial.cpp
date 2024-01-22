#include <iostream>
#include <cstdlib>
using namespace std;

// Function that calculates n factorial using recursion
long double factorial(int n){
    // If zero is reached, return 1
    if (n == 0){
        return 1;
    }
    // Otherwise, calculate factorial recursively
    else{
        return n*factorial(n-1);
    }
}

int main(int argc, char* argv[]) {
    // Pass command line argument to n;
    int n = atoi(argv[1]);

    // Calculate factorial of n;
    long double result = factorial(n);

    // Print result;
    cout << result << "\n";

    return 0;
}
