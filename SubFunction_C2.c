//=====HAMCON================
//Phan co ban
//1. Nhap so nguyen duong n (n>0). Liet ke tat ca cac so nguyen to nho hon n. 
// #include<stdio.h>
// int checkSNT(int n){
//     if(n<2){
//         return 0;
//     }
//     for(int i = 2; i <=sqrt(n); i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int main(){
//     int n;
//     printf("Nhap vao so nguyen n: ");
//     scanf("%d", &n);
//     printf("%d so nguyen to dau tien la: \n", n);
//     int count = 0;
//     int i = 2;
//     while(count<n){
//         if(checkSNT(i)){
//             printf("%d ", i);
//             count++;
//         }
//         i++;
//     }
// }

// //2. Nhap so nguyen n(n>0). Liet ke n so chinh phuong dau tien
// #include<stdio.h>
// #include<math.h>
// //kiem tra chinh phuong
// int checkChinhPhuong(int n){
//     if(n<4){
//         return 0;
//     }
//     int a = (int)sqrt((float)(n));
//     if(a*a == n){
//         return 1;
//     }
//     return 0;

// }
// int dem(int n){
//     printf("Cac so chinh phuong nho hon n: ");
//     int a = sqrt(n);
//     if(checkChinhPhuong(n)){
//         for(int i = 0; i<a; i++){
//             printf("%d", i*i );
//         }
//     }
//     else{
//         for(int i = 1; i<=a; i++){
//             printf("%d, ", i*i);
//         }
//     }
// }
// int main(){
//     int n;
//     do{
//         printf("Nhap n: ");
//         scanf("%d", &n);
//     }while(n<=0);
//     dem(n);
//     return 0;
// }
//5. Viet chuong trinh nhap 2 so nguyen duong a, b. Tim USCLN va BSCNN cua so nguyen do.
// #include<stdio.h>
// int UCLN(int a, int b){
//     for(int i = a; i>1; i--){
//         if(a%i==0 && b%i==0){
//             return i;
//             break;
//         }
//     }
// }
// int BCNN(int a, int b){
//     for(int j = a; j<a*b;j++){
//         if(j%a==0 && j%b==0){
//             return j;
//             break;
//         }
//     }
// }
// int main(){
//     int a, b;
//     printf("Nhap vao a: ");
//     scanf("%d", &a);
//     printf("Nhap vao b: ");
//     scanf("%d", &b);
//     int giatriUCLN = UCLN(a,b);
//     int giatriBCNN = BCNN(a,b);
//     printf("UCLN(%d, %d) = %d\n", a,b, giatriUCLN);
//     printf("BCNN(%d, %d) = %d\n", a, b, giatriBCNN);
//     return 0;
// }
//4. so hoan thien
// #include <stdio.h>

// //Kiem tra so perfect
// int isPerfectNumber(int num) {
//     int sum = 0;
//     for (int i = 1; i <= num / 2; i++) {
//         if (num % i == 0) {
//             sum += i;
//         }
//     }
//     return sum == num;
// }

// int main() {
//     int n;
//     int count = 0;

// 
//     do {
//         printf("Enter number n: ");
//         scanf("%d", &n);
//     } while (n <= 0);

//    
//     for (int i = 1; i < n; i++) {
//         if (isPerfectNumber(i)) {
//             count++;
//         }
//     }

//
//     printf("Have %d perfect number less than %d.\n", count, n);

//     return 0;
// }

//6. Nhap so nguyen n gom k chu so (0<k<=5), dem xem n bao nhieu so le va bao nhieu so chan
// #include<stdio.h>
// #include<conio.h>

