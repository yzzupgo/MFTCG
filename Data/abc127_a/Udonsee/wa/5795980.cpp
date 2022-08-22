#include<iostream>
using namespace std;
int main()
{
int year[20] = {};
int i, j;
for (i = 0; i < 15; i++)
year[i] = 0;
int gram, rate, die;
cin >> rate >> die >> gram;
for (j = 0; j < 10; j++){
year[j] += rate*gram - die;
cout << year[j] << endl;
gram = year[j];
}
return 0;
}
