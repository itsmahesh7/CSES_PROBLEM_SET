#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;


int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);


    int n,x;
    cin>>x>>n;

    set<int> positions;
    positions.insert(0);
    positions.insert(x);
    multiset<int> lengths;
    lengths.insert(x-0);

    for(int i=0;i<n;i++){
        int lightPos;
        cin>>lightPos;
        positions.insert(lightPos);
        auto itr=positions.find(lightPos);
        int prevValue=*prev(itr);
        int nextValue=*next(itr);

        lengths.erase(lengths.find(nextValue-prevValue));  //It is taking too much time
        // lengths.erase(lengths.lower_bound(nextValue - prevValue));

        lengths.insert(lightPos-prevValue);
        lengths.insert(nextValue-lightPos);

        cout<<*lengths.rbegin()<<" ";

    }
}