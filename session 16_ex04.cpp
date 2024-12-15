#include<stdio.h>
void inmang(int *arr,int n){
	for (int i=0;i<n;i++){
	    printf("%d",*(arr+i));
		}
	}
int main(){
    int mang[5]={1,2,3,4,5};
    int n = sizeof(mang) / sizeof(mang[0]);
    inmang(mang,n);
    return 0;
    }
				
