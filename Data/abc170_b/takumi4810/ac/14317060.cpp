#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y;
cin >> x >> y;
int min = x*2;
int max = x*4;
if(y>=min && y<=max && y%2 == 0){
cout << "Yes" << endl;
} else {
cout << "No" << endl;
}
return 0;
}
