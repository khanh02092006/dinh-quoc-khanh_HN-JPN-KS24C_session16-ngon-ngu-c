#include<stdio.h>

void themPhanTu(int *arr, int *n, int giaTriMoi, int viTri) {
    if (viTri < 0 || viTri > *n) {
        printf("Vi tri khong hop le\n");
        return;
    }
    for (int i = *n; i > viTri; i--) {
        arr[i] = arr[i - 1];
    }
    arr[viTri] = giaTriMoi;
    (*n)++;
}

void inMang(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int mang[100] = {1, 2, 3, 4, 5};
    int n = 5;

    printf("Mang ban dau: ");
    inMang(mang, n);

    int giaTriMoi = 99;
    int viTri = 2;

    themPhanTu(mang, &n, giaTriMoi, viTri);

    printf("Mang sau khi them phan tu: ");
    inMang(mang, n);

    return 0;
}

			
