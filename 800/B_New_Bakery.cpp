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
  ll n,a,b;
  cin>>n>>a>>b;
  if(a>b){
    cout<<n*a<<endl;
    continue;
  }
  ll k=min(n,b-a);
 ll profit=(b+(b-k+1))*k/2+(n-k)*a; // sum=((first element+last element)*number of element)/2
 cout<<profit<<endl;
    }
}