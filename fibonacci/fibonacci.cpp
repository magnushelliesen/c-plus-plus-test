#include <iostream>
#include <cstdlib>
using namespace std;

// Function that calculates n'th fibonnaci number using recursion
long double fibonnaci(int n){
    // If < 2 is reached, return n
    if (n < 2){
        return n;
    }
    // Otherwise, calculate fibonnaci number recursively
    else{
        return fibonnaci(n-1)+fibonnaci(n-2);
    }
}

int main(int argc, char* argv[]) {
    // Pass command line argument to n;
    int n = atoi(argv[1]);

    // Calculate fibonnaci number of order n;
    long double result = fibonnaci(n);

    // Print result;
    cout << result << "\n";

    return 0;
}
