#include<stdio.h>
#include<string.h>
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE  
#define _CRT_NONSTDC_NO_DEPRECATE
#pragma warning (disable: 4996);
//=============================================
//1. dem so ky tu trong chuoi

//int main() {
//	//int n;
//	//printf("Nhap so ky tu muon nhap: ");
//	//scanf("%d", &n);
//	char chuoi[80];
//	printf("Nhap vao chuoi: \n");
//	gets(chuoi);
//	printf("Do dai chuoi vua nhap la: %d\n", strlen(chuoi));
//	return 0;
//}
//===============================================
//2. dem co bao nhieu khoang trang trong chuoi
//int demkt(char chuoi[]) {
//	int dem = 0;
//	for (int i = 0; i < strlen(chuoi); i++) {
//		if (chuoi[i] == ' ') {
//			dem++;
//		}
//	}
//	return dem;
//}
//
//int main() {
//	char chuoi[80];
//	printf("Nhap vao chuoi: \n");
//	gets(chuoi);
//	demkt(chuoi);
//	printf("Chuoi co %d khoang cach ", demkt(chuoi));
//	return 0;
//}
//3. Nhap vao mot chuoi, hay loai bo khoang trang thua trong chuoi
//void 

//4. Doi tat ca cac ky tu co trong chuoi thanh chu thuong (khong dung ham strlwr)

//void toLowerCase(char *chuoi) {
//	for (int i = 0; chuoi[i] != '\0'; i++) {
//		if (chuoi[i] >= 'A' && chuoi[i] <= 'Z') {
//			chuoi[i] = chuoi[i] + 32;
//		}
//	}
//}
//
//int main() {
//	char chuoi[100];
//	printf("Nhap chuoi: ");
//	gets(chuoi);
//	toLowerCase(chuoi);
//	printf("Chuoi sau khi chuyen thanh chu thuong: %s\n", chuoi);
//	return 0;
//}

//6. Doi nhung ky tu dau tien cua moi tu thanh chu in hoa

//void toUpperCase(char *str) {
//	int i = 0;
//	if (str[i] >= 'a' && str[i] <= 'z') {
//		str[i] = str[i] - 32;
//	}
//	while (str[i] != '\0') {
//		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == '\r') {
//			i++;
//			if (str[i] >= 'a' && str[i] <= 'z') {
//				str[i] = str[i] - 32;
//			}
//		}
//		i++;
//	}
//}
//int main() {
//	char chuoi[100];
//	printf("nhap chuoi: ");
//	gets(chuoi);
//	toUpperCase(chuoi);
//	printf("chuoi sau khi chuyen thanh chu hoa o chu cai dau tien: %s\n", chuoi);
//	return 0;
//}

//8. doi chu xen ke 1 chu hoa va 1 chu thuong. nhap ABCDEfgh doi thanh AbCdEfGh
//void DoiXenke(char *str) {
//	for (int i = 0; str[i] != '\0'; i++) {
//		if (i % 2 == 0) {
//			if (str[i] >= 'a' && str[i] <= 'z') {
//				str[i] = str[i] - 32;
//			}
//		}
//		else {
//			if (str[i] >= 'A' && str[i] <= 'Z') {
//				str[i] = str[i] + 32;
//			}
//		}
//	}
//}
//int main() {
//	char chuoi[100];
//	printf("nhap chuoi: ");
//	gets(chuoi);
//	DoiXenke(chuoi);
//	printf("chuoi sau khi chuyen thanh chu hoa o chu cai dau tien: %s\n", chuoi);
//	return 0;
//}

//9. Dao nguoc cac ki tu trong chuoi. Vi du nhap: ABCD -> DCBA


