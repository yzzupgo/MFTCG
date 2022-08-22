#include<stdio.h>
int main(void)
{
	int D[5],E[5];
	for (int i = 0; i < 5; i++)
		scanf("%d", &D[i]);
	for (int i = 0; i < 5; i++) {
		E[i] = D[i] % 10;
	}
	int min = E[0];
	for (int i = 0; i < 4; i++) {
		if (E[i] > E[i + 1] && E[i + 1]!=0 && E[i]==0) {
			min = E[i + 1];
		
			
		}
	}
	//printf("%d\n", min);
	int F[5];

	for (int i = 0; i < 5; i++) {
		if (E[i] == 0) {
			F[i] = D[i];
		}
		else
			F[i] = D[i] - E[i] + 10;
	}


	printf("%d", F[0]+F[1]+F[2]+F[3]+F[4] - 10 + min);

	return 0;
	

}