#include <bits/stdc++.h>
#define ll long long
using namespace std;


int main()
{
    // Sample Input
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    auto it=upper_bound(v.begin(),v.end(),5);
    if(it==v.end()){
        cout<<"End"<<endl;
    }
    else{
        cout<<*it<<endl;
    }
}