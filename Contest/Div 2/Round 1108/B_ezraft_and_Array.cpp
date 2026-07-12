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
  if(n==1){
    cout<<1<<endl;
  }
  else if(n==2)cout<<-1<<endl;
  else{
     vector<ll>ans;
     ans.pb(1);
     ans.pb(2);
  ll cur=3;
  for(int i=0;i<n-2;i++){
    ans.pb(cur);
    cur=cur*2;
}
for(auto x:ans)cout<<x<<' ';
cout<<endl;
  }
    }
}