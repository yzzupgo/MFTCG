#include <bits/stdc++.h>
using namespace std;
int main(void){
int X,Y;
cin >> X >> Y;
int A = Y / X +(Y % X / 2);
int B = (Y / X+(Y % X / 2))/ 2;
if (X <= A && X >= B)
cout << "Yes" << endl;
else
cout << "No" << endl;
}
