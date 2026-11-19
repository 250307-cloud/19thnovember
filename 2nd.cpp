#include <iostream>
using namespace std;

int gcd(int a, int b);
int countDivisors(int n, int divisor);
int commonFactors(int a, int b);

int main() {
    int a, b;
    cin >> a >> b;
    cout << commonFactors(a, b) << '\n';
    return 0;
}

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }

    return gcd(b, a % b);
}

int countDivisors(int n, int divisor) {
    if (divisor == 0) {
        return 0;
    }

    if (n % divisor == 0) {
        return 1 + countDivisors(n, divisor - 1);
    }

    return countDivisors(n, divisor - 1);
}

int commonFactors(int a, int b) {
    int greatestCommonDivisor = gcd(a, b);
    return countDivisors(greatestCommonDivisor, greatestCommonDivisor);
}
