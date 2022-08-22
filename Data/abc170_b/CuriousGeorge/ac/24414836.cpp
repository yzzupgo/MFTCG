#include <iostream>
using namespace std;
int main(){
string final;
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
}else if(x == y){
cout << "No" << endl;
return 0;
}else if(x * 2 > y){
cout << "No" << endl;
}
else{
while(count <= j){
crane = x * 2;
turtle = 4 * count;
if((crane + turtle) == y){
cout << "Yes" << endl;
return 0;
}else if(crane == y){
cout << "Yes"<< endl;
return 0;
}else if(turtle == y){
cout << "Yes"<< endl;
return 0;
}else{
final = "No";
}
count++;
x--;
}
}
cout << final << endl;
return 0;
}
