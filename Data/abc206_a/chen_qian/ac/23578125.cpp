#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
n = (int)floor((double)n * 1.08);
if(n == 206) {
puts("so-so");
}
if(n < 206) {
puts("Yay!");
}
if(n > 206) {
puts(":(");
}
return 0;
}
