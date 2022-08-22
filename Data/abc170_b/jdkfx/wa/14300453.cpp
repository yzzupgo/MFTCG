#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<math.h>
#include<map>
using namespace std;
typedef long long ll;
int main() {
int x,y;
cin >> x >> y;
int flag = 0;
for(int i=0;i<x;i++){
if((4*i)+(2*(x-i)) == y){
flag = 1;
}
}
if(flag){
cout << "Yes" << endl;
}else{
cout << "No" << endl;
}
return 0;
}
