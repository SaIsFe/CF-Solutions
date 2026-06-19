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
   vector<ll>a(n),b(n);
   for(int i=0;i<n;i++)cin>>a[i];
   for(int i=0;i<n;i++)cin>>b[i];
vector<ll>swp;
vector<bool>used(n,0);
bool f=1;
for(int i=0;i<n;i++){
    int indx,val=-1;
    for(int j=0;j<n;j++){
        if(!used[j] && b[j]>=a[i]){
            val=j;
            break;
        }
    }
    if(val==-1){
        f=0;
        break;
    }
     swp.pb(val);
            used[val]=1;
}
if(!f){
    cout<<-1<<endl;
    continue;
}
ll sum=0;
for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        if(swp[i]>swp[j])sum++;
    }
}
cout<<sum<<endl;
    }
}