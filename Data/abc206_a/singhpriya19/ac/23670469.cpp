#include <bits/stdc++.h>
using namespace std;
int main() {
int i;
int j;
double n;
cin >> n;
i = 1.08 * n;
if(i < 206) {
cout << "Yay!";
} else if(i == 206) {
cout << "so-so";
} else {
cout << ":(";
}
return 0;
}
