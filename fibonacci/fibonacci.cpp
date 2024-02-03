#include <iostream>
#include <cstdlib>
using namespace std;

// Function that calculates n'th fibonnaci number using recursion
long double fibonnaci_recursive(int n) {
    // If < 2 is reached, return n
    if (n < 2){
        return n;
    }
    // Otherwise, calculate fibonnaci number recursively
    else {
        return fibonnaci_recursive(n-1)+fibonnaci_recursive(n-2);
    }
}

// Function that calculates n'th fibonnaci number using iteration
long double fibonnaci_iterative(int n) {
    long double n0, n1, n2;
    n1 = 1;
    n2 = 0;
    for (int i = 0; i <= n; i++) {
        if (i < 2){
            n0 = i;
        } else {
            n0 = n1 + n2;
            n2 = n1;
            n1 = n0;
        }
    }
    return n0;
}

int main(int argc, char* argv[]) {
    // Pass command line argument to n;
    int n = atoi(argv[1]);
    int recursion = atoi(argv[2]);

    // Calculate fibonnaci number of order n;
    long double result;
    if (recursion == 1) {
        result = fibonnaci_recursive(n);
    }
    else {
        result = fibonnaci_iterative(n);
    }

    // Print result;
    cout << result << "\n";

    return 0;
}
