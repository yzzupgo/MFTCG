#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
int N;
cin >> N;
int sum = 0;
for(int i = 0; i < 100000; i++){
if (1 <= i && i <= 9) sum++;
else if (100 <= i && i <= 999) sum++;
else if (10000 <= i && i <= 99999) sum++;
}
cout << sum;
return 0;
}
