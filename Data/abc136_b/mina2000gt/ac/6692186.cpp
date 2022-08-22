#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
int main() {
int N;
cin >> N;
int keta = 1;
int n = N;
while (n > 0){
n /= 10;
if (n > 0){
keta++;
} else {
break;
}
}
int ans;
if (keta == 6) {
ans = (99999 - 9999) + (999 - 99) + 9;
} else if (keta == 5){
ans = (N - 9999) + (999 - 99) + 9;
} else if (keta == 4){
ans = (999 - 99) + 9;
} else if (keta == 3){
ans = (N - 99) + 9;
} else if (keta == 2){
ans = 9;
} else if (keta == 1){
ans = N;
}
cout << ans << endl;
}
