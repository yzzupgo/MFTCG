#include<bits/stdc++.h>
using namespace std;
int main() {
int x;
cin >> x;
int c = x * 1.08;
if(c < 206) {
cout << "Yay!";
} else if(c == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
