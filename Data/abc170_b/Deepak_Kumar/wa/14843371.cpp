#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
int Nt, Ny;
if(((4 * x) - y) % 2 == 0 && ((4 * x) - y) / 2 >= 0)
cout << "Yes";
else
cout << "No";
}
