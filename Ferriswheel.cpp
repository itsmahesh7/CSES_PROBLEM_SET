#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int n,x;
    cin>>n>>x;
    vector<long long int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    long long result=0;
    int left=0;
    for(int right=n-1;right>=left;right--){
        if(v[right]+v[left]<=x){
            left++; 
        }
        result++;
    }
    cout<<result<<endl;
    
}