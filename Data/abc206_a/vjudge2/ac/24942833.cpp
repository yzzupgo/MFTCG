#include <bits/stdc++.h>
using namespace std;
int main() {
int N, l = 206;
float t = 1.08;
cin >> N;
int T = N * t;
if(T < l) {
cout << "Yay!";
} else if(T == l) {
cout << "so-so";
} else if(T > l) {
cout << ":(";
}
return 0;
}
