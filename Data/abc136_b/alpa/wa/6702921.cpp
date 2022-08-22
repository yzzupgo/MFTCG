#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
#include <math.h>
#include <cstdint>
#include <cstring>
#define SIZE_OF_ARRAY(array) (sizeof(array)/sizeof(array[0]))
using namespace std;
int main()
{
int N;
cin >> N;
int count = 0;
for (int i = 1; i <= N; i++){
unsigned int keta = 0;
int num = i;
while (num != 0){
num = num / 10;
++keta;
}
cout << i << ",";
cout << keta << endl;
if (keta % 2 == 0){
}
else {
++count;
}
}
cout << count << endl;
return 0;
}
