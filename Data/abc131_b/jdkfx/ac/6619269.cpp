#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<math.h>
using namespace std;
int main(){
int n,l;
cin >> n >> l;
int r = l+n-1;
int eat;
if(r<=0)eat=r;
else if(l>=0)eat=l;
else eat=0;
int ans = (r+l)*(r-l+1)/2-eat;
cout << ans << endl;
return 0;
}
