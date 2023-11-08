#include <stdio.h>

int main () {
	float r;
	const float PI = 3.14f;
	printf("Nhap ban kinh duong tron: ");
	scanf("%f", &r);
	if(r <= 0) {
		printf("Nhap r > 0");
	} else {
		printf("circumference of circle=%f\n",r,2 * PI * r);
		printf("area of circle=%f",r,PI * r * r);
	}
	return 0;
}
