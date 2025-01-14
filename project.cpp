#include <iostream>
using namespace std;
int main() {
    int number, range;
// Get input from the user
    cout << "Enter the number for which you want the multiplication table: ";
    cin >> number;
    cout << "Enter the range for the multiplication table: ";
    cin >> range;
 // Generate the multiplication table
    cout << "\nMultiplication Table of " << number << ":\n";
    for (int i = 1; i <= range; ++i) {
        cout << number << " x " << i << " = " << number * i << endl;
    }

    return 0;
}

