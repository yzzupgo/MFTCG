#include <bits/stdc++.h>
using namespace std;
int main(){
int a, l;
cin >> a >> l;
if (l%2 == 1){ cout << "No"; }
else if (l < a*2){ cout << "No";}
else if (l > a*4){cout << "No";}
else {cout << "Yes";}
return 0;
}
