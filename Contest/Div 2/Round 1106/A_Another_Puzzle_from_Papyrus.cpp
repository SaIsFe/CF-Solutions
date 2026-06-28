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
 int n,c;
 cin>>n>>c;
 vector<int>a(n),b(n);
 for(int i=0;i<n;i++)cin>>a[i];
  for(int i=0;i<n;i++)cin>>b[i];
  if(a==b){
    cout<<0<<endl;
    continue;
  }
bool f1=1;
for(int i=0;i<n;i++){
    if(b[i]>a[i]){
        f1=0;
        break;
    }
}
int sum=0;
for(int i=0;i<n;i++){
    sum+=a[i]-b[i];
}
  sort(a.begin(),a.end());
sort(b.begin(),b.end());
int cost=0;
bool ok=0;
for(int i=0;i<n;i++){
    if(a[i]<b[i]){
        ok=1;
        break;
    }
    else{
        cost+=a[i]-b[i];
    }
}
if(ok==1){
    cout<<-1<<endl;
    continue;
}
if(f1==1)cout<<sum<<endl;
else cout<<cost+c<<endl;  
    }
}