#include <bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
if(1 <= N <= 99){
cout << 9 << endl;
}
else if(100 <= N <= 999){
cout << N - 90 <<endl;
}
else if(1000 <= N <= 9999){
cout << 909 << endl;
}
else if(10000 <= N <= 99999){
cout << N - 9090 << endl;
}
else
cout << 90909 << endl;
}
