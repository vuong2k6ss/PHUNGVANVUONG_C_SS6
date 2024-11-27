#include<stdio.h>
int main() {
	int n;
	int count=0;
	int number=0;
	int prime=2;
	printf("Moi ban nhap so luong so nguyen to");
	scanf("%d",&n); 
	while(number<n){
		count=0; 
		for(int i=1; i<=prime; i++){
			if(prime%i==0){
				count++; 
		} 
	} 
	 if(count==2){
	 	printf("\n so nguyen to %d:",prime);
	 	number++;		  		  
	 } 
	prime++;
    }
    return 0; 
}
