#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, delta, x1, x2;
	printf("nhap a: ");
	scanf("%f", &a);
	printf("nhap b: ");
	scanf("%f", &b);
	printf("nhap c: ");
	scanf("%f", &c);
	if(a==0){
        if(b==0){
            if(c==0){
                printf("Phuong trinh co vo so nghiem");
            }else{
                printf("Phuong trinh vo nghiem");
            }
        }else{
            x1 = -c / b;
            printf("Phuong trinh co nghiem duy nhat: x = %d", x1);
        }
    }
    delta = b * b - 4 * a * c;
     if(delta>0){
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %.2f\n", x1);
            printf("x2 = %.2f\n", x2);
        }else if(delta==0){
            x1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %.2f", x1);
        }else{
            printf("Phuong trinh vo nghiem");
        }
	return 0;
}
  
