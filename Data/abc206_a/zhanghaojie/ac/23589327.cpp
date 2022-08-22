#include<bits/stdc++.h>
using namespace std;
int main() {
double n;
int a;
cin >> n;
a = n * 1.08;
if(a == 206) {
puts("so-so");
} else if(a > 206) {
puts(":(");
} else {
puts("Yay!");
}
return 0;
}
