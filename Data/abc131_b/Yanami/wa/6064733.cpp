#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int main() {
int n,l,min,sum=0;
cin >> n >> l;
min = n;
for(int i=1; i<=n;i++){
int a = l + i - 1;
if(abs(a) < abs(min)){
min = a;
}
sum += a;
}
sum = sum - min;
cout << sum << endl;
}
