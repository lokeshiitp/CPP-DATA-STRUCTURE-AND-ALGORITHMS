// Minimum sum of subarray of size k
#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int main(){
    int n, k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int s=0, ans=INT_MAX;
    for(int i=0; i<k; i++){
        s+=a[i];
    }
    cout<<s<<" ";
    ans=min(ans, s);
    //sliding window
    for(int i=1; i<n-k+1; i++){
        s-=a[i-1];
        s+=a[i+k-1];
        ans=min(ans, s);
        cout<<s<<" ";
    }cout<<endl;

    cout<<ans<<endl;
    return 0;
}