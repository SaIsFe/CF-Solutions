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
  string s;
  cin>>s;
  vector<pair<int,char>>v;
  int cnt=1;
  for(int i=1;i<n;i++){
    if(s[i]==s[i-1])cnt++;
    else{
        v.pb({cnt,s[i-1]});
        cnt=1;
    }
  }
  v.pb({cnt,s[n-1]});
  int sz=v.size();
  int ans=sz;
  for(int i=1;i<v.size()-1;i++){
    if(v[i].ff==1 && v[i-1].ss==v[i+1].ss){
        ans=min(ans,sz-2);
        break;
    }
  }
  for(int i=1;i<v.size()-1;i++){
    if(v[i].ff==1 && v[i-1].ss!=v[i+1].ss){
        ans=min(ans,sz-1);
        break;
    }
  }
  cout<<ans<<endl;
    }
}