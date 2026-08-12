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
  vector<int>v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  vector<pair<int,int>>ans;
  int cnt=1;
  for(int i=1;i<n;i++){
    if(v[i]!=v[i-1]){
        ans.pb({v[i-1],cnt});
        cnt=1;
    }
    else cnt++;
  }
  ans.pb({v[n-1],cnt});
  //for(auto x:ans)cout<<x<<" ";
  //cout<<endl;
  int sz=ans.size();
  //case-1: answer=block size+2, when two adjacent value>=2
  bool f=0;
  for(int i=1;i<ans.size();i++){
    if(ans[i].ss>=2 && ans[i-1].ss>=2){
        f=1;
        break;
    }
  }
  if(f==1){
    cout<<ans.size()+2<<endl;
    continue;
  }
// case-2: answer=block size+1, when at least one element is >=2 and i!=i+2 or i!=i-2
bool one=0;
for(int i=0;i<sz;i++){
  if(ans[i].ss<2)continue;
  // right side check
  if(i<sz-1){
    if(i==sz-2 || ans[i].ff!=ans[i+2].ff){
      one=1;
      break;
    }
  }
  // left side check
  if(i>0){
    if( i==1 || ans[i].ff!=ans[i-2].ff){
      one=1;
      break;
    }
  }
}
if(one)cout<<sz+1<<endl;
else cout<<sz<<endl;
    }
}