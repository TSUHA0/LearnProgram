//
// Created by tsuhao on 2022/6/11.
//

#include <iostream>

using namespace std;

const int N = 1010;
int A[N];

int main() {
    int ts;
    cin >> ts;
    while (ts-- > 0) {
        int n, x;
        cin >> n >> x;
        int loc = 0;
        for (int i = 0; i < x; ++i) cin >> A[i];
        for (int i = 2, cnt = 0; i <= n; ++n, cnt = (cnt + 1) % x) {
            loc = (loc + A[cnt]) % i;
        }
        cout << loc;
    }

    return 0;
}