#include <iostream>
using namespace std;

int sumOfEven(int n) {
    int sum = 0;
    for (int i = 2; i <= 2 * n; i += 2) {
        sum = sum + i;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = sumOfEven(n);
    cout << "Sum of first " << n << " even natural numbers is " << sum;
    return 0;
}
