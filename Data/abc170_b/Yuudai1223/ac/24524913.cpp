#include <bits/stdc++.h>
using namespace std;
int x,y;
string Check() {
for (int i = 0;i < 101;i++) {
for (int j = 0;j < 101;j++) {
if (i+j==x&&2*i+4*j==y) {
return "Yes";
}
}
}
return "No";
}
int main(void){
cin >> x >> y;
cout << Check() << endl;
}
