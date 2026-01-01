#include <stdio.h>

void thap(int n, char a, char b, char c){
	if(n == 1){
		printf("di chuyen %d tu %c --> %c\n",n ,a , c);
		return;
	}
	thap(n - 1, a, c, b);
  	printf("di chuyen dia %d %c -- > %c\n", n, a, c);
  	thap(n - 1, b, a, c);

}
int main(){
	char a = 'A', b = 'B', c= 'C';
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	thap(n,a,b,c);
}
