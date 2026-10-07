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
  vector<ll>v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  map<ll,ll>mp;
  int sz=n-4;
  vector<ll>tmp(sz);
  for(int i=0;i<n-4;i++){
    ll sum=v[i]+v[i+2]-v[i+4];
    mp[sum]++;
    tmp[i]=sum;
  }
  ll ans=0;
  for(auto u:mp){
    if(u.ss>1)ans+=(u.ss*(u.ss-1))/2;
  }
  for(int i=0;i<sz;i++){
    if(i<sz-2 && tmp[i]==tmp[i+2])ans--;
     if(i<sz-4 && tmp[i]==tmp[i+4])ans--;
  }
  cout<<ans<<endl;
    }
}