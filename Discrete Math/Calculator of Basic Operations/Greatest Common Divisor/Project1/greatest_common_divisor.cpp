#include <iostream>

using namespace std;

// Function to find the greatest common divisor using the Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {

    cout << "------------\nGreatest Common Divisor Calculator:\n------------\n\nEnter the two numbers separated by space:\n";
    cout << "At the end, press enter\n";
    int num1, num2;
    cout << "\nEnter two integers: ";
    cin >> num1 >> num2;

    int result = gcd(num1, num2);
    cout << "The greatest common divisor of " << num1 << " and " << num2 << " is: " << result << endl;

    system("pause");
    return 0;
}
