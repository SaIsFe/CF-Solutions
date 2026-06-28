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
  ll n,k;
  cin>>n>>k;
  ll sum=0;
  ll cnt=0;
  for(int i=0;i<32;i++){
    ll cost=1<<i;
    ll times=k;
    while(times>0){
        sum+=cost;
        if(sum>n)break;
        cnt++;
        times--;
    }
    if(sum>=n)break;
  }
  cout<<cnt<<endl;
    }
}