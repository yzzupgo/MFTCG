#include <cstdio>
using namespace std;
int main() {
int A, B;
scanf("%d %d", &A, &B);
if(B >= 13) printf("%d", B);
else if(B >= 6) printf("%d", B / 2);
else printf("0");
return 0;
}
