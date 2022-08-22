#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
int n,l,ans,aji=0,i=0;
cin >> n >> l;
while(i<n){
aji += l+i;
i++;
}
if(l < 0){
if(n <= abs(l)){
ans = aji - (l+n-1);
}
}else{
ans = aji - l;
}
cout << ans;
}
