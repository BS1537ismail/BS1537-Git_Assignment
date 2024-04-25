#include <iostream>
void fibonacci(int n) {
    int first = 0, second = 1, next;

    cout << "Fibonacci Sequence up to " << n << " terms:" << endl;

    for (int i = 0; i < n; ++i) {
        if (i <= 1)
            next = i;
        else {
            next = first + second;
            first = second;
            second = next;
        }
        cout << next << " ";
    }
    cout << endl;
}

int main() {
    int num_terms;
    cout << "Enter the number of terms for Fibonacci sequence: ";
    cin >> num_terms;

    if (num_terms <= 0) {
        cout << "Error: Number of terms must be positive." << endl;
        return 1;
    }

    fibonacci(num_terms);

    return 0;
}
