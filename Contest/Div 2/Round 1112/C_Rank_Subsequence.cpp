#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define f(i,n)for(int i=0;i<n;i++)
#define iv(v,n) \
vector<long long>v(n);\
f(i,n)cin>>v[i];
#define pb push_back
#define mxe(v) *max_element(v.begin(),v.end())
#define mne(v) *min_element(v.begin(),v.end())
#define yes cout<<"YES\n"
#define no cout<<"NO\n"
#define ll long long
#define ff first
#define ss second
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
  int n;
  cin>>n;
  vector<pair<int,int>>lr(n+1),uw(n+1);
  for(int i=1;i<=n;i++){
    cin>>lr[i].ff>>lr[i].ss>>uw[i].ff>>uw[i].ss;
  }
  int ans=0;
  for(int m=n;m>0;m--){
    int j=1;
    for(int i=1;i<=n && j<=m;i++){
        int leftrank=j;
        int rightrank=m-j+1;
        if((leftrank<lr[i].ff || leftrank>lr[i].ss) && (rightrank<uw[i].ff || rightrank>uw[i].ss))j++;
    }
if(j==m+1){
    ans=m;
    break;
}
  }
  cout<<ans<<endl;
    }
}