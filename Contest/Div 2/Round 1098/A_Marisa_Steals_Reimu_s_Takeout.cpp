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
   int cnt1=0,cnt2=0,cnt0=0;
   for(int i=0;i<n;i++){
    if(v[i]==0)cnt0++;
    else if(v[i]==1)cnt1++;
    else cnt2++;
   }
   if(cnt1>cnt2){
    cout<<cnt0+cnt2+(cnt1-cnt2)/3<<endl;
   }
   else if(cnt1==cnt2)cout<<cnt0+cnt1<<endl;
   else cout<<cnt0+cnt1+(cnt2-cnt1)/3<<endl;
    }
}