#include<bits/stdc++.h>
using namespace std;

#define endl "\n"
int main()
{

    int n,target;
    cin>>n>>target;
    map<int,int> mp;
    int flag=1;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
   
        if(mp.find(target-a)!=mp.end()){
            cout<<mp[target-a]+1<<" "<<i+1;
            flag=0;
            break;
        }
        mp[a]=i;
    }
    if(flag){
        cout<<"IMPOSSIBLE"<<endl;
    }
    
    return 0;
}


/*
Input:

4 8
2 7 5 1
Output:

2 4
*/