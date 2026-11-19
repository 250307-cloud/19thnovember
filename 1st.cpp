#include <iostream>
using namespace std;

int largestDigit(int n) {
    if (n < 10)
        return n;

    int lastDigit = n % 10;
    int largest = largestDigit(n / 10);

    return max(lastDigit, largest);
}

int main() {
    int n;
    cin >> n;

    cout << largestDigit(n);

    return 0;
}
