#include <stdio.h>
#include <string.h>

// Hàm d?o ngu?c chu?i
void daoNguocChuoi(char *input, char *reverse) {
    int len = strlen(input); 
    char *pInput = input;    
    char *pReverse = reverse; 

    
    for (int i = 0; i < len; i++) {
        *(pReverse + i) = *(pInput + (len - 1 - i));
    }
    *(pReverse + len) = '\0';
}

int main() {
    char inputString[100];  
    char reverseString[100]; 

   
    printf("Nhap vao mot chuoi: ");
    fgets(inputString, sizeof(inputString), stdin);

    
    inputString[strcspn(inputString, "\n")] = 0;

  
    daoNguocChuoi(inputString, reverseString);

   
    printf("Chuoi ban dau: %s\n", inputString);
    printf("Chuoi dao nguoc: %s\n", reverseString);

    return 0;
}

