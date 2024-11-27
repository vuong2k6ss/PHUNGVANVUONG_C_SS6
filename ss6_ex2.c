#include <stdio.h>

int main()
{
	int i, num;
	int chan = 0, le = 0;
	printf("nhap vao 5 so nguyen bat ki\n");
	for(i=0;i<5;i++){
		printf("nhap so thu %d : ", i+1);
		scanf("%d", &num);
		if(num%2==1){
			le++;
		}else{
			chan++;
		}
	}
	printf("so luong so chan la %d\n", chan);
	printf("so luong so le la %d ", le);
	return 0;
}

