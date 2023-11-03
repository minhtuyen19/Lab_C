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
//void xoakhoangtrang(char chuoi[]) {
//	int i, j;
//	int length = strlen(chuoi);
//
//	for (i = 0, j = 0; i < length; i++) {
//		if (chuoi[i] != ' ') {
//			chuoi[j] = chuoi[i];
//			j++;
//		}
//	}
//	chuoi[j] = '\0'; // Đặt ký tự kết thúc chuỗi mới
//}
//int main() {
//	char chuoi[100];
//	printf("Nhap chuoi: ");
//	gets(chuoi);
//	xoakhoangtrang(chuoi);
//	printf("Chuoi sau khi xao: %s \n", chuoi);
//	return 0;
//}

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
//5. Doi tat ca cac ky tu co trong chuoi thanh chuoi thanh chu thuong


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
//int stringlength(char s[]) {
//	int i = 0;
//	while (s[i] != '\0') {
//		i++;
//	}
//	return i;
//}
//
//char *DaoNguoc(char str[])
//{
//	int length = stringlength(str);
//	char *temp = new char[length + 1];
//	for (int i = 0; i < length; i++)
//	{
//		temp[i] = str[length - 1 - i];
//	}
//	temp[length] = NULL; //Kết thúc chuỗi
//	return temp;
//}
//
//void InDaoNguoc(char str[]) {
//	int length = stringlength(str);
//	printf("\nChuoi sau khi dao nguoc la: ");
//	for (int i = length - 1; i >= 0; i--)
//	{
//		printf("%c", str[i]);
//	}
//}
//
//int main()
//{
//	char s[100];
//	printf("\nNhap chuoi: ");
//	fgets(s, 100, stdin); // nên dùng hàm fgets
//	/*gets(s);*/
//	char *kq = DaoNguoc(s);
//	InDaoNguoc(s);
//	printf("\nChuoi sau khi dao nguoc la: %s", kq);
//	return 0;
//}

//==========================
//#include <stdio.h>
//#include <string.h>
//
//void daoNguocChuoi(char *str) {
//	int i = 0;
//	int j = strlen(str) - 1;
//	char temp;
//
//	while (i < j) {
//		temp = str[i];
//		str[i] = str[j];
//		str[j] = temp;
//		i++;
//		j--;
//	}
//}
//
//int main() {
//	char chuoi[1000];
//
//	printf("Nhap chuoi: ");
//	fgets(chuoi, sizeof(chuoi), stdin);
//
//	// Gọi hàm để đảo ngược chuỗi
//	daoNguocChuoi(chuoi);
//
//	printf("Chuoi sau khi dao nguoc: %s", chuoi);
//
//	return 0;
//}

//============================
//Viet chuong trinh tim kiem 1 ky tu xem co trong chuoi khong, neu co xuat ra vi tri cua tu do
//#include <stdio.h>
//#include <string.h>
//
//int timViTriKyTu(char *chuoi, char kyTu) {
//	int length = strlen(chuoi);
//	for (int i = 0; i < length; i++) {
//		if (chuoi[i] == kyTu) {
//			return i; // Trả về vị trí đầu tiên của ký tự trong chuỗi
//		}
//	}
//	return -1; // Trả về -1 nếu không tìm thấy ký tự
//}
//
//int main() {
//	char chuoi[1000];
//	char kyTu;
//
//	printf("Nhap chuoi: ");
//	fgets(chuoi, sizeof(chuoi), stdin);
//
//	printf("Nhap ky tu can tim: ");
//	scanf(" %c", &kyTu); // Đọc một ký tự từ bàn phím
//
//	int viTri = timViTriKyTu(chuoi, kyTu);
//
//	if (viTri != -1) {
//		printf("Ky tu '%c' xuat hien tai vi tri %d trong chuoi.\n", kyTu, viTri);
//	}
//	else {
//		printf("Ky tu '%c' khong xuat hien trong chuoi.\n", kyTu);
//	}
//
//	return 0;
//}


//======================
//#include <stdio.h>
//#include <string.h>
//#include <stdbool.h>
//
//bool kiemTraTen(char hoten[], char ten[]) {
//	int chieuDaiHoTen = strlen(hoten);
//	int chieuDaiTen = strlen(ten);
//	int i = 0;
//	int j = 0;
//
//	while (i < chieuDaiHoTen) {
//		if (hoten[i] == ten[j]) {
//			i++;
//			j++;
//			if (j == chieuDaiTen - 1) {
//				if (hoten[i] == ' ' || hoten[i] == '\n' || hoten[i] == '\0') {
//					return true; // Tên đã nhập đúng
//				}
//			}
//		}
//		else {
//			i++;
//		}
//	}
//
//	return false; // Tên đã nhập sai
//}
//
//int main() {
//	char hoten[1000];
//	char ten[100];
//
//	printf("Nhap ho ten: ");
//	fgets(hoten, sizeof(hoten), stdin);
//
//	printf("Nhap ten can kiem tra: ");
//	fgets(ten, sizeof(ten), stdin);
//
//	if (kiemTraTen(hoten, ten)) {
//		printf("Ten da nhap dung!\n");
//	}
//	else {
//		printf("Ten da nhap sai!\n");
//	}
//
//	return 0;
//}

//===================

