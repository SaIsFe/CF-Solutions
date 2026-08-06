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
  int n;
  cin>>n;
  string a,b;
  cin>>a>>b;
int odd_cnta_0=0,odd_cnta_1=0;
int ev_cnta_0=0,ev_cnta_1=0;
for(int i=0;i<n;i++){
    if(i%2==0){
        if(a[i]=='0')odd_cnta_0++;
        else odd_cnta_1++;
    }
    else{
         if(a[i]=='0')ev_cnta_0++;
        else ev_cnta_1++;  
    }
}
int odd_cntb_0=0,odd_cntb_1=0;
int ev_cntb_0=0,ev_cntb_1=0;
for(int i=0;i<n;i++){
    if(i%2==0){
        if(b[i]=='0')odd_cntb_0++;
        else odd_cntb_1++;
    }
    else{
         if(b[i]=='0')ev_cntb_0++;
        else ev_cntb_1++;  
    }
}
if(odd_cnta_0==odd_cntb_0 && odd_cnta_1==odd_cntb_1 && 
ev_cnta_0==ev_cntb_0 && ev_cnta_1==ev_cntb_1)yes;
else no;
    }
}