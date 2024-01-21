#include <iostream>
using namespace std;

long long factorial(int n){
    // If zero is reached, return 1
    if (n == 0){
        return 1;
    }
    // Otherwise, calculate factorial recursively
    else{
        return n*factorial(n-1);
    }
}

int main() {
    // Take input;
    int n;
    cout << "Choose a number:\n";
    cin >> n;

    // Calculate factorial;
    long long n_factorial = factorial(n);

    // Return factorial;
    cout << n << " factorial is:\n" << n_factorial << "\n";

    return 0;
}
