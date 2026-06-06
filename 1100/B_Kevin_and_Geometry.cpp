#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define f(i,n)for(int i=0;i<n;i++)
#define iv(v,n) \
vector<long long>v(n);\
f(i,n)cin>>v[i];
#define pb push_back
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
   map<ll,int>fre;
   for(int i=0;i<n;i++){
    cin>>v[i];
fre[v[i]]++;
   }
   // square check
   bool f=0;
  for(int i=0;i<n;i++){
    if(fre[v[i]]>=4){
        cout<<v[i]<<' '<<v[i]<<' '<<v[i]<<' '<<v[i]<<endl;
        f=1;
        break;
    }
  }
  if(f==1)continue;
  //rectangle check
  vector<ll>ans;
  for(auto x:fre){
    if(x.ss>=2)ans.pb(x.ff);
  }
  if(ans.size()>=2){
    cout<<ans[0]<<' '<<ans[0]<<' '<<ans[1]<<' '<<ans[1]<<endl;
    continue;
  }
// trapezoid check
// condition: 2a>|a-b| 
if(ans.size()==1){
sort(v.begin(),v.end());
for(int i=0;i<2;i++){
    auto it=find(v.begin(),v.end(),ans[0]);
    if(it!=v.end())v.erase(it);
}
for(int i=1;i<v.size();i++){
if(v[i]-v[i-1]<2*ans[0]){
    cout<<ans[0]<<' '<<ans[0]<<' '<<v[i-1]<<' '<<v[i]<<endl;
    f=1;
    break;
}
}
if(f==0)cout<<-1<<endl;
}
else cout<<-1<<endl;
   }
}