#include <bits/stdc++.h>
using namespace std;
int GIF(float n) {
return floor(n);
}
int main() {
int N;
cin >> N;
float n = N * 1.08;
int t = GIF(n);
if(t < 206) {
cout << "Yay!" << "\n";
} else if(t > 206) {
cout << ":(" << "\n";
} else {
cout << "so-so" << "\n";
}
return 0;
}
