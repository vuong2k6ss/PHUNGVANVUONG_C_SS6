#include <stdio.h>

int main() {
    int day, month, year;
    printf("Nhap nam: ");
    scanf("%d", &year);
    printf("nhap thang tu 1-12 : ");
    scanf("%d", &month);
    if (month < 1 || month > 12) {
        printf("khong hop le!!!");
        return 0;
    }
    if(month==4 || month==6 || month==9 || month==11){
         	day=30; 
    }else if(month==2){
        if((year%4==0 && year%100!=0) || (year%400==0))
            day=29; 
        else
            day=28; 
    }else{
        	day=31;
    }
    printf("Thang %d cua nam %d co %d ngày", month, year, day);
    return 0;
}

