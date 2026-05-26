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
  vector<ll>v(n),odd,ev;
  for(int i=0;i<n;i++){
    cin>>v[i];
    if(v[i]%2==0)ev.pb(v[i]);
    else odd.pb(v[i]);
}
for(auto u:odd){
if(u%3==0)cout<<u<<' ';
}
for(auto u:odd){
    if(u%3!=0)cout<<u<<' ';
}
for(auto u:ev){
    if(u%6!=0)cout<<u<<' ';
}
for(auto u:ev){
if(u%6==0)cout<<u<<' ';
}
cout<<endl;
    }
}