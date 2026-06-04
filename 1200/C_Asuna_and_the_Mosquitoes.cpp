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
   sort(v.begin(),v.end());
   int od=0,ev=0;// odd and even count
    ll od_sum=0;
   ll ev_sum=0;
   for(int i=0;i<n;i++){
    if(v[i]%2==0){
        ev++;
        ev_sum+=v[i];
    }
    else{
od++;
od_sum+=v[i];
}
   }
   if(od==n || ev==n){
    cout<<v[n-1]<<endl;
    continue;
   }
 ll ans=od_sum-(od-1)+ev_sum;// odd sum -(odd count -1)+even sum
 cout<<ans<<endl;
    }
}