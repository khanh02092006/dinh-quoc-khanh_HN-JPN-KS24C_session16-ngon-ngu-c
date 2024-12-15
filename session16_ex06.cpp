#include<stdio.h>


int timkiemphantu(int *arr, int n, int giatricantim) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == giatricantim) {
            return i; 
        }
    }
    return -1; 
}

int main() {
    int mang[] = {1, 2, 3, 4, 5, 6, 7}; 
    int n = sizeof(mang) / sizeof(mang[0]); 
    int giatricantim = 6; 
    int vitri = timkiemphantu(mang, n, giatricantim);
    
    
    if (vitri != -1) {
        printf("Phan tu %d duoc tim thay tai vi tri: %d\n", giatricantim, vitri);
    } else {
        printf("Phan tu %d khong duoc tim thay trong mang.\n", giatricantim);
    }

    return 0;
}

