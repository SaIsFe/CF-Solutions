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
  int a,b,c;
  cin>>a>>b>>c;
  vector<int>v;
  v.pb(a);
  v.pb(b);
  v.pb(c);
  sort(v.begin(),v.end());
  int ans=min(v[1]-v[0],v[2]-v[1]);
  cout<<ans<<endl;
  
    }
}