#include<bits/stdc++.h>
using namespace std;
int main() {
double n, t;
cin >> n;
t = 1.08 * n;
t = (int)t;
if(t > 206) {
cout << ":(" << endl;
} else if(t < 206) {
cout << "Yay!" << endl;
} else if(t == 206) {
cout << "so-so" << endl;
}
return 0;
}
