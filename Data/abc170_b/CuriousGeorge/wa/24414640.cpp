#include <iostream>
using namespace std;
int main(){
int x,y,count,turtle,crane,j;
cin >> x >> y;
j = x;
count = 0;
if(x == 1 && y== 4){
cout << "Yes"<< endl;
return 0;
}else if(x == 1 && y == 2){
cout << "Yes"<< endl;
return 0;
}else if((x/y) == 1 && x == y){
cout << "No" << endl;
return 0;
}
else{
while(count <= j){
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
