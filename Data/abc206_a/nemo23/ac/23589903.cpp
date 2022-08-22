#include <bits/stdc++.h>
using namespace std;
int main() {
int price;
cin >> price;
int t = price * 1.08;
if(t < 206) {
cout << "Yay!";
} else if(t == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
