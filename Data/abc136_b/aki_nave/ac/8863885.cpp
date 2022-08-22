#include <iostream>
#include <cmath>
using namespace std;
int main(){
int i=0, j, a, n, ans=0;
cin >> n;
a=n;
for(; a>0; a/=10)
i++;
if(i%2) ans+=(n+1-pow(10,i-1));
for(j=1; j<i;j+=2)
ans+=9*pow(10, j-1);
cout << ans << endl;
return 0;
}
