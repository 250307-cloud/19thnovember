#include <iostream>
using namespace std;

bool play(int n, int take, bool aliceTurn);
bool canAliceWin(int n);

int main() {
    int n;
    cin >> n;
    cout << (canAliceWin(n) ? "true" : "false") << '\n';
    return 0;
}

bool play(int n, int take, bool aliceTurn) {
    if (n < take) {
        return !aliceTurn;
    }

    return play(n - take, take - 1, !aliceTurn);
}

bool canAliceWin(int n) {
    return play(n, 10, true);
}
