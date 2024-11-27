#include <stdio.h>

int main() {
    int a, i;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &a);
    printf("tat ca uoc cua %d là: ", a);
    for (i=1;i<=a;i++){
        if(a%i==0){
            printf("%d ", i);
        }
    }printf("\n");
    return 0;
}

