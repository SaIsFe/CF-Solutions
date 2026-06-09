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
   ll n;
   cin>>n;
   vector<ll>v{0,1,2,3,4,5,6,7,8,9,22,11};
   ll a=v[n%12];
if(a<=n) cout<<a<<' '<<(n-a)<<endl;
else cout<<-1<<endl;

    }
}