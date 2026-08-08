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
  int sum=0;
  for(int i=0;i<n;i++){
    cin>>v[i];
     sum+=v[i];
}
  sort(v.begin(),v.end());
int sz=1;
int block=0;
int cnt=1;
int val=v[0];
for(int i=1;i<n;i++){
    if(v[i]!=v[i-1]){
        block++;
        if(cnt>sz){
            sz=cnt;
            val=v[i-1];
        }
        cnt=1;
    }
    else cnt++;
}
block++;
if(cnt>sz){
    sz=cnt;
    val=v[n-1];
}
int extra=n-sz;
if((extra+2)>=sz)cout<<sum<<endl;
else{
    int num=sz-(extra+2);
    num=num*val;
    sum=sum-num;
    cout<<sum<<endl;
}
    }
}