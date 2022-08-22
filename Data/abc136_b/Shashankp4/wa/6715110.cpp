#include<iostream>
using namespace std;
int main() {
int N;
cin >> N;
if (N > 1 && N <= 9)
cout << N;
else if (N > 9 && N <=99)
cout << 9;
else if (N > 99 && N <= 999) {
cout << 9 + (N - 99);
}
else if (N > 999 && N <= 9999) {
cout << 909;
}
else if (N > 9999 && N <= 99999) {
cout << 909 + (N - 9999);
}
else if (N == 100000) {
cout << 90909;
}
return 0;
}
