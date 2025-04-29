#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    // Sample Input
    int n;
    cin>>n;
    multiset<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        auto it=v.upper_bound(a);
        
        if(it!=v.end()){
            v.erase(it);
        }
        v.insert(a);
    }
    cout<<v.size()<<endl;
}

//3 8 2 1 5