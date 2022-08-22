#include<bits/stdc++.h>
using namespace std;
int x;
int main() {
cin >> x;
if(int(1.0 * x * 1.08) > 206) {
puts(":(");
} else if(int(1.0 * x * 1.08) < 206) {
puts("Yay");
} else {
puts("so-so");
}
return 0;
}
