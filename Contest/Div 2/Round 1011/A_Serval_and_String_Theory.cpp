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
   string s;
   cin>>s;
   string tmp;
   tmp=s;
   reverse(tmp.begin(),tmp.end());
   if(s>=tmp && k==0){
    no;
    continue;
   }
   bool f=0;
 for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        if(s[j]<tmp[i]){
            f=1;
            break;
        }
    }
 }
 if(f)yes;
 else no;
    }
}