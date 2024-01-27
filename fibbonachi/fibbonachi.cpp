#include <iostream>
#include <cstdlib>
using namespace std;

// Function that calculates n'th fibbonachi number using recursion
long double fibbonachi(int n){
    // If < 2 is reached, return n
    if (n < 2){
        return n;
    }
    // Otherwise, calculate fibbonachi number recursively
    else{
        return fibbonachi(n-1)+fibbonachi(n-2);
    }
}

int main(int argc, char* argv[]) {
    // Pass command line argument to n;
    int n = atoi(argv[1]);

    // Calculate fibbonachi number of order n;
    long double result = fibbonachi(n);

    // Print result;
    cout << result << "\n";

    return 0;
}
