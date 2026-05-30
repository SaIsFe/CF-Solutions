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
   string s;
   cin>>s;
   int n=s.size();
   int l=0,r=n-1;
   for(int i=0;i<n-1;i++){
if(s[i]==s[i+1]){
    l=i+1;
    break;
}
}
for(int i=n-1;i>0;i--){
    if(s[i]==s[i-1]){
        r=i-1;
        break;
    }
}
//cerr<<l<<' '<<r<<endl;
if(l>r){
    yes;
    continue;
}
   if(abs(l-r)<1)yes;
   else if(abs(l-r)==1){
    if(s[l]==s[r])no;
    else yes;
   }
   else{
bool f=1;
for(int i=l;i<r;i++){
    if(s[i]==s[i+1]){
        f=0;
        break;
    }
}
if(f)yes;
else no;
   }

    }
}