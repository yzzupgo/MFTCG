#include<bits/stdc++.h>
using namespace std;
int main() {
int N;
cin >> N;
double m = (1.08 * N);
if(m < 206) {
cout << "Yay!" << '\n';
} else if(m == 206) {
cout << "so-so" << '\n';
} else {
cout << ":(" << '\n';
}
return 0;
}
