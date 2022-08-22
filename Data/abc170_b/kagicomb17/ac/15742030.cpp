#include <bits/stdc++.h>
using namespace std;
int main(void){
int X, Y;
cin >> X >> Y;
for(int i = 0; i < 100; i++){
for(int j = 0; j < 100; j++){
if(i + j == X && i * 4 + j * 2 == Y){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
}
