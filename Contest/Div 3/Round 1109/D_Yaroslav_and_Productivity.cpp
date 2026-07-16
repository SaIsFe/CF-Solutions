#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define f(i,n)for(int i=0;i<n;i++)
#define iv(v,n) \
vector<long long>v(n);\
f(i,n)cin>>v[i];
#define pb push_back
#define mxe(v) *max_element(v.begin(),v.end())
#define mne(v) *min_element(v.begin(),v.end())
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
 int n,m;
 cin>>n>>m;
 vector<ll>v(n),b(m);
 for(int i=0;i<n;i++)cin>>v[i];
 for(int i=0;i<m;i++)cin>>b[i];
 sort(b.begin(),b.end());
 ll ans=0;
 int sidx=0;
 for(int i=0;i<m;i++){
    ll sum=0;
    for(int j=sidx;j<b[i];j++){
        sum+=v[j];
    }
    ans+=abs(sum);
    sidx=b[i];
 }
 for(int i=sidx;i<n;i++)ans+=v[i];
 cout<<ans<<endl;
    }
}