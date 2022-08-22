#include<bits/stdc++.h>
using namespace std;
int main() {
int x;
cin >> x;
int y = x * 1.08;
if(y < 206) {
cout << "Yay!";
} else if(y == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
