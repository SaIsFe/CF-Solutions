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
   if(st.size()!=n)cout<<-1<<endl;
   else{
sort(v.rbegin(),v.rend());
for(auto x:v)cout<<x<<' ';
cout<<endl;
   }
    }
}