#include<cstdio>
#include<iostream>
#include<algorithm>
using namespace std;
int main(void) {
int N;
scanf("%d", &N);
if (N < 10) {
printf("%d\n", N);
} else if (10 <= N && N < 100) {
printf("%d\n", 9);
} else if (100 <= N && N < 1000) {
printf("%d\n", 9 + N - 99);
} else if (1000 <= N && N < 10000) {
printf("%d\n", 9 + 999 - 99);
} else if (10000 <= N && N < 100000) {
printf("%d\n", 9 + 999 - 99 + N - 9999);
} else {
printf("%d\n", 9 + 999 - 99 + 99999 - 9999);
}
return 0;
}
