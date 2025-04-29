#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

typedef long long ll;
const int maxN = 2e5;
int n;
ll v[maxN],maxSum,curSum;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    cin>>n;
    maxSum = -INT_MIN;
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    for(int i=0;i<n;i++){
        curSum=max(v[i],curSum+v[i]);
        maxSum=max(maxSum,curSum);
    }
    cout<<maxSum<<endl;

}