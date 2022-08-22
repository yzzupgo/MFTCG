#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(void){
int x, y;
cin >> x >> y;
for(int t=0;t<=100;t++){
for(int k=0;k<=100;k++){
if((t+k)==x && (2*t + 4*k)==y){
cout << "Yes" << endl;
}
}
}
cout << "No" << endl;
return 0;
}
