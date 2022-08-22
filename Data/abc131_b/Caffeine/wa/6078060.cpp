#include <iostream>
using namespace std;
int main() {
int n,l;
int sum;
cin >> n >> l;
sum = n*(n-1)/2+l*n;
if(0<=l){
cout << sum -l;
return 0;
}
if(1-l>=n){
cout << sum - (l+n-1);
return 0;
}
else{
cout << 0;
}
return 0;
}
