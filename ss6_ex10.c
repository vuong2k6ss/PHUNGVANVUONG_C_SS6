#include <stdio.h>

int main(){
    int a, i;
    int soNguyenTo = 1;
    printf("nhap mot so nguyen: ");
    scanf("%d", &a);
    if(a<=1){
        soNguyenTo = 0;
    }else{
        for(i=2;i*i<=a;i++){
            if(a%i==0){
                soNguyenTo = 0;
                break;
            }
        }
    }
    if(soNguyenTo==1){
        printf("%d la so nguyen to", a);
    }else{
        printf("%d khong la so nguyen to", a);
    }
    return 0;
}

