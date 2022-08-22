#include <bits/stdc++.h>
using namespace std;
int CountOfDigits(int n) {
int sum = 0;
while (n > 0) {
sum ++;
n /= 10;
}
return sum;
}
int main() {
int N;
cin >> N;
int count = 0;
for(int i = 0; i < N; i++){
if ( CountOfDigits(i) % 2 == 1 )
count++;
}
cout << count << endl;
}
