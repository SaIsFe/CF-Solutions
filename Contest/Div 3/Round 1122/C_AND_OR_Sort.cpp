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
  string s;
  cin>>s;
  if(is_sorted(s.begin(),s.end())){
    cout<<0<<endl;
    continue;
  }
int cnt1=count(s.begin(),s.end(),'1');
int cnt0=n-cnt1;
if(s[0]=='1'){
    cout<<cnt0<<endl;
    continue;
}
int first=-1;
for(int i=0;i<n;i++){
    if(s[i]=='1'){
        first=i;
        break;
    }
}
if(first==-1)cout<<0<<endl;
else{
int cnt=0;
for(int i=first;i<n;i++){
    if(s[i]=='0')cnt++;
}
int b=cnt;
for(int j=first;j<n;j++){
    if(s[j]=='0')cnt--;
    else cnt++;
    b=min(b,cnt);
}
cout<<b<<endl;
}
    }
}