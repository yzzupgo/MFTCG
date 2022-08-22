#include<bits/stdc++.h>
using namespace std;
int main() {
int n, x;
cin >> n;
x = n * 1.08;
if(x > 206) {
cout << ":(";
} else if(x == 206) {
cout << "so-so!";
} else {
cout << "Yay!";
}
return 0;
}
