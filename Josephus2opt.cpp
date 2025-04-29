#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main() {
    int n, k;
    cin >> n >> k;

    ordered_set<int> people;
    for (int i = 1; i <= n; ++i) {
        people.insert(i);
    }

    int idx = 0;
    while (!people.empty()) {
        idx = (idx + k) % people.size();
        auto it = people.find_by_order(idx);  //O(log n)
        cout << *it << " ";
        people.erase(it);  //erase() → O(log n)
    }

    return 0;
}
