#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_DEPRECATE  
#define _CRT_NONSTDC_NO_DEPRECATE
#pragma warning (disable: 4996)

//1.
//typedef struct phanso
//{
//	int tu;
//	int mau;
//}phanso;
//void nhapphanso(phanso *ps)
//{
//	printf("\n NHAP PHAN SO");
//	printf("\n Nhap tu so:  ");
//	scanf_s("%d", &ps->tu);
//	printf("\n Nhap mau so:  ");
//	scanf_s("%d", &ps->mau);
//	if (ps->mau == 0)
//	{
//		do
//		{
//			printf("\n MAU SO KHONG DUOC BANG 0-NHAP LAI <<MAU SO>>!\n");
//			scanf_s("%d", &ps->mau);
//		} while (ps->mau == 0);
//	}
//}
//void xuatphanso(phanso ps)
//{
//	printf("\n phan so la: [%d/%d]", ps.tu, ps.mau);
//}
//phanso tong(phanso ps1, phanso ps2)
//{
//	phanso temp;
//	temp.tu = ps1.tu*ps2.mau + ps1.mau*ps2.tu;
//	temp.mau = ps1.mau*ps2.mau;
//
//	return temp;
//
//}
//phanso hieu(phanso ps1, phanso ps2)
//{
//	phanso temp;
//	temp.tu = ps1.tu*ps2.mau - ps1.mau*ps2.tu;
//	temp.mau = ps1.mau*ps2.mau;
//
//	return temp;
//
//}
//phanso tich(phanso ps1, phanso ps2)
//{
//	phanso temp;
//	temp.tu = ps1.tu*ps2.tu;
//	temp.mau = ps1.mau*ps2.mau;
//	return temp;
//}
//phanso thuong(phanso ps1, phanso ps2)
//{
//	phanso temp;
//	temp.tu = ps1.tu*ps2.mau;
//	temp.mau = ps1.mau*ps2.tu;
//	return temp;
//}
//phanso rutgon(phanso ps)
//{
//	int UCLN;
//	if (ps.tu > ps.mau)
//	{
//		for (int i = 1; i < ps.mau; i++)
//		{
//			if (ps.mau%i == 0 && ps.tu%i == 0)
//			{
//				UCLN = i;
//			}
//		}
//	}
//	else
//	{
//		for (int i = 1; i < ps.tu; i++)
//		{
//			if (ps.mau%i == 0 && ps.tu%i == 0)
//			{
//				UCLN = i;
//			}
//		}
//	}
//	ps.tu = ps.tu / UCLN;
//	ps.mau = ps.mau / UCLN;
//	return ps;
//}
//phanso quydong1(phanso ps1, phanso ps2)
//{
//	phanso temp1, temp2;
//	temp1.tu = ps1.tu*ps2.mau;
//	temp1.mau = ps1.mau*ps2.mau;
//	return temp1;
//}
//phanso quydong2(phanso ps1, phanso ps2)
//{
//	phanso temp1, temp2;
//	temp2.tu = ps2.tu*ps1.mau;
//	temp2.mau = ps1.mau*ps2.mau;
//	return temp2;
//}
//void sosanh(phanso ps1, phanso ps2)
//{
//	if (ps1.tu*ps2.mau > ps2.tu*ps1.mau)
//	{
//		printf("\nphan so [%d/%d] lon hon phan so [%d/%d]", ps1.tu, ps1.mau, ps2.tu, ps2.mau);
//	}
//	else printf("\nphan so [%d/%d] nho hon phan so [%d/%d]", ps1.tu, ps1.mau, ps2.tu, ps2.mau);
//}
//void main()
//{
//	phanso ps1, ps2, Tong, Hieu, Tich, Thuong, Quydong1, Quydong2, X, Y;
//	nhapphanso(&ps1);
//	xuatphanso(ps1);
//	nhapphanso(&ps2);
//	xuatphanso(ps2);
//	printf("\n Tong hai phan so la: ");
//	Tong = rutgon(tong(ps1, ps2));
//	xuatphanso(Tong);
//	printf("\n Hieu hai phan so la: ");
//	Hieu = rutgon(hieu(ps1, ps2));
//	xuatphanso(Hieu);
//	printf("\n Tich hai phan so la: ");
//	Tich = rutgon(tich(ps1, ps2));
//	xuatphanso(Tich);
//	printf("\n Thuong hai phan so la: ");
//	Thuong = rutgon(thuong(ps1, ps2));
//	xuatphanso(Thuong);
//	printf("\n [%d/%d] sau khi rut gon la: ", ps1.tu, ps1.mau);
//	X = rutgon(ps1);
//	xuatphanso(X);
//	printf("\n [%d/%d] sau khi rut gon la: ", ps2.tu, ps2.mau);
//	rutgon(ps2);
//	Y = rutgon(ps2);
//	xuatphanso(Y);
//	printf("\n [%d/%d] sau khi quy dong la: ", ps1.tu, ps1.mau);
//	Quydong1 = quydong1(ps1, ps2);
//	xuatphanso(Quydong1);
//	printf("\n [%d/%d] sau khi quy dong la: ", ps2.tu, ps2.mau);
//	Quydong2 = quydong2(ps1, ps2);
//	xuatphanso(Quydong2);
//	sosanh(ps1, ps2);
//	_getch();
//
//}
//2. Khai bao kieu du lieu de bieu dien hon so. 
//- Doi hon so sang phan so
//- Tinh tong, tich hai hon so

