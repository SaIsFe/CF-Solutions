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
  int n,tab,seat;
  cin>>n>>tab>>seat;
  string s;
  cin>>s;
  ll ans=0;
  ll ep_s=0; // empty seat
  ll ambi=0; // count of Ambiverts in prefix index
for(int i=0;i<n;i++){
  if(s[i]=='E'){
    if(ep_s!=0){
ep_s--;
ans++;
    }
    else if( tab>0 && ambi>0){
tab--;
ambi--;
ans++;
ep_s+=seat-1;
    }
  }
  else if(s[i]=='I'){
    if(tab>0){
      tab--;
      ans++;
      ep_s+=seat-1;
    }
  }
  else{
    if(ep_s==0){
      if(tab>0){
        tab--;
        ans++;
        ep_s+=seat-1;
      }
    }
    else{
      ambi++;
      ep_s--;
      ans++;
    }
  }
}
cout<<ans<<endl;
    }
}