#include <iostream>
using namespace std;
int main()
{
int n;
cin >> n;
int cnt = 0;
if(n <= 9){
cnt += n;
}else if(n <= 99){
cnt += 9;
}else if(n <= 999 ){
cnt += 9;
cnt += (n-99);
}else if(n <= 9999 ){
cnt += 9;
cnt += 900;
}else if(n <= 99999 ){
cnt += 9;
cnt += 900;
cnt += (n-999);
}else{
cnt += 9;
cnt += 900;
cnt += 90000;
}
cout << cnt << endl;
return 0;
}
