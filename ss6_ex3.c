#include <stdio.h>

int main()
{
	int passWord = 5;
	int passKey;
	printf("nhap mat khau : ");
	scanf("%d", &passKey);
	while(passKey!=passWord){
		printf("nhap mat khau : ");
		scanf("%d", &passKey);
		if(passKey==passWord){
			printf("ban da nhap dung mat khau !!!");
			break;
		}
	}
	return 0;
}

