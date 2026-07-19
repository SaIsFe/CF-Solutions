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
  vector<int>v(n);
  for(int i=0;i<n;i++)cin>>v[i];
  if(n==2){
    if(v[0]==v[1])no;
    else yes;
    continue;
  }
  if(n%2!=0)no;
  else{
    int cnt=0;
    int block_p=0;
    int block_n=0;
    for(int i=0;i<n-1;i=i+2){
        if(v[i]==v[i+1]){
            cnt++;
        }  
    }
    if(cnt%2==0)yes;
    else no;
  }
  
    }
}