#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main() {
    int n;
    cin >> n;
    vector<int> arr(n),dep(n);
    for(int i=0;i<n;i++){
        cin>>arr[i]>>dep[i];
    }
    sort(arr.begin(),arr.end());
    sort(dep.begin(),dep.end());
    
    int i=0,j=1,result=1,maxi=1;
    while(i<n && j<n){
        if(dep[i]>arr[j]){
            maxi++;
            j++;
        }
        else{
            maxi--;
            i++;
        }
        result=max(maxi,result);
    }
    cout<<result<<endl;
    
}