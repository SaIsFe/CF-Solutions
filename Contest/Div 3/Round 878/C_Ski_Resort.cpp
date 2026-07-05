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
  ll n,k,q;
  cin>>n>>k>>q;
  vector<ll>v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  vector<ll>block;
int idx=0;
for(int i=0;i<n;i++){
    if(v[i]<=q){
        idx=i;
        break;
    }
}
ll cnt=0;
for(int i=idx;i<n;i++){
    if(v[i]>q){
        block.pb(cnt);
        cnt=0;

    }
    else cnt++;
}
block.pb(cnt);
ll ans=0;
for(int i=0;i<block.size();i++){
    if(block[i]>=k){
    ll x=block[i]-k+1;
    ans+=x*(x+1)/2;
}
}
cout<<ans<<endl;
    }
}