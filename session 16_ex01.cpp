#include <stdio.h>
int main() {
    int a = 10;       
    int *ptr = &a;    
    
    printf("Dia chi cua bien a: %p\n", &a);

    
    printf("Gia tri cua a thong qua con tro: %d\n", *ptr);

    
    printf("Gia tri cua ptr (dia chi ma no tro toi): %p\n", ptr);

    
    printf("Gia tri cua a: %d\n", a);

    return 0;
}


