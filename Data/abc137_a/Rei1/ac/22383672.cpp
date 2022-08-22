#include <iostream>
using namespace std;
int main(void){
int a, b;
int ans1, ans2, ans3;
cin >> a >> b;
ans1 = a + b;
ans2 = a - b;
ans3 = a * b;
if(ans1 >= ans2 && ans1 >= ans3){
cout << ans1 << endl;
}else if(ans2 >= ans1 && ans2 >= ans3){
cout << ans2 << endl;
}else{
cout << ans3 << endl;
}
return 0;
}
