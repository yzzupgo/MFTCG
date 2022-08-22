#include<bits/stdc++.h>
using namespace std;
int main() {
double n, t;
cin >> n;
t = 1.08 * n;
if(t > 206.0) {
cout << ":(" << endl;
} else if(t < 206.0) {
cout << "Yay!" << endl;
} else if(t == 206.0) {
cout << "so-so" << endl;
}
return 0;
}
