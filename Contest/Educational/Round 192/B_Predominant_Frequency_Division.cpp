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
  vector<int>pre1(n+1,0),pre12(n+1,0),pre3(n);
  for(int i=1;i<=n;i++){
    pre1[i]=pre1[i-1]+(v[i-1]==1);
    pre12[i]=pre12[i-1]+(v[i-1]!=3);
  }
bool f = false;
for(int l=1;l<=n-2;l++){
    if(2*pre1[l] < l) continue;
    for(int r=l+1;r<=n-1;r++){
        int oneTwo = pre12[r]-pre12[l];
        int len = r-l;
        if(2*oneTwo>=len){
            f=true;
            break;
        }
    }
    if(f) break;
}
if(f)yes;
else no;
    }
}