#include <iostream>

using namespace std;

int fun(int n) {
    static int x = 0;   // Note that every time fun is called it uses the same copy of x. Exactly as if it were a global variable

    if (n > 0) {
        x++;
        return fun(n - 1) + x;
    }

    return 0;
}

int main() {
    int a = 5;
    cout << fun(a);

    return 0;
}
