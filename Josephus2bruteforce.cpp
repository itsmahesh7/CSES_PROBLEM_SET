#include <iostream>
#include <set>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    
    set<int> people;
    for (int i = 1; i <= n; i++) {
        people.insert(i);
    }

    int idx = 0;
    auto it = people.begin();

    while (!people.empty()) {
        int remaining = people.size();
        idx = (idx + k - 1) % remaining;

        it = people.begin();
        advance(it, idx);

        cout << *it << " ";
        people.erase(it);
    }

    return 0;
}


//TC: O(n^2)