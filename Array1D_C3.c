// #include<stdio.h>
// #include<conio.h>
// void main(){
//     int a[10], i;
//     int *p;
//     for(i = 0; i<10; i++){
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
//     p = a;
//     printf("Noi dung mang vua nhap: \n");
//     for(int i = 0; i< 10; i++){
//         printf("%d ", *(p+i));
//     }
// }

//Bai tap nhap xuat can ban
//1.Khoi tao cac gia tri 0 cho mang 1 chieu vs n so nguyen dau vao
// #include<stdio.h>
// #include<conio.h>
// void main(){
//     int n;
    
//     printf("Nhap vao so phan tu trong mang: ");
//     scanf("%d", &n);
//     int a[n];
//     for(int i = 0; i< n; i++){
//         a[i] = 0;
//     }
//     printf("Mang duoc khoi tao voi gia tri 0: \n");
//     for(int i = 0; i< n; i++){
//         printf("a[%d] = %d\n", i, a[i]);
//     }

// }
//2. Viet chuong trinh nhap so thuc va xuat ra cac phan tu am trong mang
// #include<stdio.h>
// #include<conio.h>
// void main(){
//     int n;
//     printf("Nhap vao so phan tu trong mang: ");
//     scanf("%d", &n);
//     float a[n];
//     for(int i = 0;i< n; i++){
//         printf("a[%d] = ", i);
//         scanf("%f", &a[i]);
//     }
//     printf("In ra cac so am trong day so thuc: \n");
//     for(int i=0;i<n; i++){
//         if(a[i]<0){
//             printf("a[%d] = %f \n", i, a[i]);
//         }
//     }
// }

//6. mang 1 chieu va xuat ra cac so nguyen to
// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// int checkSNT(int a){
//     if(a<2){
//         return 0;
//     }
//     for(int i= 2; i<= sqrt(a); i++){
//         if(a%i==0){
//             return 0;
//         }
//     }
//     return 1;

// }
// int main(){
//     int n;
//     printf("Nhap vao so phan tu trong mang: ");
//     scanf("%d", &n);
//     int a[n];
//     for(int i = 0; i< n; i++){
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
//     printf("In ra cac so nguyen to duoc kiem tra trong mang: \n");
//     for(int i =0; i< n; i++){
//         if(checkSNT(a[i])){
//             printf("a[%d] = %d\n", i, a[i]);
//         }
//     }
//     return 0;
// }

//2.Sap xep
// #include<stdio.h>

// void hoanvi(int *a, int *b){
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }
// void Decreeorder(int arr[], int n){
//     for(int i = 0; i<n; i++){
//         for(int j = i+1; j<n; j++){
//             if(arr[i]<arr[j]){
//                 hoanvi(&arr[i], &arr[j]);
//             }
//         }
//     }
//     printf("Mang sau khi duoc sap xep giam dan: \n");
//     for(int i = 0; i< n;i++){
//         printf("a[%d] = %d \n", i, arr[i]);
//     }
// }
// int main(){
//     int n;
//     printf("Nhap vao so luong phan tu cua mang: ");
//     scanf("%d", &n);
//     int a[n];
//     for(int i = 0; i< n; i++){
//         printf("a[%d] = ", i );
//         scanf("%d", &a[i]);
//     }
//     Decreeorder(a, n);
//     return 0;

// }

//3. sap xep tang dan 1 mang vs cac so nguyen to
// #include<stdio.h>
// #include<math.h>

