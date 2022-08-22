#include<bits/stdc++.h>
using namespace std;
int main() {
int x;
cin >> x;
int y = x * 1.08;
if(x < 206) {
cout << "Yay!";
} else if(x == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
