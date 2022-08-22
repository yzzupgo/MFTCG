#include <iostream>
#include <string>
using namespace std;
int main()
{
int N;
cin >> N;
int counter = 0;
for (int i=1;i<N;++i){
if (1 <= i && i <= 9 ) counter++;
if (100 <= i && i <= 999) counter++;
if (10000 <= i && i <= 99999) counter++;
}
cout << counter << endl;
}
