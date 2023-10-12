#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE  
#define _CRT_NONSTDC_NO_DEPRECATE
#pragma warning (disable: 4996);

//4. In ra cac phan tu nam tren 2 duong cheo
//void nhapmang2d(int a[][3], int n, int m) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			printf("a[%d][%d] = ", i, j);
//			scanf("%d", &a[i][j]);
//		}
//	}
//}
//void xuatmang2d(int a[][3], int n, int m) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			printf("\ta[%d][%d]= %d ", i, j, a[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void in2duongcheo(int a[][3], int n, int m) {
//	for (int i = 0; i < n; i++) {
//		printf("Duong cheo chinh: %d \n", a[i][i]);
//	}
//	printf("\n");
//	for (int i = 0; i < n; i++) {
//		printf("Duong cheo phu: %d \n", a[i][n - 1 - i]);
//	}
//}
//int main() {
//	int n = 3;
//	int m = 3;
//	int a[3][3];
//	nhapmang2d(a, n, m);
//	xuatmang2d(a, n, m);
//	in2duongcheo(a, n, m);
//	return 0;
//}

//PHAN NANG CAO
//phan bai tap them-xoa-thay the
//1. xoa 1 dong 1 cot 
//void nhapmang2d(int a[][3], int n, int m) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			printf("a[%d][%d] = ", i, j);
//			scanf("%d", &a[i][j]);
//		}
//	}
//}
//void xuatmang2d(int a[][3], int n, int m) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			printf("\ta[%d][%d]= %d ", i, j, a[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//void xoahang(int a[][100], int *n, int m, int h) {
//	if (h >= 0 && h < *n) {
//		for (int i = h; i < *n; i++) {
//			for (int j = 0; j < m; j++) {
//				a[i][j] = a[i + 1][j];
//			}
//		}
//	}
//	(*n)--;
//}
//void xoacot(int a[][100], int n, int *m, int c) {
//	if (c >= 0 && c < *m) {
//		for (int i = 0; i < n; i++) {
//			for (int j = c; j < *m; j++) {
//				a[i][j] = a[i][j + 1];
//			}
//		}
//	}
//	(*m)--;
//}
//int main() {
//	int n = 3;
//	int m = 3;
//	int a[3][3];
//	nhapmang2d(a, n, m);
//	xuatmang2d(a, n, m);
//	printf("Sau khi xoa hang: ");
//	xoahang(a, &n, m, 2);
//	xuatmang2d(a, n, m);
//	
//	return 0;
//}

//4. 
//int SumRow(int a[][100], int m, int i) {
//	int sum = 0;
//	for (int j = 0; j < m; j++) {
//		sum += a[i][j];
//	}
//	return sum;
//}
//void swap(int *a, int *b) {
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//void hoanvi(int a[][100], int n, int m) {
//	int maxSum = SumRow(a, m, 0);
//	int minSum = SumRow(a, m, 0);
//	int rowmax = 0;
//	int rowmin = 0;
//	for (int i = 1; i < n; i++) {
//		int sum = SumRow(a, m, i);
//		if (sum > maxSum) {
//			maxSum = sum;
//			rowmax = i;
//		}
//		if (sum < minSum) {
//			minSum = sum;
//			rowmin = i;
//		}
//	}
//	for (int j = 0; j < m; j++) {
//		swap(&a[rowmax][j], &a[rowmin][j]);
//	}
//}

//5. 
//int UCNN(int n) {
//	int uocNN = n;
//	for (int i = 2; i <= n / 2; i++) {
//		if (n%i == 0) {
//			uocNN = i;
//			break;
//		}
//	}
//	return uocNN;
//}
//void thayTheChan(int a[][100], int n, int m) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (a[i][j] % 2 == 0) {
//				int uocNN = UCNN(a[i][j]);
//				a[i][j] = uocNN;
// 			}
//		}
//	}
//}

//6. 