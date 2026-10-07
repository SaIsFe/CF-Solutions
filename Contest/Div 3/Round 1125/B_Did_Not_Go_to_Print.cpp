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
  string s;
  cin>>s;
  stack<int>st;
  vector<bool>ans(n+1,0);
  for(int i=0;i<n;i++){
    if(s[i]=='1')st.push(i+1);
    else if(s[i]=='2'){
        if(!st.empty()){
            int val=st.top();
            st.pop();
            ans[val]=1;

        }
        else{
            ans[i+1]=1;
        }
    }
    else{
        ans[i+1]=1;
    }
}
int cnt=0;
for(int i=1;i<=n;i++){
    if(ans[i]==0)cnt++;
}
    cout<<cnt<<endl;
   for(int i=1;i<=n;i++){
    if(ans[i]==0)cout<<i<<' ';
   } 
  cout<<endl;
    }
}