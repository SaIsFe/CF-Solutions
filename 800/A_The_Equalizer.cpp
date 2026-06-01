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
   int n,k;
   cin>>n>>k;
   ll sum=0;
   vector<int>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i];
    sum+=v[i];
    }
    if(sum%2!=0 || (n*k)%2==0)yes;
    else no;
}
}