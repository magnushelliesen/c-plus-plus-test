#include <iostream>
using namespace std;

void add(int a, int b){
    cout << "The sum is:\n" << a+b << "\n";
}

int main() {
    // Take inputs;
    int a, b;
    cout << "Choose a number:\n";
    cin >> a;
    cout << "Choose another number:\n";
    cin >> b;

    // Return sum;
    add(a, b);

    return 0;
}
