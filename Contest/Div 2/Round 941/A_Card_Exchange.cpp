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
 vector<int>v(n);
 for(int i=0;i<n;i++)cin>>v[i];
 sort(v.begin(),v.end());
 vector<int>ans;
 int cnt=1;
 for(int i=1;i<n;i++){
if(v[i]!=v[i-1]){
    ans.pb(cnt);
    cnt=1;
}
else cnt++;
 }
 ans.pb(cnt);
 sort(ans.rbegin(),ans.rend());
 if(ans[0]<k){
    cout<<n<<endl;
    continue;
 }
 int sum=k-1;
 int idx;
 for(int i=0;i<ans.size();i++){
if((k-1+ans[i])<k){
    idx=i;
    break;
}
 }
 for(int i=idx;i<ans.size();i++){
    sum+=ans[i];
 }
 cout<<sum<<endl;
    }
}