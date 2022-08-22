#include <bits/stdc++.h>
using namespace std;
int main() {
int x;
scanf("%d", &x);
int y;
scanf("%d", &y);
if (y % 2 != 0){
printf("No\n");
}
else if (y/x >=2 && y/x <=4){
printf("Yes\n");
} else {
printf("No\n");
}
}
