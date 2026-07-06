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
  int k;
  cin>>k;
  vector<ll>v(k);
  for(int i=0;i<k;i++)cin>>v[i];
  int cnt2=count(v.begin(),v.end(),2);
  bool f=0;
for(int i=0;i<k;i++){
    if(v[i]>=3){
        f=1;
        break;
    }

}
if(f){
    yes;
    continue;
}
if(cnt2>=2)yes;
else no;
    }
}