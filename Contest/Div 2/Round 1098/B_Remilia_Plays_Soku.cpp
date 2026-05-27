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
   ll n,a,b,k;
   cin>>n>>a>>b>>k;
   if(n==2 || n==3){
    cout<<1<<endl;
    continue;
   }
   ll distance=abs(a-b);// direct distance
   distance=min(distance,n-distance);// concider circular shortest distance
   if(k==0 && distance==(n-1)){
    cout<<1<<endl;
    continue;
   }
   cout<<distance+k<<endl;
    }
}