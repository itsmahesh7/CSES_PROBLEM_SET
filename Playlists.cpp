#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    map<int, int> seen;  // map stores last occurrence index
    int ans = 0, left = 0;

    for (int right = 0; right < n; ++right) {
        if (seen.count(a[right]) && seen[a[right]] >= left) {
            left = seen[a[right]] + 1;
        }
        seen[a[right]] = right;
        ans = max(ans, right - left + 1);
    }

    cout << ans << '\n';
    return 0;
}
