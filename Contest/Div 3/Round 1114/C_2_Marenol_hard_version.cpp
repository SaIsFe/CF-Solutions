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
  string a,b;
  cin>>a>>b;
  vector<int>odda,oddb,eva,evb;
  for(int i=0;i<n;i++){
    if(i%2==0 && a[i]=='1')odda.pb(i+1);
    else if( i%2!=0 && a[i]=='1')eva.pb(i+1);
  }
   for(int i=0;i<n;i++){
    if(i%2==0 && b[i]=='1')oddb.pb(i+1);
    else if( i%2!=0 && b[i]=='1')evb.pb(i+1);
  }
  if(odda.size()!=oddb.size() || eva.size()!=evb.size()){
    cout<<-1<<endl;
    continue;
  }
ll op=0;
for(int i=0;i<odda.size();i++){
    ll diff=abs(odda[i]-oddb[i]);
    op+=(diff/2);
}
for(int i=0;i<eva.size();i++){
    ll diff=abs(eva[i]-evb[i]);
    op+=(diff/2);
}
cout<<op<<endl;
    }
}