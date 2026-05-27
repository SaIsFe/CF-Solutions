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
ll one=0;
ll sum=0;
ll non_one=0;
for(int i=0;i<n;i++){
    if(v[i]==1)one++;
    else{
        sum+=v[i];
        non_one++;
    }
}
if(non_one==0){
    cout<<0<<endl;
    continue;
}
ll extra=0;
if(non_one==1){
    for(int i=0;i<n;i++){
        if(v[i]>1)extra=v[i]/2;
    }
}
    else{
        for(int i=0;i<n;i++){
            if(v[i]>1)extra+=(v[i]/2-1);
        }
    }
ll max_card=sum+min(one,extra);
if(max_card<3)cout<<0<<endl;
else cout<<max_card<<endl;
    }
}