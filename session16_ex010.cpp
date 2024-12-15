#include<stdio.h>

void xoaPhanTu(int *arr, int *n, int viTriXoa) {
    if (viTriXoa < 0 || viTriXoa >= *n) {
        printf("Loi\n");
        return;
    }
    for (int i = viTriXoa; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*n)--;
}

void inMang(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int mang[1000] = {1, 2, 3, 4, 5};
    int n = 5;
    int viTriXoa;

    printf("Mang ban dau: ");
    inMang(mang, n);

    printf("Nhap vi tri xoa: ");
    scanf("%d", &viTriXoa);

    xoaPhanTu(mang, &n, viTriXoa);

    printf("Mang sau khi xoa: ");
    inMang(mang, n);

    return 0;
}

					
