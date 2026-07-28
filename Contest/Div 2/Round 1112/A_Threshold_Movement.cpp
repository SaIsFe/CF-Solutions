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
  if(n%2!=0){
    no;
    continue;
  }
  vector<ll>odd,ev;
  for(int i=0;i<n;i++){
    if(i%2==0){
        odd.pb(v[i]);
    }
    else ev.pb(v[i]);
  }
  ll oddmx=*max_element(odd.begin(),odd.end());
  ll oddmin=*min_element(odd.begin(),odd.end());
    ll evmx=*max_element(ev.begin(),ev.end());
  ll evmin=*min_element(ev.begin(),ev.end());
  ll dif=oddmin-evmx;
  if(dif>1)yes;
  else no;
    }
}