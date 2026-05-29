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
   vector<ll>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   vector<int>ans;
   for(int i=0;i<n-1;i++){
    int mx=0,mn=0;
    for(int j=i+1;j<n;j++){
if(v[i]>v[j])mx++;
else if(v[i]<v[j])mn++;
    }
    int val=max(mx,mn);
    ans.pb(val);
   }
   ans.pb(0);
   for(auto x:ans)cout<<x<<' ';
   cout<<endl;
    }
}