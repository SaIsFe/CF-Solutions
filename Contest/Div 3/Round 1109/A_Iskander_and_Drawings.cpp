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
  int mx=0;
  int cnt=0;
  for(int i=0;i<n;i++){
    if(s[i]=='#'){
        cnt++;
    }
    else {
         mx=max(mx,cnt);
        cnt=0;
    }
  }
  mx=max(mx,cnt);
  cout<<(mx+1)/2<<endl;
    }
}