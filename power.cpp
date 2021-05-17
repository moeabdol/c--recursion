#include <iostream>

using namespace std;

int pow(int m, int n) {
    if (n == 0)
        return 1;
    return pow(m, n - 1) * m;
}

int main() {
    int x, y;
    x = 2;
    y = 9;
    cout << pow(x, y) << endl;

    return 0;
}
