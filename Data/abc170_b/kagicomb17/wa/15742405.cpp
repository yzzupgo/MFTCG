#include <bits/stdc++.h>
using namespace std;
int main(void){
int X, Y;
cin >> X >> Y;
int answer = 0;
for (int i = 0; i < X; i++){
answer++;
}
for (int i = 0; i < Y; i++){
answer++;
}
if (X == Y){
cout << "YES" << endl;
}
else{
cout << "NO" << endl;
}
}
