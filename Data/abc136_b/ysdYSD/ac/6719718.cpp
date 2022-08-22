#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int ans = 0;
if(N<=9){
ans = N;
}
else if(N>=10 && N<=99){
ans = 9;
}
else if(N>=100 && N<=999){
ans = N-100 +1 + 9;
}
else if(N>=1000 && N<=9999){
ans = 909;
}
else if(N>=10000 && N<=99999){
ans = N - 10000 + 1 +909;
}
else if(N == 100000){
ans = 90909;
}
cout << ans << endl;
}
