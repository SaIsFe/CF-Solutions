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
  n--;
  vector<ll>v(n);
  for(int i=0;i<n;i++){
    cin>>v[i];
  }
  vector<ll>ans;
  if(v[0]<=v[1]){
    ans.pb(0);
  }
  else{
    ans.pb(v[0]);
  }
  ll cur,next;
  for(int i=0;i<n-1;i++){
    cur=v[i];
    next=v[i+1];
    if(cur>next)ans.pb(next);
    else ans.pb(v[i]);
  }
  ans.pb(v[n-1]);
  for(auto x:ans)cout<<x<<' ';
  cout<<endl;
    }
}