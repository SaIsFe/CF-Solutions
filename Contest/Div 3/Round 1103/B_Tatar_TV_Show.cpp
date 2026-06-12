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
   int n,k;
   cin>>n>>k;
   string s;
   cin>>s;
   int cnt1=count(s.begin(),s.end(),'1');
   int cnt0=count(s.begin(),s.end(),'0');
   if(cnt0==n){
    yes;
    continue;
   }
   bool f=1;
  for(int i=0;i<k;i++){
    int cnt1=0;
    for(int j=i;j<n;j+=k){
        if(s[j]=='1')cnt1++;
    }
    if(cnt1%2){
        f=0;
        break;
    }
  }
  if(f)yes;
  else no;

    }
}