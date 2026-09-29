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
  ll x,y,k;
  cin>>x>>y>>k;
  ll cost=0;
  ll limit=k;
  for(ll i=0;i<k;i++){
    if((x+i)>(y-x)){
limit=i;
break;
    }
  }
  //cerr<<limit<<endl;
  for(ll i=0;i<limit;i++){
    cost+=(y+i)%(x+i);
  }
  cost+=(k-limit)*(y-x);
  cout<<cost<<endl;
    }
}