#include <bits/stdc++.h>
using namespace std;
int main() {
long long int Tapatap = 1;
while(Tapatap--) {
long double N1;
cin >> N1;
if(int(N1 * 1.08) < 206) {
cout << "Yay!" << '\n';
} else if(int(N1 * 1.08) > 206) {
cout << "??" << '\n';
} else {
cout << "so-so" << '\n';
}
}
return 0;
}
