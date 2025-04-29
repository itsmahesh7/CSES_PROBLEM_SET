#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

#define ll long long
const int maxN=2e5;

int n,v[maxN];

int main()
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    sort(v,v+n);
    ll midValue=v[n/2];

    ll answer=0;

    for(int i=0;i<n;i++){
        answer+=abs(v[i]-midValue);
    }

    cout<<answer<<endl;

}

/*
#define int long long
#define pb push_back
#define F first
#define S second
#define ll long long
#define ull unsigned long long
#define ld long double
#define pii pair<int,int>
#define vi vector<int>
#define vii vector<pii>
#define vc vector
#define nl cout<<'\n'
#define E cerr<<'\n'
#define all(x) x.begin(),x.end()
#define rep(i,a,b) for (int i=a; i<b; ++i)
#define rev(i,a,b) for (int i=a; i>b; --i)
#define IOS ios_base::sync_with_stdio(false)
#define setpr(x) cout<<setprecision(x)<<fixed
#define sz size()
#define seea(a,x,y) for(int i=x;i<y;i++){cin>>a[i];}
#define seev(v,n) for(int i=0;i<n;i++){int x; cin>>x; v.push_back(x);}
#define sees(s,n) for(int i=0;i<n;i++){int x; cin>>x; s.insert(x);}
#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>
//----------CONSTANTS----------
const ll inf = INT_MAX;
const ld ep = 0.0000001;
const ld pi = acos(-1.0);
const ll md = 1000000007;
//---
*/