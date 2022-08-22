#include <bits/stdc++.h>
using namespace std;
int main() {
int x,y,c = 0;
cin >> x >> y;
for(int i = 0; 2 <= y - (i * 4); i++){
if((y - (i * 4)) %2== 0 && (((y - (i * 4)) / 2) + i) - x == 0){
c += 1;
}
}
if(c == 1){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
return 0;
}
