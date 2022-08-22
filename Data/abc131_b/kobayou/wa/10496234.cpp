#include <iostream>
#include <math.h>
#include <string>
#include <algorithm>
using namespace std;
int main() {
int n, l;
cin >> n >> l;
int ans=0;
for(int i=0; i<n; i++){
ans+=l+i;
}
if(l>0){
ans-=l;
} else if(l+n<0){
ans-=l+n-1;
}
cout << ans;
}
