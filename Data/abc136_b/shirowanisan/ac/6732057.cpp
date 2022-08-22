#include<iostream>
using namespace std;
int main() {
int N;
cin >> N;
int ans = 0;
if(N == 100000) {
ans = 90000 + 900 + 9;
} else if(N >= 10000) {
ans = ((N % 100000) - 9999) + 900 + 9;
} else if(N >= 1000) {
ans = 900 + 9;
}else if(N >= 100) {
ans = ((N % 1000) - 99) + 9;
} else if(N >= 10){
ans = 9;
} else {
ans = N;
}
cout << ans << endl;
}
