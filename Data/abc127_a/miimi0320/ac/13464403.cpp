#include <cstdio>
using namespace std;
int main() {
int A, B;
scanf("%d %d", &A, &B);
if(A >= 13) printf("%d", B);
else if(A >= 6) printf("%d", B / 2);
else printf("0");
return 0;
}
