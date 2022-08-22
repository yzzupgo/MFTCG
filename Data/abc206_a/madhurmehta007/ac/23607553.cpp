#include<bits/stdc++.h>
using namespace std;
int main() {
int n;
cin >> n;
if(int(1.08 * n) < 206) {
cout << "Yay!";
} else if(int(1.08 * n) == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
