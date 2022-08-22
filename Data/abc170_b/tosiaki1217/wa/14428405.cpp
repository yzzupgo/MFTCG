#include <bits/stdc++.h>
using namespace std;
void t(string a);
int main() {
int c,f;
cin >> c >> f;
cerr << c << f << endl;
if(f%2 == 1 || f > c*4) t("No");
for(int i = 0;i<=c;i++){
cerr << i << c << f << endl;
if( ( i * 4 + ( c - i ) * 2 ) % f == 0 ){
cerr << "s" << endl;
t("Yes");
break;
}
}
t("No");
}
void t(string a){
cout << a << endl;
}
