#include <stdio.h>

int main()
{
	int i, num, Num = 0, le = 0;
	printf("nhap vao 5 so nguyen bat ki\n");
	for(i=0;i<5;i++){
		printf("nhap so thu %d : ", i+1);
		scanf("%d", &num);
		if(num%2==1){
			Num += num;
		}
	}printf("tong cac so le la %d ", Num);
	
	return 0;
}

