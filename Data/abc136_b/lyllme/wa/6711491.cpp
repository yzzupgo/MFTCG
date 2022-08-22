#include <bits/stdc++.h>
using namespace std;
int main() {
int N, ans;
cin >> N;
ans = 0;
if (N <10){
ans =+ N;
}
else if (N <1000){
ans =+ 9 + (N - 99);
}
else{
ans =+ (9 + 99) + (N - 9999);
}
cout << ans;
}