//typedef struct phanso {
//	int tu, mau;
//}phanso;
//typedef struct honso {
//	int nguyen;
//	struct phanso ps;
//}honso;
//
//void nhapphanso(phanso *ps)
//{
//	printf("\n NHAP PHAN SO");
//	printf("\n Nhap tu so:  ");
//	scanf_s("%d", &ps->tu);
//	printf("\n Nhap mau so:  ");
//	scanf_s("%d", &ps->mau);
//	if (ps->mau == 0)
//	{
//		do
//		{
//			printf("\n MAU SO KHONG DUOC BANG 0-NHAP LAI <<MAU SO>>!\n");
//			scanf_s("%d", &ps->mau);
//		} while (ps->mau == 0);
//	}
//}
//void xuatphanso(phanso ps)
//{
//	printf("\n Phan so la: [%d/%d]", ps.tu, ps.mau);
//}
//phanso tong(phanso ps1, phanso ps2)
//{
//	phanso temp;
//	temp.tu = ps1.tu*ps2.mau + ps1.mau*ps2.tu;
//	temp.mau = ps1.mau*ps2.mau;
//
//	return temp;
//
//}
//void nhaphonso(struct honso *x) {
//	printf("Nhap vao so nguyen: \n");
//	scanf_s("%d", &x->nguyen);
//	nhapphanso(&x->ps);
//}
//void xuathonso(struct honso x) {
//	printf("\n Hon so la: %d", x.nguyen);
//	xuatphanso(x.ps);
//}
//struct phanso chuyenhssangps(struct honso hs) {
//	struct phanso ps;
//	ps.tu = hs.nguyen * hs.ps.mau + hs.ps.tu;
//	ps.mau = hs.ps.mau;
//	return ps;
//}
//
//struct phanso tinhtongps(struct phanso a, struct phanso b) {
//	struct phanso sum;
//	sum.tu = a.tu * b.mau + b.tu * a.mau;
//	sum.mau = a.mau * b.mau;
//	return sum;
//}
//struct phanso tinhtichps(struct phanso a, struct phanso b) {
//	struct phanso tich;
//	tich.tu = a.tu*b.tu;
//	tich.mau = a.mau * b.mau;
//	return tich;
//}
//struct honso chuyenpssanghs(struct phanso a) {
//	struct honso hs;
//	hs.nguyen = a.tu / a.mau;
//	hs.ps.tu = a.tu % a.mau;
//	hs.ps.mau = a.mau;
//	return hs;
//}
//struct honso tinhTongHS(struct honso a, struct honso b) {
//	phanso aa = chuyenhssangps(a);
//	phanso bb = chuyenhssangps(b);
//	phanso tt = tinhtongps(aa, bb);
//	struct honso t = chuyenpssanghs(tt);
//	return t;
//}
//struct honso tinhtichHS(struct honso a, struct honso b) {
//	phanso aa = chuyenhssangps(a);
//	phanso bb = chuyenhssangps(b);
//	phanso tt = tinhtichps(aa, bb);
//	struct honso t = chuyenpssanghs(tt);
//	return t;
//}
//int main() {
//	honso a, b;
//	nhaphonso(&a);
//	nhaphonso(&b);
//	//phanso aa = chuyenhssangps(a);
//	//xuatphanso(aa);
//	//phanso bb = chuyenhssangps(b);
//	//xuatphanso(bb);
//	honso t = tinhTongHS(a, b);
//	honso tich = tinhtichHS(a, b);
//	xuathonso(t);
//	xuathonso(tich);
//	//xuathonso(t);
//	//xuathonso(a);
//	//xuathonso(b);
//	return 0;
//}

