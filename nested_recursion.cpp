#include <iostream>

using namespace std;

int fun(int n) {
    if (n > 100)
        return n - 10;
    return fun(fun(n + 11));    // This is a recursive nested call
}

int main() {
    int r = fun(30);
    cout << r << endl;

    return 0;
}
