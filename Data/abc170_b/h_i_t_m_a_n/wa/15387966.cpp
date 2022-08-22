#include <iostream>
using namespace std;
int main (){
int animals, total;
cin >> animals;
cin >> total;
string ans = "No";
for (int i = 1; i<animals; i++){
if(((i * 2) + ((animals - i) * 4)) == total){
ans = "Yes";
break;
}
}
cout << ans;
return 0;
}
