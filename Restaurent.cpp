#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Vector of pairs: (time, +1 or -1)
    vector<pair<int, int>> events;

    for (int i = 0; i < n; ++i) {
        int arrival, departure;
        cin >> arrival >> departure;

        events.push_back({arrival, 1});   // Customer arrives
        events.push_back({departure, -1}); // Customer leaves
    }

    // Sort by time; if same time, process departures first
    sort(events.begin(), events.end());

    int current = 0, max_customers = 0;

    //From c++17 it is introduced...
    for (auto [time, type] : events) {
        current += type;
        max_customers = max(max_customers, current);
    }

    //Before c++17
    // for (const pair<int, int> &event : events) {
    //     current += event.second;
    //     max_customers = max(max_customers, current);
    // }

    cout << max_customers << endl;

    return 0;
}
