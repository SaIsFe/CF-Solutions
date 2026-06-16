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
int main() {
    optimize();
    int t;
    cin>>t;
    while(t--){
   int n;
   cin>>n;
   vector<ll>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
for(int i=0;i<n;i++){
    vector<ll>cw(n),acw(n),ans(n);
    // clockwise
    for(int j=1;j<n;j++){
        int cur=(i+j)%n;
        int pre=(i+j-1)%n;
        cw[cur]=max(cw[pre],v[pre]);
    }
    // anti clockwise
    for(int j=1;j<n;j++){
    int cur = (i - j + n) % n;
    int pre = (i - j + 1 + n) % n;
    acw[cur] = max(acw[pre], v[cur]);
}
for(int i=0;i<n;i++){
    ans[i]=min(cw[i],acw[i]);
}
ll sum=0;
for(auto x:ans)sum+=x;
cout<<sum<<' ';
}
cout<<endl;
    }
}