#include <iostream>
using namespace std;
int main(){
int x,y,count,turtle,crane;
cin >> x >> y;
count = 0;
if(x == 1 && y== 4){
cout << "Yes"<< endl;
return 0;
}else if(x == 1 && y == 2){
cout << "Yes"<< endl;
return 0;
}else if(x/y == 1){
cout << "No" << endl;
return 0;
}
else{
while(0 < x){
crane = x * 2;
turtle = 4 * count;
if(crane + turtle == y){
cout << "Yes" << endl;
return 0;
}else if(crane == y){
cout << "Yes"<< endl;
return 0;
}else if(turtle == y){
cout << "Yes"<< endl;
return 0;
}
count++;
x--;
}
}
cout << "No" << endl;
return 0;
}
