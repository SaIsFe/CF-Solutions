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
  ll k;
  cin>>k;
  vector<int>v(n),tmp(n);
  for(int i=0;i<n;i++){
    v[i]=i+1;
  }
  tmp=v;
  reverse(tmp.begin(),tmp.end());
ll val=0;
for(int i=0;i<n;i++){
    val+=abs(v[i]-tmp[i]);
}
//cerr<<val<<endl;
if(k>val || (k%2!=0)){
    cout<<"No"<<endl;
    continue;
}
// second part : construction create
if(k==0){
    cout<<"Yes"<<endl;
    for(auto x:v)cout<<x<<' ';
    cout<<endl;
    continue;
}
int l=1,r=n;
  while(true){
    ll gain=2*(abs(l-r));
    if(k>=gain){
 k=k-gain;
 swap(v[l-1],v[r-1]);
 l++;
 r--;
    }
    else{
        while(true){
            gain=2*(abs(l-r));
            if(gain==k){
swap(v[l-1],v[r-1]);
k=0;
break;
            }
            else r--;
        }
    }
    if(k==0)break;

  }
  cout<<"Yes"<<endl;
  for(auto x:v)cout<<x<<' ';
  cout<<endl;
    }
}