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
  ll n,k,m;
  cin>>n>>k>>m;
  vector<ll>ans;
  if(k==1){
    yes;
    for(ll i=0;i<n;i++)ans.pb(m);
      for(auto x:ans)cout<<x<<" ";
    cout<<endl;
  }
  else{
    if(k>m)no;
    else{
        yes;
        for(ll i=1;i<=n;i++){
            if(i%k==0)ans.pb(m-(k-1));
            else ans.pb(1);
        }
    }
    for(auto x:ans)cout<<x<<" ";
    cout<<endl;
  }
    }
}
