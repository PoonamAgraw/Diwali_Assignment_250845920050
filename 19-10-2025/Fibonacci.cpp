#include <iostream>
using namespace std;
void fibonacci(int n) {
    int a = 0, b = 1, nx;
    cout << "Fibonacci series up to " << n << " terms: ";
    for (int i = 0; i < n; i++) {
        cout <<a<<" ";
        nx = a + b;
        a = b;
        b = nx;
    }
}

int main() {
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    fibonacci(n);
    return 0;
}
