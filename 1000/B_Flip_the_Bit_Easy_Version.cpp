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
   int n,k;
   cin>>n>>k;
   vector<int>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   vector<int>a(k);
   for(int i=0;i<k;i++)cin>>a[i];
   int x=v[a[0]-1];
   int cnt1=count(v.begin(),v.end(),1);
   int cnt0=count(v.begin(),v.end(),0);
   if(cnt1==n || cnt0==n){
    cout<<0<<endl;
    continue;
   }
int left_flip=0;// index 0 to p(k) left side
for(int i=0;i<a[0];i++){
if(v[i]==x && left_flip%2!=0)left_flip++;
if(v[i]!=x && left_flip%2==0)left_flip++;
}
int right_flip=0;// index p(k) to n-1 right side
for(int i=n-1;i>=a[0]-1;i--){
if(v[i]==x && right_flip%2!=0)right_flip++;
if(v[i]!=x && right_flip%2==0)right_flip++;
}
cout<<max(left_flip,right_flip)<<endl;
    }
}