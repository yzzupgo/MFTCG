#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int n,l;
cin >> n >> l;
int sum = 0,m = 99999;
for(int i=0;i<n;i++){
sum += l + i -1;
if(abs(l+i-1)<m) m = abs(l+i-1);
}
cout << sum - m << endl;
return 0;
}
