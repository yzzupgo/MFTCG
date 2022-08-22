#include <bits/stdc++.h>
using namespace std;
int main(){
int X, Y;
cin >> X >> Y;
bool ans_flag = false;
for (int i = 0; i < X; i++){
int K = 4 * X - 2 * i;
int L = 2 * X + 2 * i;
if (K == Y || L == Y){
ans_flag = true;
break;
}
}
if (ans_flag){
cout << "Yes" << endl;
}
else {
cout << "No" << endl;
}
}