// void hoanvi(int *a, int *b){
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }
// int CheckSNT(int a){
//     if(a<2){
//         return 0;
//     }
//     for(int i = 2; i<sqrt(a); i++){
//         if(a%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// void SapxepSNT(int a[], int n){
//     for(int i = 0; i< n; i++){
//         for(int j = i+1; j<n;j++){
//             if(CheckSNT(a[i]) && CheckSNT(a[j])){
//                 if(a[i]>a[j]){
//                     hoanvi(&a[i], &a[j]);
//                 }
//             }
//         }
//     }
//     printf("Mang sau khi sap xep: \n");
//     for(int i = 0;i< n; i++){
//         printf("a[%d]= %d \n", i, a[i] );
//     }
// }
// void main(){
//     int n;
//     printf("Nhap vao so phan tu trong mang: ");
//     scanf("%d", &n);
//     int a[n];
//     for(int i =0; i< n; i++){
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
//     SapxepSNT(a, n);
// }

//4. Sap xep phan tu chan nam ben phai theo thu tu tang dan va phan tu le nam ben trai theo thu tu giam dan

// //5. Sap xep phan tu am nam ben phai theo thu tu tang dan va phan tu duong nam ben trai theo thu tu giam dan
// #include<stdio.h>
// #include<conio.h>

// void swap(int *a, int *b){
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }
// void sortNeg(int a[], int n){
//     for(int l = 0; l< n; l++){
//         for(int i = l+1; i<n; i++){
//             if(a[l]<a[i]){
//                 swap(&a[l], &a[i]);
//             }
//         }
//     }
// }
// void sortPos(int a[], int n){
//     for(int r = n-1; r>0; r--){
//         for(int j = 0; j<r; j++){
//             if(a[j] > a[j+1]){
//                 swap(&a[j], &a[j+1]);
//             }
//         }
//     }
// }
// void sortNegPos(int a[], int n){
//     sortNeg(a, n);
//     sortPos(a, n);
// }
// int main(){
//     int n;
//     printf("Nhap vao so luong phan tu trong mang: ");
//     scanf("%d", &n);
//     int a[n];
//     for(int i =0; i< n; i++){
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
//     sortNegPos(a, n);
//     printf("Mang sau khi sap xep: \n");
//     for(int i = 0; i< n; i++){
//         printf("a[%d] = %d \n", i, a[i]);
//     }
//     return 0;
// }
//PHAN NANG CAO
//A. Xoa
//1. xoa o vi tri le
// #include<stdio.h>
// #include<conio.h>
// void Xoaphantule(int a[], int *n){
//     int index = 0;
//     for(int i = 0; i< *n; i++){
//         if(i%2==0){
//             a[index] = a[i];
//             index++;
//         }
//     }
//     *n=index;
// } 
// int main(){
//     int n;
//     printf("Nhap vao so phan tu trong mang: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("Nhap cac phan tu trong mang: \n");
//     for(int i = 0; i< n; i++){
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
//     Xoaphantule(a, &n);
//     printf("Mang sau khi xoa phan tu o vi tri le: \n");
//     for(int i = 0;i<n; i++){
//         printf("a[%d] = %d \n", i, a[i]);
//     }
//     return 0;
// }
//2. Xoa co gia tri lon nhat trong mang
// #include<stdio.h>
// #include<conio.h>
// int MaxNumber(int a[], int n){
//     int max = a[0];
//     for(int i =0; i<n; i++){
//         if(max<a[i]){
//             max = a[i];
//         }
//     }
//     return max;
// }
// void deleteMax(int a[], int *n){
//     int index = 0;
//     int max = MaxNumber(a, *n);
//     for(int i = 0; i< *n; i++){
//         if(a[i]!=max){
//             a[index] = a[i];
//             index++;
//         }
//     }
//     *n = index;
// }
// int main(){
//     int n;
//     printf("Nhap vao so phan tu trong mang: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("Nhap cac phan tu trong mang: \n");
//     for(int i = 0; i< n; i++){
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
// }
//3. Nhap vao gia tri X. Viet ham xoa tat ca cac gia tri co phan tu nho hon X
// #include<stdio.h>
// #include<conio.h>
// void XoanhohonX(int a[], int *n, int x){
//     int index = 0;
//     for(int i = 0; i< *n; i++){
//         if(a[i]>=x){
//             a[index] = a[i];
//             index++;
//         }
//     }
//     *n = index;
// }
// int main(){
//     int n;
//     printf("Nhap vao so phan tu trong mang: ");
//     scanf("%d", &n);
//     int a[n];
//     printf("Nhap cac phan tu trong mang: \n");
//     for(int i = 0; i< n; i++){
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
//     int x;
//     printf("Nhap vao gia tri dieu kien xoa x: ");
//     scanf("%d", &x);
//     XoanhohonX(a, &n, x);
//     printf("Ket qua sau khi xoa: ");
//     for(int i = 0;i< n; i++){
//         printf("a[%d] = %d \n", i, a[i]);
//     }
//     return 0;
// }

