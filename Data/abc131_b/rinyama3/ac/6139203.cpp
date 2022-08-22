#include <iostream>
using namespace std;
int main(){
int n,l;
cin >> n >> l;
int sum = 0;
int zero = 100000000;
int a;
for(int i = 1;i <= n;i++){
sum += l + i - 1;
if(abs(l + i - 1) < zero){
a = i;
zero = abs(l + i - 1);
}
}
sum -= l + a - 1;
cout << sum << endl;
}
