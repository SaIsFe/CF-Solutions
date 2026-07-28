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
  int n,k;
  cin>>n>>k;
  int pair=2*(n/2-1);
  if(n%2!=0)pair=pair+1;
  if(pair<k){
    cout<<-1<<endl;
    continue;
  }
  int block=n-k;
  vector<string>ans;
  for(int i=0;i<block;i++){
    if(i%2==0)ans.pb("0");
    else ans.pb("1");
  }
  int cnt0=(n+1)/2;
  int cnt1=n/2;
  int extra0=cnt0-((block+1)/2);
  int extra1=cnt1-(block/2);
  for(int i=0;i<extra0;i++){
    ans[0]+='0';
  }
  for(int i=0;i<extra1;i++){
    ans[1]+='1';
  }
  for(auto x:ans)cout<<x;
  cout<<endl;
    }
}