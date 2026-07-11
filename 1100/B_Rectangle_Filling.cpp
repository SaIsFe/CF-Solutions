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
  vector<string>v(n);
  for(int i=0;i<n;i++){
    string s;
    cin>>s;
    v[i]=s;
  }
  bool firstrowsame=1;
  for(int i=1;i<m;i++){
    if(v[0][i]!=v[0][i-1]){
        firstrowsame=0;
        break;
    }
  }
  bool lastrowsame=1;
  for(int i=1;i<m;i++){
    if(v[n-1][i]!=v[n-1][i-1]){
        lastrowsame=0;
        break;
    }
  }
  if(firstrowsame && lastrowsame && v[0][0]!=v[n-1][0]){
    no;
    continue;
  }
  bool firstcolsame=1;
  for(int i=1;i<n;i++){
    if(v[i][0]!=v[i-1][0]){
        firstcolsame=0;
        break;
    }
  }
   bool lastcolsame=1;
  for(int i=1;i<n;i++){
    if(v[i][m-1]!=v[i-1][m-1]){
        lastcolsame=0;
        break;
    }
  }
if(firstcolsame && lastcolsame && v[0][0]!=v[0][m-1]){
    no;
    continue;
}
yes;
    }
}