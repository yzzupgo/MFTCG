#include <iostream>
using namespace std;
int main() {
int a, b;
scanf("%d%d", &a, &b);
bool found = false;
int sum = 0;
int mask = (1<<a)-1;
for(int i = 0; i <= mask; i++){
sum = 0;
for(int j = 0; j < a; j++){
int bm = i&(1<<j);
sum += bm != 0 ? 4 : 2;
}
if(sum == b){
found = true;
i = mask+1;
}
}
cout << (found ? "Yes" : "No") << endl;
return 0;
}
