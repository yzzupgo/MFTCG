#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int pow10(int p) {
if (p == 0) return 1;
return 10 * pow10(p - 1);
}
int main(){
int N;
cin >> N;
int d = log10(N)+1;
int n = 0;
for (int i = 1; i < d; i+=2){
n += pow10(i) - pow10(i-1);
}
cout << ((d % 2 == 0) ? n : n + N % pow10(d-1) + 1) << endl;
return 0;
}
