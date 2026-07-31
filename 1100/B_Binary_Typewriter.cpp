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
  vector<int>v;
  int cnt=1;
  for(int i=1;i<n;i++){
if(s[i]!=s[i-1]){
    v.pb(cnt);
    cnt=1;
}
else cnt++;
  }
  v.pb(cnt);
  //for(auto x:v)cout<<x<<' ';
  //cout<<endl;
  int sz=v.size();
  if(sz==1){
if(s[0]=='0')cout<<n<<endl;
else cout<<n+1<<endl;
  }
  else if(sz==2 || sz==3){
   cout<<n+1<<endl;
  }
 else{
cout<<n+sz-3+(s[0]=='1'? 1:0)<<endl; // 1 reverse reduce 3 block
 }
    }
}