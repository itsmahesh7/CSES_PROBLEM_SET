#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    
    multiset<int> tickets;
    for (int i = 0; i < n; ++i) {
        int price;
        cin >> price;
        tickets.insert(price);
    }

    for (int i = 0; i < m; ++i) {
        int max_price;
        cin >> max_price;

        auto it = tickets.upper_bound(max_price);
        if (it == tickets.begin()) {
            cout << -1 << '\n';
        } else {
            --it;
            cout << *it << '\n';
            tickets.erase(it);
        }
    }

    return 0;
}




🔍 Problem Summary:
You are given n ticket prices and m customers.

Each customer has a maximum price they're willing to pay.

Each ticket can only be sold once.

For each customer, output the price of the ticket they get, or -1 if no such ticket is available.

✅ Optimal Strategy:
We need a data structure that:

Can find the largest ticket ≤ max_price (for each customer).

Can remove that ticket from the set.

A multiset in C++ fits perfectly:

Stores duplicates.

Allows fast insertions and deletions.

Supports upper_bound to find the first element greater than a value.

We'll use upper_bound and move one step back to get the largest ticket ≤ max_price.

💡 C++ Code (Optimal with multiset):
cpp
Copy
Edit
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    
    multiset<int> tickets;
    for (int i = 0; i < n; ++i) {
        int price;
        cin >> price;
        tickets.insert(price);
    }

    for (int i = 0; i < m; ++i) {
        int max_price;
        cin >> max_price;

        auto it = tickets.upper_bound(max_price);
        if (it == tickets.begin()) {
            cout << -1 << '\n';
        } else {
            --it;
            cout << *it << '\n';
            tickets.erase(it);
        }
    }

    return 0;
}

/*
🧠 Time Complexity:
Reading input: O(n + m)

Each upper_bound, erase: O(log n)

Total complexity: O((n + m) * log n) — efficient for n, m ≤ 2 * 10^5

Let me know if you want the same solution with explanations or in another language like Python!



You said:
one what is array because one guy in solution declare as

#define ar array

ChatGPT said:
Great question! Let's break it down step by step.

👀 What does this mean?
cpp
Copy
Edit
#define ar array
This is a macro definition in C++.

It tells the preprocessor:

"Every time you see ar, replace it with array before compiling."

So for example:

cpp
Copy
Edit
ar<int, 2> my_pair = {1, 2};
gets treated as:

cpp
Copy
Edit
array<int, 2> my_pair = {1, 2};
🧱 So, what is array in C++?
array is a container from the Standard Template Library (STL) — specifically, from <array>.

It’s a fixed-size array-like structure that behaves more like a modern STL container, unlike raw C-style arrays.

You must include:

cpp
Copy
Edit
#include <array>
💡 Example usage:
cpp
Copy
Edit
#include <bits/stdc++.h>
using namespace std;

#define ar array

int main() {
    ar<int, 3> a = {1, 2, 3};
    for (int i = 0; i < 3; ++i) {
        cout << a[i] << ' ';
    }
    return 0;
}
Output:

Copy
Edit
1 2 3
🤔 Why do people use #define ar array?
Mainly for convenience and to shorten typing, especially in competitive programming where speed matters. Instead of typing array<int, 2>, they can just write ar<int, 2>.

Let me know if you want to see when you'd use array vs vector — that's another helpful distinction!

*/