//4. Nhap vao gia tri X. Viet ham xoa phan tu co gia tri gan X nhat
// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>

// int FindNearest(int a[], int n, int x){
//     int hieu0 = abs(a[0]-x);
//     int x1 = a[0];
//     for(int i = 0;i< n;i++){
//         int hieu1 = abs(a[i]-x);
//         if(hieu1<hieu0){
//             hieu0 = hieu1;
//             x1 = a[i];
//         }
//     }
//     return x1;
// }
// void deleteNearest(int a[], int *n, int x){
//     int x1 = FindNearest(a, *n, x);
//     int index = 0;
//     for(int i = 0;i< *n; i++){
//         if(a[i] != x1){
//             a[index] = a[i];
//             index++;
//         }
//     }
//     *n = index;
// }
// int main(){
//     int arr[] = {12, 3, 4, 15, 8, 21, 90, 32};
//     int n = sizeof(arr)/sizeof(int);
//     printf("Mang truoc khi xoa: ");
//     for(int i = 0; i<n;i++){
//         printf("a[%d] = %d \n", i, arr[i]);
//     }
//     int x;
//     printf("Nhap vao phan tu x muon xoa: ");
//     scanf("%d", &x);
//     deleteNearest(arr, &n, x);
//     printf("Mang sau khi xoa la: \n");
//     for(int i = 0; i< n; i++){
//         printf("a[%d] = %d \n", i, arr[i]);
//     }
//     return 0;
    
// }
//PHAN III
//1. Viet ham chen phan tu co gia tri X vao vi tri dau tien
// #include <stdio.h>

// void chenX(int a[], int *n, int x) {
//     int index = 0;
//     for (int i = *n; i > 0; i--) {
//         a[i] = a[i - 1];
//     }
//     a[index] = x;
//     (*n)++;
// }

// int main() {
//     int n;
//     printf("Nhap vao so phan tu trong mang: ");
//     scanf("%d", &n);
//     int a[n + 1];  // Increase the array size by 1
//     for (int i = 0; i < n; i++) {
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
//     int x;
//     printf("Nhap vao gia tri x: \n");
//     scanf("%d", &x);
//     chenX(a, &n, x);
//     for (int i = 0; i < n; i++) { // Use n instead of n+1
//         printf("a[%d] = %d \n", i, a[i]);
//     }
//     return 0;
// }

//2. viet chen phan tu co gia tri vao phia sau phan tu co gia tri lon nhat trong mang
// #include<stdio.h>
// #include<conio.h>
// int timMax(int a[], int n){
//     int max = a[0];
//     for(int i = 1; i< n; i++){
//         if(a[i]>max){
//             max = a[i];
//         }
//     }
//     return max;
// }
// void insertAfterMax(int a[], int *n, int x){
//     int max = timMax(a, *n);
//     for(int i = 0; i< *n; i++){
//         if(a[i]==max){
//             for(int j = *n; j>i;j--){
//                 a[j] = a[j-1];
//             }
//              a[i+1] = x;
//              (*n)++;
//              break;
//         }
//     }
// }
// int main(){
//     int n;
//     printf("Nhap vao so phan tu trong mang: ");
//     scanf("%d", &n);
//     int a[n];  // Increase the array size by 1
//     for (int i = 0; i < n; i++) {
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
//     int x;
//     printf("Nhap vao gia tri x: \n");
//     scanf("%d", &x);
//     insertAfterMax(a, &n, x);
//     for (int i = 0; i < n; i++) { // Use n instead of n+1
//         printf("a[%d] = %d \n", i, a[i]);
//     }
//     return 0;
// }
//3. Chen phan tu co gia tri X vao truoc phan tu co so nguyen to dau tien trong mang.
// #include<stdio.h>
// #include<conio.h>
// #include<math.h>

