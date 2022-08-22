#include <bits/stdc++.h>
using namespace std;
void t(string a);
int main() {
bool istrue = false;
int c,f;
cin >> c >> f;
cerr << c << f << endl;
for(int i = 0;i<=c;i++){
cerr << i << c << f << endl;
if( ( i * 4 + ( c - i ) * 2 ) == f ){
cerr << "s" << endl;
istrue = true;
break;
}
}
if(istrue == true) cout << "Yes" << endl;
if(istrue == false) cout << "No" << endl;
}
