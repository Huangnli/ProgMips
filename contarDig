#include <stdio.h>
int conta_digitos(int n, int d){
	int aux=0, i=0;
	while(d != 0){
	aux= d%10;
	if(n == aux){
		i++;
	}
	d= d/10;
	}
	return i;
}
int main(void){
	int x, y;
	scanf("%d", &x);
	scanf("%d", &y);
	printf("%d\n", conta_digitos(y, x));
	return 0;
}
