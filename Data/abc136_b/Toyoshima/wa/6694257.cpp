#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
int a,n=0;
cin >> a;
for(int i=1;i<log10(a)+1; i=i+2){
n+=pow(10,i)-pow(10, i-1);
}
if((((int)log10(a)+1)%2)!=0){
n+=a-pow(10, log10(a))+1;
}
cout<<n;
return 0;
}
