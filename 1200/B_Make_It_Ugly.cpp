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
   vector<int>v(n);
   set<int>st;
   for(int i=0;i<n;i++){
    cin>>v[i];
    st.insert(v[i]);
   }
   if(st.size()==1){
    cout<<-1<<endl;
    continue;
   }
   vector<int>ans;
   for(int i=1;i<n-1;i++){
    if(v[i]!=v[0])ans.pb(i);
   }
  int prefix=ans[0];
  int sufix=(n-1)-ans[ans.size()-1];
  int mn=min(prefix,sufix);
  for(int i=1;i<ans.size();i++){
    mn=min(mn,ans[i]-ans[i-1]-1);
  }
  cout<<mn<<endl;
    }
}