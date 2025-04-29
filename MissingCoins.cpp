#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

typedef long long ll;
const int maxN = 2e5;
int n;
ll v[maxN];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n;
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    sort(v,v+n);

    ll result=1;
    for(int i=0;i<n && v[i]<=result;i++){
        result+=v[i];
    }
    cout<<result<<endl;

}