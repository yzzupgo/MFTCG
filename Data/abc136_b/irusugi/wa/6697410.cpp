#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
if((1 <= N)&&(N < 100)){
cout << 9 << endl;
}
else if((100 <= N)&&(N< 1000)){
cout << N - 90 << endl;
}
else if((1000 <= N)&&(N < 10000)){
cout << 909 << endl;
}
else if((10000 <= N)&&(N < 100000)){
cout << N - 9090 << endl;
}
else
cout << 90909 << endl;
}
