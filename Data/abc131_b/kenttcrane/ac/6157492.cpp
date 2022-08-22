#include <iostream>
#include <algorithm>
using namespace std;
int main(){
int n,l;
cin >> n >> l;
int sum = 0,m = 99999;
for(int i=0;i<n;i++){
sum += l + i;
if(abs(l+i)<abs(m)) m = l+i;
}
cout << sum - m << endl;
return 0;
}
