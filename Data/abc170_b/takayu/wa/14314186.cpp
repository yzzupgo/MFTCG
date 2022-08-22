#include<bits/stdc++.h>
using namespace std;
int main(){
int x, y;
cin >> x >> y;
int m;
m = y - x;
int i = 0;
bool flag = 0;
while (i < x){
int m1 = m - i;
if (m1 == 1){
cout << "Yes" << endl;
return 0;
}
if (m1 % 3 == 0){
cout << "Yes" << endl;
return 0;
}
i++;
}
cout << "No" << endl;
return 0;
}
