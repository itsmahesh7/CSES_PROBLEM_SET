#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

typedef long long ll;
const int maxN = 2e5 + 5;
int n;
int pos[maxN];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        pos[x] = i; // store the position of number x
    }

    int result = 1; // at least one round
    for (int i = 2; i <= n; i++) {
        if (pos[i] < pos[i - 1]) {
            result++; // need a new round
        }
    }

    cout << result << endl;
    return 0;
}
