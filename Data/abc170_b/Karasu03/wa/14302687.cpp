#include <bits/stdc++.h>
using namespace std;
int main()
{
int X,Y;
cin >> X >> Y;
for (int i = 1; i <= X; i++) {
for (int j = i; j <= X; j++) {
int sum = i*2 + j*4;
if (i+j == X && sum == Y) {
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
}
