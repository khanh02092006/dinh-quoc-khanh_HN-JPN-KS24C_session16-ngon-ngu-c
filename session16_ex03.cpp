#include<stdio.h>
void tinhtong(int *a,int *b,int *sum){
	*sum=*a + *b;
	}
int main(){
    int num1=10;
	int num2=7;
	int tong;
	tinhtong(&num1,&num2,&tong);
	printf(" tong %d va %d = %d",num1,num2,tong);
	return 0;
	}	
