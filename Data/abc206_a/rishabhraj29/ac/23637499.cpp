#include<bits/stdc++.h>
using namespace std;
void swap(char *x, char *y) {
char t[20];
strcpy(t, x);
strcpy(x, y);
strcpy(y, t);
}
int main() {
int n;
cin >> n;
n = n * 1.08;
if(n < 206) {
cout << "Yay!" << endl;
} else if(n == 206) {
cout << "so-so" << endl;
} else {
cout << ":(" << endl;
}
}
