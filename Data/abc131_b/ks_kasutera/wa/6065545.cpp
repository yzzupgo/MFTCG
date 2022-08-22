#include <iostream>
using namespace std;
int main(){
int n,l,i,a,b,c;
int sum = 0;
cin >> n >> l;
for (i = 0; i < n; i++){
b = i + l;
sum = sum + b;
}
a = n + l - 1;
if (a >= 0 && l <= 0){
cout << sum;
} else if (a <= 0 && l >= 0){
cout << sum;
} else {
c = sum - l;
cout << c;
}
}
