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
   vector<int>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   int cnt0=0;
   cnt0=count(v.begin(),v.end(),0);
   if(cnt0==0){
    cout<<1<<endl;
    cout<<1<<' '<<n<<endl;
   }
   else if(cnt0==n){
    cout<<3<<endl;
    cout<<1<<' '<<n-2<<endl;
    cout<<2<<' '<<3<<endl;
    cout<<1<<' '<<2<<endl;
}
else{
    vector<int>ans;
    vector<pair<int,int>>op;
    for(int i=0;i<n;i++){
        if(v[i]==0){
            if(i==n-1){
op.pb({ans.size(),ans.size()+1});
            }
            else{
op.pb({ans.size()+1,ans.size()+2});
ans.pb(9);
i++;
     }
        }
        else{
            ans.pb(9);
        }
    }
op.pb({1,ans.size()});
cout<<op.size()<<endl;
for(auto x:op){
    cout<<x.ff<<' '<<x.ss<<endl;
}
}
   }
}