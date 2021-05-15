#include <iostream>

using namespace std;

// A function is said to be tree recursive
// if it calls it self more than once
void fun(int n) {
    if (n > 0) {
        cout << n << " ";
        fun(n - 1);         // first call
        fun(n - 1);         // second call
    }
}

int main() {
    fun(3);

    return 0;
}
