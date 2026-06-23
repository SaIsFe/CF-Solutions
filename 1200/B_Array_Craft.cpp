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
  int n,x,y;
  cin>>n>>x>>y;
  vector<int>ans(n,1);
 int cur=-1;
 y--;
 x--;
 //left part
 for(int i=y-1;i>=0;i--){
    ans[i]=cur;
    cur*=-1;
 }
 //right part
 int cur2=-1;
 for(int i=x+1;i<n;i++){
ans[i]=cur2;
cur2*=-1;
 }
  for(auto x:ans)cout<<x<<' ';
  cout<<endl;
    }
}