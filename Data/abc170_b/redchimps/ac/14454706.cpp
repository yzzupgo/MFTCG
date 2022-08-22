#include <iostream>
using namespace std;
int main(void){
int head;
int leg;
int ans = 0;
cin >> head >> leg ;
for(int i = 0;i<=head;i++){
if(2*i+ 4*(head - i) == leg){
ans = 1;
}
}
if(ans == 1){
cout << "Yes" << endl;
}
else{
cout << "No" << endl;
}
}
