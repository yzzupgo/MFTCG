#include <iostream>
using namespace std;
int main()
{
int n,digit = 0,odd = 0 ;
cin >>n ;
int i = 1;
while (i <= n){
int j = i;
while (j > 0){
j = j / 10;
digit ++;
}
if (digit % 2 != 0){
odd++;
digit = 0;
}
else{
digit = 0;
}
i++;
}
cout << odd <<endl;
}
