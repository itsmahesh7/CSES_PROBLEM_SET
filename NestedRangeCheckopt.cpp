#include <bits/stdc++.h>
using namespace std;

struct Range {
    int left, right, index;
    bool operator<(const Range& other) const {
        if (left == other.left)
            return right > other.right; // Descending order for right endpoint
        return left < other.left; // Ascending order for left endpoint
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<Range> ranges(n);
    vector<int> contains(n, 0), contained(n, 0);

    for (int i = 0; i < n; ++i) {
        cin >> ranges[i].left >> ranges[i].right;
        ranges[i].index = i;
    }

    // Sorting ranges
    sort(ranges.begin(), ranges.end());

    // Checking for containment
    int minRight = INT_MAX;
    for (int i = n - 1; i >= 0; --i) {
        if (ranges[i].right >= minRight)
            contains[ranges[i].index] = 1;
        minRight = min(minRight, ranges[i].right);
    }

    // Checking if contained by another range
    int maxRight = INT_MIN;
    for (int i = 0; i < n; ++i) {
        if (ranges[i].right <= maxRight)
            contained[ranges[i].index] = 1;
        maxRight = max(maxRight, ranges[i].right);
    }

    // Output results
    for (int i = 0; i < n; ++i)
        cout << contains[i] << " ";
    cout << "\n";
    for (int i = 0; i < n; ++i)
        cout << contained[i] << " ";
    cout << "\n";

    return 0;
}
