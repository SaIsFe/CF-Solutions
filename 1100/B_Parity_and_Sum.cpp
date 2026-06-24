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
  vector<ll>v(n);
  int ev=0,od=0;
  for(int i=0;i<n;i++){
  cin>>v[i];
  if(v[i]& 1)od++;
  else ev++;
  }
  if(ev==0 || od==0){
    cout<<0<<endl;
    continue;
  }
// all elements odd parity banate hobe
sort(v.begin(),v.end());
if(v[n-1]&1){
    cout<<ev<<endl;
    continue;
}
int idx;
for(int i=n-1;i>=0;i--){
    if(v[i]%2!=0){
        idx=i;
        break;
    }
}
ll sum=v[idx];
int cnt=0;
for(int i=idx-1;i>=0;i--){
    if(v[i]%2==0){
        cnt++;
        sum+=v[i];
    }
}
int evcnt=n-1-idx;
// right side theke cost count 
ll cost=0;
if(sum>v[n-1])cost=evcnt+cnt;
else cost=evcnt+1+cnt;
// left side theke cost count
ll cost1=cnt;
for(int i=idx+1;i<n;i++){
    if(sum>v[i]){
        cost1++;
        sum+=v[i];
    }
    else{
        cost1+=2;
        sum=sum+(2*v[i]);
    }
}
cout<<min(cost,cost1)<<endl;
    }
}