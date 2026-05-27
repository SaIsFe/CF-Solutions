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
/*
 beautiful subsequence pattern 222...1313113..
*/
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
   string s;
   cin>>s;
int n=s.size();
vector<int>pre(n,0),suf(n,0);
if(s[0]=='2')pre[0]=1;
else pre[0]=0;
 for(int i=1;i<n;i++){
    if(s[i]=='2')pre[i]=pre[i-1]+1;
    else pre[i]=pre[i-1];
}
//for(auto x:pre)cout<<x<<' ';
//cout<<endl;
if(s[n-1]=='1' || s[n-1]=='3')suf[n-1]=1;
else suf[n-1]=0;
for(int i=n-2;i>=0;i--){
    if(s[i]=='1' || s[i]=='3')suf[i]=suf[i+1]+1;
    else suf[i]=suf[i+1];
}
//for(auto x:suf)cout<<x<<' ';
//cout<<endl;
int mx_subsequence=0;
for(int i=0;i<n;i++){
    mx_subsequence=max(mx_subsequence,pre[i]+suf[i]);
}
cout<<n-mx_subsequence<<endl;
}
}