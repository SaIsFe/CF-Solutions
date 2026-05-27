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
   ll n,a,b;
   cin>>n>>a>>b;
   if(n==1){
    cout<<min(a,b)<<endl;
    continue;
   }
   if(n==2){
    cout<<min(n*a,b)<<endl;
    continue;
   }
   if(3*a>b){
    ll p=n/3;
    ll rem=n%3;
    if(rem>0)cout<<p*b+min(rem*a,b)<<endl;
    else cout<<p*b<<endl;
   } 
   else cout<<n*a<<endl;
    }
}