#include <iostream>
#include <vector>
#include <cstdlib>
#include <algorithm>
#include <string>
using namespace std;
int main() {
int n;cin>>n;
int keta=0;
if(n<10) {
cout<<n;
return 0;
}
for(int i = 10;;i*=10){
if(i > n){
keta = i/10;
break;
}
}
if(keta == 10) cout<<"9";
if(keta ==100) cout<<(n+9)-keta+1;
if(keta == 1000) cout<<"909";
if(keta == 10000) cout<<n-keta+1+909;
if(keta > 10000) cout<<"90909";
return 0;
}
