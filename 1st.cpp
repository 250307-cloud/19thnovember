#include <iostream>
using namespace std;

int largestDigit(int n);

int main() {
    int n;
    cin >> n;
    cout << largestDigit(n) << '\n';
    return 0;
}

int largestDigit(int n) {
    if (n < 10) {
        return n;
    }

    int lastDigit = n % 10;
    int largestRest = largestDigit(n / 10);

    if (lastDigit > largestRest) {
        return lastDigit;
    }

    return largestRest;
}