//13. Viet chuong trinh dao vi tri cua tu dau va tu cuoi
//#include <stdio.h>
//#include <string.h>
//
//void daoViTriTu(char *chuoi) {
//	int chieuDai = strlen(chuoi);
//	int i = 0;
//	int j = chieuDai - 1;
//
//	while (i < j) {
//		while (i < j && chuoi[i] == ' ') {
//			i++;
//		}
//		while (i < j && chuoi[j] == ' ') {
//			j--;
//		}
//
//		char temp = chuoi[i];
//		chuoi[i] = chuoi[j];
//		chuoi[j] = temp;
//
//		i++;
//		j--;
//	}
//}
//
//int main() {
//	char chuoi[1000];
//
//	printf("Nhap chuoi: ");
//	fgets(chuoi, sizeof(chuoi), stdin);
//
//	// Gọi hàm để đảo vị trí từ đầu và từ cuối
//	daoViTriTu(chuoi);
//
//	printf("Chuoi sau khi dao vi tri tu dau va tu cuoi: %s", chuoi);
//
//	return 0;
//}


//14. 

//#include <stdio.h>
//#include <string.h>
//
//void catChuoiTenHoLot(char *hoten, char *holot, char *ten) {
//	int i = strlen(hoten) - 1;
//
//	// Tìm vị trí của ký tự cuối cùng là khoảng trắng trong chuỗi họ tên
//	while (i >= 0 && hoten[i] != ' ') {
//		i--;
//	}
//
//	if (i < 0) {
//		// Nếu không tìm thấy khoảng trắng, hoten chứa tên riêng
//		strcpy(ten, hoten);
//		holot[0] = '\0'; // Chuỗi họ lót trống
//	}
//	else {
//		// Ngược lại, cắt chuỗi họ lót và tên
//		strncpy(holot, hoten, i);
//		holot[i] = '\0'; // Đặt ký tự kết thúc chuỗi
//		strcpy(ten, hoten + i + 1);
//	}
//}
//
//int main() {
//	char hoten[1000];
//	char holot[500];
//	char ten[500];
//
//	printf("Nhap ho ten: ");
//	fgets(hoten, sizeof(hoten), stdin);
//
//	// Gọi hàm để cắt chuỗi họ tên thành chuỗi họ lót và chuỗi tên
//	catChuoiTenHoLot(hoten, holot, ten);
//
//	printf("Chuoi ho lot: %s\n", holot);
//	printf("Chuoi ten: %s\n", ten);
//
//	return 0;
//}


//Phan nang cao

//1. 
//#include <stdio.h>
//
//void doiChuHoaChuThuong(char *chuoi) {
//	int i = 0;
//	int inWord = 0; // Kiểm tra xem hiện tại đang ở trong một từ
//
//	while (chuoi[i] != '\0') {
//		if ((chuoi[i] >= 'a' && chuoi[i] <= 'z') || (chuoi[i] >= 'A' && chuoi[i] <= 'Z')) {
//			if (!inWord) {
//				// Bắt đầu một từ mới, đổi chữ hoa
//				if (chuoi[i] >= 'a' && chuoi[i] <= 'z') {
//					chuoi[i] -= 32;
//				}
//				inWord = 1;
//			}
//			else {
//				// Tiếp tục từ, đổi chữ thường
//				if (chuoi[i] >= 'A' && chuoi[i] <= 'Z') {
//					chuoi[i] += 32;
//				}
//			}
//		}
//		else {
//			inWord = 0;
//		}
//		i++;
//	}
//}
//
//int main() {
//	char chuoi[1000];
//
//	printf("Nhap chuoi: ");
//	fgets(chuoi, sizeof(chuoi), stdin);
//
//	// Gọi hàm để đổi các từ ở đầu câu sang chữ hoa và những từ không phải đầu câu sang chữ thường
//	doiChuHoaChuThuong(chuoi);
//
//	printf("Chuoi sau khi doi: %s", chuoi);
//
//	return 0;
//}

//4.
#include <stdio.h>
#include <string.h>

int demKyTuGiongNhau(const char *chuoi1, const char *chuoi2) {
	int dem = 0;
	int chieuDai1 = strlen(chuoi1);
	int chieuDai2 = strlen(chuoi2);

	for (int i = 0; i < chieuDai1; i++) {
		for (int j = 0; j < chieuDai2; j++) {
			if (chuoi1[i] == chuoi2[j]) {
				dem++;
				break;
			}
		}
	}

	return dem;
}

int main() {
	char chuoi1[100];
	char chuoi2[100];

	printf("Nhap chuoi 1: ");
	fgets(chuoi1, sizeof(chuoi1), stdin);
	printf("Nhap chuoi 2: ");
	fgets(chuoi2, sizeof(chuoi2), stdin);

	int soKyTuGiong = demKyTuGiongNhau(chuoi1, chuoi2);

	printf("So ky tu giong nhau trong hai chuoi: %d\n", soKyTuGiong);

	return 0;
}


//=======================================================
#include <stdio.h>
#include <string.h>

void chenTu(char *chuoi, const char *tuCanChen, int viTriChen) {
    int chieuDaiChuoi = strlen(chuoi);
    int chieuDaiTu = strlen(tuCanChen);

    if (viTriChen < 0 || viTriChen > chieuDaiChuoi) {
        printf("Vi tri chen khong hop le.\n");
        return;
    }

    // Dời các ký tự sau viTriChen sang phải để tạo không gian cho từ mới
    for (int i = chieuDaiChuoi; i >= viTriChen; i--) {
        chuoi[i + chieuDaiTu] = chuoi[i];
    }

    // Chèn từ vào chuỗi
    for (int i = 0; i < chieuDaiTu; i++) {
        chuoi[viTriChen + i] = tuCanChen[i];
    }
}

int main() {
    char chuoi[1000];
    char tuCanChen[100];
    int viTriChen;

    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    printf("Nhap tu can chen: ");
    fgets(tuCanChen, sizeof(tuCanChen), stdin);

    printf("Nhap vi tri can chen: ");
    scanf("%d", &viTriChen);

    chenTu(chuoi, tuCanChen, viTriChen);

    printf("Chuoi sau khi chen tu: %s", chuoi);

    return 0;
}