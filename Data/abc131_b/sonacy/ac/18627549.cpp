#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
#include<string>
#include<iomanip>
using namespace std;
int main(){
int n,l;
cin>>n>>l;
int DIF=10000000;
int dif;
int ans;
int sum=(2*l+n-1)*n/2;
for(int i=1;i<=n;i++){
dif=abs(l+i-1);
if(DIF>dif){
DIF=dif;
ans=sum-(l+i-1);
}
}
cout << ans<< endl;
}
