#include <bits/stdc++.h>
using namespace std;
int main(void){
int X,Y;
cin >> X >> Y;
for(int i = 0 ; i < X ; i++){
for(int j = 0 ; j < Y ; j++){
if(i + j == X && 2 * i + 4 * j == Y || 4 * i + 2 * j == Y){
cout << "Yes" << endl;
return 0;
}
}
}
cout << "No" << endl;
}
