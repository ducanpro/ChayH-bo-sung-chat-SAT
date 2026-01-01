#include <stdio.h>
//thap 7 tang
//chia 2 phan:
//dia to 
//chong dia nho
//di chuyen co ban:
//chong dia nho (n-1) --> kho(b)) a, c, b
//dia lon (n)--> dich(c) a, b, c tuc la dieu kien chi con 1 dia
//chong dia nho(n-1)--> dich(c) b, a, c
void thap(int n, char a, char b, char c){
//n(so dia) , a(nguon), b(kho), c(dich)
//neu chi con 1 dia thi chuyen thang qua dich
  if(n == 1){
     printf("di chuyen dia %d %c-->%c "n, a, c);
     return;
  }
  thap(n - 1, a, c, b);
  printf("di chuyen dia %c -- > %c ", n,a,c);
  thap(n - 1, b, c, a)
  
}
int main(){
  char a = 'A', b = 'B', c= 'C';
  int n;
  printf("Nhap n: ");
  scanf("%d", &n)
  thap(n, a, b, c);
}
