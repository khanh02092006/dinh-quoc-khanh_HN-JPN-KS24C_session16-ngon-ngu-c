#include<stdio.h>

void sapxepmang(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) { 
        for (int j = 0; j < n - i - 1; j++) { 
            if (*(arr + j) > *(arr + j + 1)) { 
                int temp = *(arr + j); 
                *(arr + j) = *(arr + j + 1);
                *(arr + j + 1) = temp;
            }
        }
    }
}


void inmang(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", *(arr + i)); 
    }
    
}

int main() {
    int mang[] = {64, 34, 25, 12, 22, 11, 90}; 
    int n = sizeof(mang) / sizeof(mang[0]); 

   
    printf("Mang ban dau: ");
    inmang(mang, n);

   
    sapxepmang(mang, n);

    
    printf("Mang sau khi sap xep: ");
    inmang(mang, n);

    return 0;
}
					
