#include <iostream>
#include <climits>
#include <set>
#include <string>
#include <algorithm>
#include <vector>
#define MAX 1000000007
using namespace std;
#define ll long long
#define dbg if(0)
#define ISRANGE(val,lo,hi) ((lo<=val)&&(val<hi))
int main(){
ll ans,n,l;
ll sum=0;
ll ate=MAX;
cin >>n>>l;
for(int i=0;i<n;i++){
sum+=l+i;
if(abs(l+i)<abs(ate))ate=l-i;
}
sum-=ate;
cout <<sum<<endl;
return 0;
}
