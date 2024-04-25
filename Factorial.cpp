#include <iostream>
unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Error: Factorial is undefined for negative numbers." << endl;
        return 1;
    }

    unsigned long long result = factorial(num);
    cout << "Factorial of " << num << " is: " << result << endl;

    return 0;
}



//resolve cherry-pick

//this is cherry-pick resolve
hello bangladesh

