#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
int res = 1.08 * n;
if(res < 206) {
cout << "Yay!";
} else if(res == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
