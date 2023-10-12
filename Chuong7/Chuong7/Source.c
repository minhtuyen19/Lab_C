#include<stdio.h>
#include<stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE  
#define _CRT_NONSTDC_NO_DEPRECATE
#pragma warning (disable: 4996);

//1.
//void Nhapmang(int *a, int n, int m) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			printf("a[%d][%d] = ", i, j);
//			scanf(" %d", a + m * i + j);
//		}
//	}
//}
//void xuatmang(int *a, int n, int m) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			printf("\ta[%d][%d] =  %d", i, j, *(a + m * i + j));
//		}
//		printf("\n");
//	}
//}
//void TBmoihang(int *a, int n, int m) {
//    for (int i = 0; i < n; i++) {
//        int sum = 0;
//        for (int j = 0; j < m; j++) {
//            sum += *(a + m * i + j);
//        }
//        int tb = sum / m;
//        printf("\nTrung binh moi hang: %d ", tb);
//    }
//}
//void sapxeptangcot(int *a, int n, int m) {
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			for (int k = i + 1; k < n; k++) {
//				if (*(a + m * i + j) > *(a + m * k + j)) {
//					int temp = *(a + m * i + j);
//					*(a + m * i + j) = *(a + m * k + j);
//					*(a + m * k + j) = temp;
//				}
//			}
//		}
//	}
//}
//
//int main() {
//    int n, m;
//    int *a;
//    printf("Nhap vao so hang: ");
//    scanf("%d", &n);
//    printf("Nhap vao so cot: ");
//    scanf("%d", &m);
//
//    a = (int*)calloc(n * m, sizeof(int));
//
//    Nhapmang(a, n, m);
//    printf("\nMang vua nhap:\n");
//    xuatmang(a, n, m);
//
//    TBmoihang(a, n, m);
//	printf("\nMang sau khi sap xep: \n");
//	sapxeptangcot(a, n, m);
//	xuatmang(a, n, m);
//    free(a);
//    return 0;
//}

//2.

//typedef struct time {
//	int hour;
//	int minute;
//	int second;
//}time;
//void nhaptime(struct time *time) {
//	while (1){
//		printf("Nhap vao gio (0-23): ");
//		scanf("%d", &time->hour);
//
//		if (time->hour >= 0 && time->hour <= 23) {
//			break; 
//		}
//
//		printf("Gio khong hop le. Vui long nhap lai!\n");
//	}
//	//Minute
//	do {
//		printf("\Minute: ");
//		scanf("%d", &time->minute);
//	} while (time->minute < 0 || time->minute>59);
//	//Second
//	do {
//		printf("\Second: ");
//		scanf("%d", &time->second);
//	} while (time->second < 0 || time->second>59);
//}
//void xuattime(struct time *time) {
//	printf("Time: %02d:%02d:%02d\n", time->hour, time->minute, time->second);
//}
//struct time Khoangthoigian(struct time *time1, struct time *time2) {
//	struct time khoang;
//	int t1_giay = time1->hour * 60 * 60 + time1->minute * 60 + time1->second;
//	int t2_giay = time2->hour * 60 * 60 + time2->minute * 60 + time2->second;
//	int khoang_giay = t2_giay - t1_giay;
//
//	if (khoang_giay < 0) {
//		khoang_giay = (-1)*khoang_giay;
//	}
//	khoang.hour = khoang_giay / (60 * 60);
//	khoang_giay %= (60 * 60);
//	khoang.minute = khoang_giay / 60;
//	khoang.second = khoang_giay % 60;
//	return khoang;
//}
//int main() {
//	struct time *time1, *time2, khoang;
//	time1 = (struct time*)malloc(sizeof(struct time));
//	time2 = (struct time*)malloc(sizeof(struct time));
//	printf("Nhap thoi gian 1:\n");
//	nhaptime(time1);
//
//	printf("Nhap thoi gian 2:\n");
//	nhaptime(time2);
//
//	xuattime(time1);
//	xuattime(time2);
//
//	khoang = Khoangthoigian(time1, time2);
//	printf("Khoang thoi gian giua hai thoi diem:\n");
//	xuattime(&khoang);
//
//
//	free(time1);
//	free(time2);
//
//	return 0;
//}




