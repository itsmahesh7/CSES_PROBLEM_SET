#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<pair<int, int>> ranges(n);
    for (int i = 0; i < n; ++i) {
        cin >> ranges[i].first >> ranges[i].second;
    }

    vector<int> contains(n, 0), contained(n, 0);

    for (int i = 0; i < n; ++i) {
        int a1 = ranges[i].first, b1 = ranges[i].second;
        for (int j = 0; j < n; ++j) {
            if (i == j) continue;
            int a2 = ranges[j].first, b2 = ranges[j].second;
            if (a1 <= a2 && b2 <= b1) contains[i] = 1;
            if (a2 <= a1 && b1 <= b2) contained[i] = 1;
        }
    }

    for (int x : contains) cout << x << " ";
    cout << endl;
    for (int x : contained) cout << x << " ";
    cout << endl;

    return 0;
}


//if n=1e5 then TC: O(n^2) =1e10



/*
Optimal:abort::::
==============

#include <bits/stdc++.h>
using namespace std;

struct Range {
    int l, r, idx;
    bool operator<(const Range& other) const {
        if (l == other.l) return r > other.r;
        return l < other.l;
    }
};

int main() {
    int n;
    cin >> n;
    vector<Range> ranges(n);
    vector<int> contains(n, 0), contained(n, 0);

    for (int i = 0; i < n; ++i) {
        cin >> ranges[i].l >> ranges[i].r;
        ranges[i].idx = i;
    }

    // Sort ranges
    sort(ranges.begin(), ranges.end());

    // Check for containment
    int max_right = -1;
    for (int i = 0; i < n; ++i) {
        if (ranges[i].r <= max_right) {
            contained[ranges[i].idx] = 1;
        }
        max_right = max(max_right, ranges[i].r);
    }

    // Check if a range contains another
    int min_right = INT_MAX;
    for (int i = n - 1; i >= 0; --i) {
        if (ranges[i].r >= min_right) {
            contains[ranges[i].idx] = 1;
        }
        min_right = min(min_right, ranges[i].r);
    }

    // Output results
    for (int i = 0; i < n; ++i) {
        cout << contains[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; ++i) {
        cout << contained[i] << " ";
    }
    cout << endl;

    return 0;
}


*/