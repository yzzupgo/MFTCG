#include <stdio.h>
int main() {
int yen;
scanf("%d", &yen);
yen = (yen * 180) / 100;
if(yen < 206) {
puts("Yay!\n");
} else if(yen > 206) {
puts("so-so\n");
} else {
puts(":(\n");
}
}
