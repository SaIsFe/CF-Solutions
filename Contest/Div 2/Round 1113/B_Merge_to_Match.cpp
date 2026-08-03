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
  vector<ll>a(n),b(m);
  for(int i=0;i<n;i++)cin>>a[i];
for(int i=0;i<m;i++)cin>>b[i];
if(m>n || 2*m>n){
    no;
    continue;
}
sort(a.begin(),a.end());
sort(b.begin(),b.end());
if(a[0]>b[0] || a[n-1]<b[m-1]){
    no;
    continue;
}
bool f=1;
for(int i=0;i<m;i++){
    if(b[i]<a[i] || b[i]>a[n-m+i]){
        f=0;
        break;
    }
}
if(f)yes;
else no;
    }
}