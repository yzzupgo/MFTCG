#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
int cnt = 0;
int ans = 0;
if(1 <= N && N <10){
cout << N << endl;
}else if(10 <= N && N <100){
cout << 9 << endl;
}else if(100 <= N && N <1000){
cout << 9 + (N-100)+1 << endl;
}else if(1000 <= N && N <10000){
cout << 909 << endl;
}else if(10000 <= N && N <10000){
cout << 909 + (N-10000) +1 << endl;
} else {
cout << 90909 << endl;
}
}