//5. Viet chuong trinh tao mot mang cac phan so. Viet ham thuc hien cac cong viec sau:
//- Tinh tong tat ca cac phan so (ket qua duoi dang phan so toi gian)
//- Tim phan so lon nhat, phan so nho nhat
//- Sap xep mang tang dan

//#include <stdio.h>
//
//typedef struct phanso {
//    int tu, mau;
//} phanso;
//
//
//void toiGian(phanso* ps) {
//    int a = ps->tu;
//    int b = ps->mau;
//    int ucln;
//
//    // tim UCLN a & b
//    while (b != 0) {
//        int temp = b;
//        b = a % b;
//        a = temp;
//    }
//
//    //
//    ucln = a;
//    ps->tu /= ucln;
//    ps->mau /= ucln;
//}
//
//
//void nhapPhanSo(phanso* ps) {
//    printf("Nhap tu so: ");
//    scanf("%d", &ps->tu);
//    do {
//        printf("Nhap mau so (khac 0): ");
//        scanf("%d", &ps->mau);
//    } while (ps->mau == 0);
//
//    toiGian(ps); 
//}
//
//
//void xuatPhanSo(phanso ps) {
//    printf("%d/%d", ps.tu, ps.mau);
//}
//
///
//phanso tinhTongPhanSo(phanso arr[], int n) {
//    phanso tong = { 0, 1 }; 
//
//    for (int i = 0; i < n; i++) {
//        tong.tu = tong.tu * arr[i].mau + arr[i].tu * tong.mau;
//        tong.mau = tong.mau * arr[i].mau;
//        toiGian(&tong);
//    }
//
//    return tong;
//}
//
//
//phanso timPhanSoLonNhat(phanso arr[], int n) {
//    phanso max = arr[0];
//
//    for (int i = 1; i < n; i++) {
//        if ((double)arr[i].tu / arr[i].mau > (double)max.tu / max.mau) {
//            max = arr[i];
//        }
//    }
//
//    return max;
//}
//
//
//phanso timPhanSoNhoNhat(phanso arr[], int n) {
//    phanso min = arr[0];
//
//    for (int i = 1; i < n; i++) {
//        if ((double)arr[i].tu / arr[i].mau < (double)min.tu / min.mau) {
//            min = arr[i];
//        }
//    }
//
//    return min;
//}
//
//
//void sapXepTangDan(phanso arr[], int n) {
//    for (int i = 0; i < n - 1; i++) {
//        for (int j = i + 1; j < n; j++) {
//            double frac1 = (double)arr[i].tu / arr[i].mau;
//            double frac2 = (double)arr[j].tu / arr[j].mau;
//
//            if (frac1 > frac2) {
//             
//                phanso temp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
//}
//
//int main() {
//    //int n;
//    //printf("Nhap so luong phan so: ");
//    //scanf("%d", &n);
//    int n = 10;
//    phanso arr[10];
//
//    
//    for (int i = 0; i < 10; i++) {
//        printf("Nhap phan so thu %d:\n", i + 1);
//        nhapPhanSo(&arr[i]);
//    }
//
//    
//    phanso tong = tinhTongPhanSo(arr, n);
//
//  
//    phanso max = timPhanSoLonNhat(arr, n);
//    phanso min = timPhanSoNhoNhat(arr, n);
//
//   
//    sapXepTangDan(arr, n);
//
//    printf("Tong tat ca cac phan so: ");
//    xuatPhanSo(tong);
//    printf("\n");
//
//    printf("Phan so lon nhat: ");
//    xuatPhanSo(max);
//    printf("\n");
//
//    printf("Phan so nho nhat: ");
//    xuatPhanSo(min);
//    printf("\n");
//
//    printf("Mang phan so sau khi sap xep tang dan:\n");
//    for (int i = 0; i < n; i++) {
//        xuatPhanSo(arr[i]);
//        printf("\n");
//    }
//
//    return 0;
//}
//6. 
//typedef struct SinhVien {
//	int MaSV;
//	char ten[50];
//	int namSinh;
//	float diemToan, diemLy, diemHoa, diemTrungBinh;
//}sinhvien;
////nhap sinhvien
//void nhapSinhvien(struct SinhVien* sv) {
//	printf("Nhap vao ma so sinh vien: ");
//	scanf("%d", &sv->MaSV);
//	printf("Nhap vao ten sinh vien: ");
//	scanf("%s", &sv->ten);
//	printf("Nhap vao nam sinh: ");
//	scanf("%d", &sv->namSinh);
//	printf("Nhap diem Toan: ");
//	scanf("%f", &sv->diemToan);
//	printf("Nhap diem Ly: ");
//	scanf("%f", &sv->diemLy);
//	printf("Nhap diem Hoa: ");
//	scanf("%f", &sv->diemHoa);
//	sv->diemTrungBinh = (sv->diemToan + sv->diemLy + sv->diemHoa) / 3.0;
//}
//void xuatSinhvien(struct SinhVien sv) {
//	printf("MSSV: %d\n", sv.MaSV);
//	printf("Ten: %s\n", sv.ten);
//	printf("Nam sinh: %d\n", sv.namSinh);
//	printf("Diem Toan: %.2f\n", sv.diemToan);
//	printf("Diem Ly: %.2f\n", sv.diemLy);
//	printf("Diem Hoa: %.2f\n", sv.diemHoa);
//	printf("Diem trung binh: %.2f\n", sv.diemTrungBinh);
//}
////SV co diem trung binh cao nhat
//struct SinhVien MaxAverage(struct SinhVien danhsach[], int n) {
//	struct SinhVien SVMax = danhsach[0];
//	for (int i = 1; i < n; i++) {
//		if (danhsach[i].diemTrungBinh > SVMax.diemTrungBinh) {
//			SVMax = danhsach[i];
//		}
//	}
//	return SVMax;
//}
////sap xep sinh vien theo diem tb tang dan
//void SapxeptangDTB(struct SinhVien danhsach[], int n) {
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (danhsach[i].diemTrungBinh > danhsach[j].diemTrungBinh) {
//				struct SinhVien temp = danhsach[i];
//				danhsach[i] = danhsach[j];
//				danhsach[j] = temp;
// 			}
//		}
//	}
//}
//
////sap xep sv theo diem toan giam dan
//
//void SapxepgiamDiemToan(struct SinhVien danhsach[], int n) {
//	for (int i = 0; i < n; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (danhsach[i].diemToan < danhsach[j].diemToan) {
//				struct SinhVien temp = danhsach[i];
//				danhsach[i] = danhsach[j];
//				danhsach[j] = temp;
//			}
//		}
//	}
//}
//int main()
//{
//	int n = 3;
//	struct SinhVien danhsachSV[3];
//	for (int i = 0; i < n; i++) {
//		printf("Nhap vao thong tin sinh vien thu %d: \n", i + 1);
//		nhapSinhvien(&danhsachSV[i]);
//	}
//	printf("\n\t\t\t\t Danh sach sinh vien \t\t\t\t\t\n");
//	for (int i = 0; i < n; i++) {
//		xuatSinhvien(danhsachSV[i]);
//	}
//	struct SinhVien SVMax = MaxAverage(danhsachSV, n);
//	printf("\n===========================\n");
//	printf("\n Sinh vien co diem trung binh cao nhat: \n");
//	xuatSinhvien(SVMax);
//	printf("\n===========================\n");
//	SapxeptangDTB(danhsachSV, n);
//	printf("\nDanh sach sau khi sap xep sv tang dan theo diem TB: \n");
//	for (int i = 0; i < n; i++) {
//		xuatSinhvien(danhsachSV[i]);
//	}
//	printf("\n===========================\n");
//	SapxepgiamDiemToan(danhsachSV, n);
//	printf("\nDanh sach sinh vien sau khi sap xep giam dan theo diem Toan: \n");
//	for (int i = 0; i < n; i++) {
//		xuatSinhvien(danhsachSV[i]);
//	}
//	return 0;
//}

//PHAN NANG CAO
