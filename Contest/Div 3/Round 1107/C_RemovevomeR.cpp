#include <bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
#define  yes cout<<"YES\n"
#define no cout<<"NO\n"
const int MOD = 1e9+7;
#define pb push_back
int main() {
    optimize();
   int t;
   cin>>t;
   while(t--){
int n;
cin>>n;
string s;
cin>>s;
int cnt0=count(s.begin(),s.end(),'0');
int cnt1=count(s.begin(),s.end(),'1');
if(cnt0==0 || cnt1==0){
    cout<<1<<endl;
    continue;
}
char first=s[0];
char last=s[n-1];
int cntf=count(s.begin(),s.end(),first);
int cntl=count(s.begin(),s.end(),last);
int block=1;
for(int i=1;i<n;i++){
    if(s[i]!=s[i-1])block++;
}

if(cntf==1 || cntl==1)cout<<2<<endl;// ..00001,10000..,011111..,..11110
else if(block==2)cout<<2<<endl;//1111000,0000111
else cout<<1<<endl;
}
}