// int checksochanle(int n){
//     if(n%2==0){
//         return 1;
//     }
//     return 0;
// }
// int demchan(int n){
//     int countchan = 0;
//     while(n>0){
//         int number = n%10;
//         if(checksochanle(number)){
//             countchan++;
//         }
//         n/=10;
//     }
//     return countchan;
// }
// int demle(int n){
//     int countle = 0;
//     while(n>0){
//         int number = n%10;
//         if(checksochanle(number)==0){
//             countle++;
//         }
//         n/=10;
//     }
//     return countle;
// }
// int main(){
//     int n;
//     printf("Nhap vao n: ");
//     scanf("%d", &n);
//     int sochan = demchan(n);
//     int sole = demle(n);
//     printf("So so chan la: %d trong %d\n", sochan, n);
//     printf("So so le la: %d trong %d\n", sole, n);
//     return 0;
// }
//7. Viet chuong trinh nhap so nguyen duong n gom k chu so, dem xem n co bao nhieu so nguyen to
// #include<stdio.h>
// #include<conio.h>
// #include<math.h>
// int checkSNT(int n){
//     if(n<2){
//         return 0;
//     }
//     for(int i = 2; i <=sqrt(n); i++){
//         if(n%i==0){
//             return 0;
//         }
//     }
//     return 1;
// }
// int demSNT(int n){
//     int dem = 0;
//     while(n>0){
//         int number = n%10;
//         if(checkSNT(number)){
//             dem++;
//             // printf("dem %d", dem);
//         }
//         n /=10;
//     }
//     return dem;
// }
// int main(){
//     int n;
//     printf("Nhap vao n: ");
//     scanf("%d", &n);
//     int dem = demSNT(n);
//     printf("So so nguyen to: %d trong so %d ", dem, n);
//     return 0;
// }
//8. Viet chuong trinh nhap so nguyen duong n gom k chu so. (0<k<=5)
// #include<stdio.h>
// #include<conio.h>
// int tongUC(int n){
//     int sum = 0;
//     for(int i = 1; i <=n; i++){
//         if(n%i==0){
//             sum = sum+i;
//         }
//     }
//     return sum;
// }
// int main(){
//     int n;
//     printf("Nhap vao n: ");
//     scanf("%d", &n);
//     int tong=tongUC(n);
//     printf("Tong nhan duoc: %d cua so %d ",tong, n);
//     return 0;
// }
//=====================
//Phan nang cao
//1. Viet chuong trinh  nhap vao so nguyen n gom k chu so, sau do nhap 1 so nguyen x, tim vi tri xuat hien co gia tri x trong n

// #include<stdio.h>
// #include<conio.h>
// int findIndex(int n, int x){
//     int index = 0;
//     while(n>0){
//         int number = n%10;
//         if(number == x){
//             return index;
//         }
//         n/=10;
//         index++;
//     }
//     return -1;
// }
// int main(){
//     int n, x;
//     printf("Enter n: ");
//     scanf("%d", &n);
//     //kiem tra xem n phai so nguyen duong 
//     if(n<=0){
//         printf("Please enter number.\n");
//         return 1;
//     }
//     printf("Enter x: ");
//     scanf("%d", &x);
//     int index = findIndex(n, x);
//     if(index!=-1){
//         printf("Number %d appear at index %d in %d number.\n", x, index, n);
//     } else{
//         printf("Number %d not appear in %d number.\n", x, n);
//     }
//     return 0;
// }
//
//2. Viet chuong trinh nhap so nguyen n gom k chu so (0<k<=5), kiem tra xem cac chu so cua n co duoc sap thu tu khong.
// #include<stdio.h>
// #include<conio.h>
// int Checkorder(int n){
//     int prenumber = n%10;
//     n/=10;
//     while(n>0){
//         int number = n%10;
//         if(number>prenumber){
//             return 0;
//         }
//         prenumber = number;
//         n/=10;
//     }
//     return 1;
// }
// int main(){
//     int n;
//     printf("Nhap vao so nguyen n: ");
//     scanf("%d", &n);
//     if(n<=0||n>99999){
//         printf("Vui long nhap lai!\n");
//         return 1;
//     }
//     int order = Checkorder(n);
//     if(order){
//         printf("Cac chu so cua %d duoc sap xep tang dan.\n", n);
//     }else{
//         printf("Cac chu so cua %d khong duoc sap xep tang dan.\n", n);
//     }
//     return 0;
// }

