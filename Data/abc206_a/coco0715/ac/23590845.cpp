#include<bits/stdc++.h>
using namespace std;
int main() {
double n;
cin >> n;
n *= 1.08;
int x = n;
if(x > 206) {
cout << ":(" << endl;
} else if(x == 206) {
cout << "so-so" << endl;
} else if(x < 206) {
cout << "Yay!" << endl;
}
}
