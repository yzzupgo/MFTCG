#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define repi(i,a,b) for(int i=a; i<=b; i++)
#define repd(i,a,b) for(int i=a; i>=b; i--)
const int INF = ~(1<<31);
typedef long long int ll;
int main(){
ios_base::sync_with_stdio(false);
cin.tie(0);
ll N;
cin>>N;
if(N>=1 and N<= 99){
cout<<"9\n";
}
else if(N>=100 and N<=999){
cout<<9+(N-100+1)<<"\n";
}
else if(N>= 1000 and N<= 9999){
cout<<909<<"\n";
}
else if(N>= 10000 and N<= 99999){
cout<<909+(N-10000+1)<<"\n";
}
else{
cout<<"90909\n";
}
return 0;
}