//3. Viet chuong trinh nhap 2 so a, b sao cho: so lon nhat trong 2 so phai la mot so duong va chia het cho 7. 
//Neu nhap sai phai yeu cau nhap lai den khi dung.
// #include<stdio.h>
// #include<conio.h>

// int Checknumber(int a, int b){
//     int max = 0;
//     if(a>b){
//         max = a;
//     }
//     else{
//         max = b;
//     }
//     if(max>0 && max%7==0){
//         return 1;
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     int a, b;
//     while(1){
//     printf("Nhap vao so a: ");
//     scanf("%d", &a);
//     printf("Nhap vao so b: ");
//     scanf("%d", &b);
//     if(Checknumber(a, b)){
//         printf("Hai so %d va %d thoa man dieu kien!\n", a, b);
//         break;
//     }
//     else{
//         printf("Hai so khong thoa man dieu kien! Hay nhap lai.\n");
//     }
// }
// return 0;
// }
//4. Viet chuong trinh nhap so nguyen duong n gom k chu so (0<k<=5), tinh gia tri trung binh cac chu so chan trong n
// #include<stdio.h>
// #include<conio.h>
// int TinhTB(int n){
//     int sum = 0;
//     int dem = 0;
//     while(n>0){
//         int number = n%10;
//         if(number%2 == 0){
//             sum +=number;
//             dem++;
//         }
//         n/=10;
//     }
//     return (sum/dem);
// }
// int main(){
//     int n;
//     while(1){
//     printf("Nhap vao so n: ");
//     scanf("%d", &n);
//     if(n>0 && n<=999999){
//         int ketqua = TinhTB(n);
//         printf("Tong trung binh cac so chan la: %d ", ketqua);
//         break;
//     }
//     else{
//         printf("So n khong hop le, vui long nhap lai!\n");
//     }
//     }
//     return 0;
// }



//4. Viết chương trình in ra màn hình ngày/tháng/năm của ngày hiện tại, cho phép sử dụng các phím mũi tên lên, xuống để tăng hoặc giảm một ngày.
// #include <stdio.h>
// #include <conio.h>

// 
// void printDate(int day, int month, int year) {
//     printf("Ngay/Thang/Nam hien tai: %02d/%02d/%04d\n", day, month, year);
// }

// // Kiem tra nam nhuan
// int isLeapYear(int year) {
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         return 1;
//     } else {
//         return 0;
//     }
// }

// int main() {
//     int day, month, year;
//     int ch;

//    
//    
//     day = 7;   
//     month = 10;
//     year = 2023; 

//     while (1) {
//        
//         system("cls");

//       
//         printDate(day, month, year);
//         printf("Su dung cac phim mui ten len/xuong de tien hoac lui ngay.\n");
//         printf("Nhan 'q' de thoat.\n");

//        
//         ch = _getch();

//         if (ch == 224) { // Neu la mui ten
//             ch = _getch(); //Doc ky tu tiep theo
//             if (ch == 72) { // mui ten len
//                 day++;
//             } else if (ch == 80) { // mui ten xuong
//                 day--;
//             }
//         } else if (ch == 'q' || ch == 'Q') { 
//             break;
//         }

//         
//         int maxDay = 31; // 

//         
//         if (month == 2 && isLeapYear(year)) {
//             maxDay = 29;
//         } else if (month == 2) {
//             maxDay = 28;
//         } else if (month == 4 || month == 6 || month == 9 || month == 11) {
//             maxDay = 30;
//         }

//         if (day < 1) {
//            
//             month--;
//             if (month < 1) {
//                
//                 year--;
//                 month = 12;
//             }
//            
//             day = maxDay;
//         } else if (day > maxDay) {
//           
//             month++;
//             if (month > 12) {
//               
//                 year++;
//                 month = 1;
//             }
//    
//             day = 1;
//         }
//     }

//     return 0;
// }