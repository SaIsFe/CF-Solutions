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
  vector<ll>v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  sort(v.begin(),v.end());
  v.erase(unique(v.begin(),v.end()),v.end());
  if(v.size()==1 || v[0]>1){
    cout<<"Alice"<<endl;
    continue;
  }
 ll mex=1;
 for(auto x:v){
  if(mex==x)mex++;
  else break;
 }
 ll mx=v.back();
 if(mex>mx)mex=mx;
 if(mex%2==1)cout<<"Alice"<<endl;
 else cout<<"Bob"<<endl;
    }
}