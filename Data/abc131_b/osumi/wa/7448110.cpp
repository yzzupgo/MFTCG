#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;
int main() {
int n, l,x,sum,r;
cin >> n >> l;
int a = l;
x = l + n - 1;
if (a > 0) {
r = a;
}
else if (a <= 0 && l >= 0) {
r = 0;
}
else {
r = x;
}
sum = ((x-a+1)*(a+x))/2;
sum -= r;
cout << sum<< endl;
}
