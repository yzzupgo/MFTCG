#include <bits/stdc++.h>
using namespace std;
int main() {
int r;
int D;
int x;
cin >> r >> D >> x;
int N=1;
while (N<=10)
{ int y;
y=r*x-D;
cout << y << endl;
x=y;
N++;
}
}
