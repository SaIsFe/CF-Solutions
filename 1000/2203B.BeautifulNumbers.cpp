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
   ll x;
   cin>>x;
   vector<int>v,ans;
   while(x!=0){
    ll rem=x%10;
    v.pb(rem);
    x=x/10;
   }
   reverse(v.begin(),v.end());
   int sum=0;
   for(auto c:v)sum+=c;
   //cout<<endl;
   if(sum<=9){
    cout<<0<<endl;
    continue;
   }
int val=v[0];
v[0]=v[0]-1;
sort(v.rbegin(),v.rend());
int cnt=0;
for(int i=0;i<v.size();i++){
    //if(v[i]==val)sum=sum-v[i]+1;
    sum=sum-v[i];
    cnt++;
    if(sum<=9)break;
}
cout<<cnt<<endl;
    }
}