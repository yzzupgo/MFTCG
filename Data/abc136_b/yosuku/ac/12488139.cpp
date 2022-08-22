#include <iostream>
using namespace std;
int GetDigit(int num){
int digit=0;
while(num!=0){
num /= 10;
digit++;
}
return digit;
}
int main()
{
int n;
cin >> n;
int count = 0;
for (int i = 1; i < n + 1; i++)
{
if(GetDigit(i) % 2 != 0) count++;
}
cout << count << endl;
}
