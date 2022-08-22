#include<bits/stdc++.h>
using namespace std;
#define lli long long int
#define pb push_back
#define fi(i,a,p) for(int i = a; i < p; i++)
#define pp pair<ll , ll>
#define mp make_pair
#define setzero(a) memset(a,0,sizeof(a))
#define setdp(a) memset(a,-1,sizeof(a))
int main(){
int n,p;
cin>>n>>p;
int s=4*n-p;
if(s%2==0&&s>=0){
cout<<"Yes"<<endl;
}
else{
cout<<"No"<<endl;
}
return 0;
}
