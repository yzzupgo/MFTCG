#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int main(){
int N;
cin >> N;
int k = N;
int d = 0;
int o = 0;
while(k > 0){
d++;
k /= 10;
}
int l = 1;
while(d > l){
o += std::pow(10, l) - std::pow(10, l-1);
l += 2;
}
if(d%2!=0){
o += N - std::pow(10, d-1) + 1;
}
cout << o << endl;
}