// int CheckSNT(int a){
//     if(a<2){
//         return 0;
//     }
//     for(int i = 2; i<sqrt(a); i++){
//         if(a%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }

// void insertSNT(int a[], int *n, int x){
//     int i;
//     for(i = 0;i< *n; i++){
//         if(CheckSNT(a[i])){
//             break;
//         }
//     }
//     for(int j = *n; j>i; j--){
//         a[j] = a[j-1];
//     }
//     a[i] =x;
//     (*n)++;
// }
// int main(){
//     int n;
//     printf("Nhap vao so phan tu trong mang: ");
//     scanf("%d", &n);
//     int a[n];  
//     for (int i = 0; i < n; i++) {
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
//     int x;
//     printf("Nhap vao gia tri x: \n");
//     scanf("%d", &x);
//     insertSNT(a, &n, x);
//     for (int i = 0; i < n; i++) { 
//         printf("a[%d] = %d \n", i, a[i]);
//     }
//     return 0;
// }
//4. Chen phan tu X sau tat ca cac phan tu co gia tri chan trong mang
// #include<stdio.h>
// #include<conio.h>

// void chensausochan(int a[], int *n, int x){
//   int i, j;

//     for (i = 0; i < *n; i++) {
//         if (a[i] % 2 == 0) {
//             // Dịch chuyển mảng sang phải để tạo chỗ trống cho X
//             for (j = *n; j > i; j--) {
//                 a[j] = a[j - 1];
//             }

//             // Chèn phần tử x vào vị trí sau phần tử chẵn
//             a[i + 1] = x;
//             (*n)++; // Tăng kích thước mảng
//             i++; 
//         }
//     }
// }
// int main(){
//     int n;
//     printf("Nhap vao so phan tu trong mang: ");
//     scanf("%d", &n);
//     int a[n];  
//     for (int i = 0; i < n; i++) {
//         printf("a[%d] = ", i);
//         scanf("%d", &a[i]);
//     }
//     int x;
//     printf("Nhap vao gia tri x: \n");
//     scanf("%d", &x);
//     chensausochan(a, &n, x);
//     for (int i = 0; i < n; i++) { 
//         printf("a[%d] = %d \n", i, a[i]);
//     }
//     return 0;
// }

//PHAN IV tach mang

//1. tach mot mang so nguyen thanh 2 mang a,b sao cho a chua toan so le, b chua toan so chan

// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int n;
//     printf("Nhap vao so phan tu trong mang: ");
//     scanf("%d", &n);
//     int arr[n], a[n], b[n];
//     int a_index = 0, b_index = 0;
//     for(int i = 0; i<n; i++){
//         printf("a[%d] = ", i);
//         scanf("%d",&arr[i]);
        
//         if(arr[i]%2==0){
//             b[b_index] = arr[i];
//             b_index++;
//         }
//         else{
//             a[a_index] = arr[i];
//             a_index++;
//         }
//     } 
//     printf("Mang cac so le a: \n");
//     for(int i =0; i<a_index; i++){
//         printf("a[%d] = %d \n", i, a[i]);
//     }
//     printf("\n");
//     printf("Mang cac so chan b: \n");
//     for(int i = 0; i<b_index; i++){
//         printf("b[%d] = %d \n", i, b[i]);
//     }
//     return 0;
// }