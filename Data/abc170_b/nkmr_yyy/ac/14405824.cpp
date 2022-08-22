#include <bits/stdc++.h>
#define _GLIBCXX_DEBUG
using namespace std;
int main(){
int x, y;
cin >> x >> y;
if(y - 2 * x >= 0 && ((y - 2 * x ) % 2 == 0) && 4 * x -y >= 0){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
}
