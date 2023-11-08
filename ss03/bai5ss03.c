#include <stdio.h>
int main (){
	int a, b, c, d;
	printf("Nhap tong chu so và nghich dao cua so do: ");
	scanf("%d %d %d %d",&a, &b, &c, &d);
	int total = a + b + c + d ;
	int inverse = d*1000 + c*100 + b*10 + a;

	printf("Tong chu so la :%d va nghich dao la:%d",total,inverse );
}
