#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cout << "enter amount" << endl;
cin >> n;
float res = (1.08 * n);
res = floor(res);
if(res == 206) {
cout << "so-so" << endl;
} else if(res < 206) {
cout << "Yay!" << endl;
} else {
cout << ":(" << endl;
}
return 0;
}
