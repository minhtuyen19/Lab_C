// #include <stdio.h>

// int main() {
//    int year;
//    printf("Nhap vao so nam can kiem tra: ");
//    scanf("%d", &year);
// //    year = 2016;
   
//    if (((year % 4 == 0) && (year % 100!= 0)) || (year%400 == 0))
//       printf("%d la mot nam nhuan", year);
//    else
//       printf("%d khong phai la nam nhuan", year);
      
//    return 0;
// }

//Kiem tra tinh cuoc Taxi
// #include<stdio.h>
// #include<conio.h>

// void main(){
//     float totalkm;
//     float cost = 0;
//     printf("Nhap vao so Km: ");
//     scanf("%f", &totalkm);
//     if(totalkm <= 1){
//         cost = totalkm*500;
//     } else if(totalkm <= 0.2 && totalkm > 1){
//         cost = (totalkm-1)*100+1*500;
//     }
//     else{
//            cost = 1*5000 + 29*100 + (totalkm - 30)*3000;
//     }
//     printf("\n So tien phai tra: %0.3f VND", cost);
//     getch();
// }

//=======================1 + 2^2 + ... + n^n
// #include<stdio.h>
// #include<conio.h>
// void main(){
//     int n;
//     int sum = 0;
    
//     printf("Nhap vao n: ");
//     scanf("%d", &n);
//     for(int i = 1; i<=n; i++){
//         int mul = 1;
//         for(int j = 1; j <= i; j++){
//             mul *=i;
//         }
//         sum +=mul;
//     }
//     printf("Ket qua sau khi tinh bieu thuc: %d", sum);
// }

//====================1/2 + 2/3 + 3/4 + ... + n/n+1

// #include<stdio.h>
// #include<conio.h>

// int main()
// {
//     int i, n;
//     float S;
//     S = 0;
//     i = 1;
//     do
//     {
//         printf("\nNhap n: ");
//         scanf("%d", &n);
//         if(n < 1)
//         {
//             printf("\nN phai lon hon hoac bang 1. Xin nhap lai !");
//         }
//     }while(n < 1);

//     while(i <= n)
//     {
//         S = S + (float)i / (i + 1);
//         i++;
//     }
//     printf("\nTong la %f", S);

//     getch();
//     return 0;
// }

//=========================== 1 + 1/2! + 1/3! +...+ 1/n!
// double Tinh(int n)
// {
// 	double s = 0;
// long p = 1;
// 	for (int i = 1; i <= n; i++)
// 	{
// 		p = p * i;
// 		s = s + (double)1 / p;
// 	}
// 	return s;
// }

//=============In ra hinh chu nhat mxn rong va dac============================================
// #include<stdio.h>
// #include<conio.h>

// int main()
// {
//     int i, j, m, n;

//     printf("\nNhap m: ");
//     scanf("%d", &m);

//     // Câu a
//     printf("\nNhap n: ");
//     scanf("%d", &n);

//     // for(i = 1; i <= m; ++i)
//     // {
//     //     for(j = 1; j <= n; ++j) 
//     //     {
//     //         printf("*");
//     //     }
//     //     printf("\n"); //xuong dong khi in xong 1 hang 
//     // }

//     // printf( "\n" );

//     for(i = 1; i <= m; ++i)
//     {
//         for(j = 1; j <= n; ++j) 
//         {
//             if( i == 1 || i == m || j == 1 || j == n )
//             {
//                 printf("*");
//                 if(j == n)
//                 printf( "\n" );
//             }
//             else
//                 printf(" "); 
//         }
//     }
//     // getch();
//     return 0;
// }

//=======================hinh tam giac vuong can dac co do cao h==============
// #include<stdio.h>
// #include<conio.h>

// int main(){
//     int h;
//     printf("Nhap vao kich thuoc h: ");
//     scanf("%d", &h);
//     for(int i = 1; i <= h; i++){
//         for(int j = 1; j<=i; j++){
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }
// //=====================hinh tam giac can rong co do cao h======================
// #include<stdio.h>
// #include<conio.h>
// int main(){
//     int h;
//     printf("Nhap vao kich thuoc h: ");
//     scanf("%d", &h);
//     for(int i = 0; i<=h; i++){
//         for(int j = 1; j<=i; j++){
//             if(j == 1|| j == i|| i == 1||i==h){
//                 printf("*");
//             }else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }
//======================Liet ke n so nguyen to dau tien===================
// #include<stdio.h>
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
//=========================Tim UCLN & BCNN=====================
// #include<stdio.h>
// #include<conio.h>

// int main(){
//     int a, b;
//     printf("Nhap vao a: ");
//     scanf("%d", &a);
//     printf("Nhap vao b: ");
//     scanf("%d", &b);
//     for(int i = a; i>1; i--){
//         if(a%i==0 && b%i==0){
//             printf("UCLN(%d, %d) = %d\n", a,b, i);
//             break;
//         }
//     }
//     for(int j = a; j<a*b;j++){
//         if(j%a==0 && j%b==0){
//             printf("BCNN(%d, %d) = %d\n", a, b, j);
//             break;
//         }
//     }
//     return 0;
// }

//=====================PHAN NANG CAO=================
// //1. mot so hop le
// #include<stdio.h>
// #include<conio.h>
// void main(){
//     int n;
//     int sum;
//     do{
//         printf("Nhap vao n: ");
//         scanf("%d", &n);
//     }while(n<=0);
//     for(int i = 2; i<=n; i++){
//         sum = 1;
//         for(int j = 2; j<= i/2; j++){
//             if(i%j==0){
//                 sum+=j;
//             }
//         }
//         if(sum==i){
//             printf("\n%d",i);
//         }
//     }
// }
//2.Ngay sau ngay hop le
// #include <stdio.h>


// int isLeapYear(int year) {
//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         return 1; 
//     } else {
//         return 0; 
//     }
// }


// int isValidDate(int day, int month, int year) {
//     if (year < 1 || month < 1 || month > 12 || day < 1 || day > 31) {
//         return 0; 
//     }
    

//     if (month == 2) {
//         if (isLeapYear(year)) {
//             return (day <= 29); 
//         } else {
//             return (day <= 28); 
//         }
//     }
    

//     if (month == 4 || month == 6 || month == 9 || month == 11) {
//         return (day <= 30);
//     }
    
//     return 1; 
// }

// int main() {
//     int day, month, year;
    
//     printf("Enter day: ");
//     scanf("%d", &day);
    
//     printf("Enter month: ");
//     scanf("%d", &month);
    
//     printf("Enter year: ");
//     scanf("%d", &year);
    
//     if (isValidDate(day, month, year)) {
//         if (day < 31) {
//             day++;
//         } else if (month < 12) {
//             day = 1;
//             month++;
//         } else {
//             day = 1;
//             month = 1;
//             year++;
//         }
        
//         printf("The day after: %d/%d/%d\n", day, month, year);
//     } else {
//         printf("The date is invalid!.\n");
//     }
    
//     return 0;
// }


//=============================
// #include <stdio.h>

// int isLeapYear(int year) {
//     return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
// }

// int main() {
//     int day, month, year;

//     printf("Enter day: ");
//     scanf("%d", &day);
//     printf("Enter month: ");
//     scanf("%d", &month);
//     printf("Enter year: ");
//     scanf("%d", &year);

//     if (year < 1) {
//         printf("Year invalid.\n");
//         return 1;
//     }

//     if (month < 1 || month > 12) {
//         printf("Month invalid.\n");
//         return 1;
//     }

//     int maxDay;
//     switch (month) {
//         case 2:
//             maxDay = isLeapYear(year) ? 29 : 28;
//             break;
//         case 4:
//         case 6:
//         case 9:
//         case 11:
//             maxDay = 30;
//             break;
//         default:
//             maxDay = 31;
//             break;
//     }

//     if (day < 1 || day > maxDay) {
//         printf("Day is invalid for month and year which are given.\n");
//         return 1;
//     }


//     if (day == maxDay && month == 12) {
//         day = 1;
//         month = 1;
//         year++;
//     } else if (day == maxDay) {
//         day = 1;
//         month++;
//     } else {
//         day++;
//     }

//     printf("The day after: %d/%d/%d\n", day, month, year);

//     return 0;
// }

//4. Ngay thanh nam 2003 hop le
// #include<stdio.h>

// int main() {
//     int day, month, year;
//     printf("Enter day: ");
//     scanf("%d", &day);
//     printf("Enter month: ");
//     scanf("%d", &month);
//     printf("Enter year: ");
//     scanf("%d", &year);

//     if (year == 2003 && month >= 1 && month <= 12) {
//         if (month == 2) {
//             if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//                 if (day >= 1 && day <= 29) {
//                     printf("Day is valid!\n");
//                 } else {
//                     printf("Day is invalid!\n");
//                     return 0;
//                 }
//             } else {
//                 if (day >= 1 && day <= 28) {
//                     printf("Day is valid!\n");
//                 } else {
//                     printf("Day is invalid!\n");
//                     return 0;
//                 }
//             }
//         } else if (month == 4 || month == 6 || month == 9 || month == 11) {
//             if (day >= 1 && day <= 30) {
//                 printf("Day is valid!\n");
//             } else {
//                 printf("Day is invalid!\n");
//                 return 0;
//             }
//         } else {
//             if (day >= 1 && day <= 31) {
//                 printf("Day is valid!\n");
//             } else {
//                 printf("Day is invalid!\n");
//                 return 0;
//             }
//         }
//     } else {
//         printf("Year is invalid!\n");
//         return 0;
//     }
//     int h, q, m, j, k;
//     h = (month + 9) % 12;
//     q = day;
//     m = (month > 2) ? month : month + 12;
//     j = year / 100;
//     k = year % 100;
//     int dayOfWeek = (q + ((13 * h - 1) / 5) + k + (k / 4) + (j / 4) - 2 * j) % 7;
//     printf("%d", dayOfWeek);
//     switch (dayOfWeek) {
//         case 0:
//             printf("Saturday.\n");
//             break;
//         case 1:
//             printf("Sunday.\n");
//             break;
//         case 2:
//             printf("Monday.\n");
//             break;
//         case 3:
//             printf("Tuesday.\n");
//             break;
//         case 4:
//             printf("Wednesday.\n");
//             break;
//         case 5:
//             printf("Thursday.\n");
//             break;
//         case 6:
//             printf("Friday.\n");
//             break;
//     }
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     int ngay, thang, nam;
//     printf("Nhap vao ngay, thang, nam cua nam 2003: ");
//     scanf("%d %d %d", &ngay, &thang, &nam);

//     if (nam != 2003 || thang < 1 || thang > 12 || ngay < 1 || ngay > 31) {
//         printf("Ngay khong hop le.\n");
//     } else {
//         int totalDays = 0;
//         int thangNgay[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//         for (int i = 1; i < thang; i++) {
//             totalDays += thangNgay[i];
//         }
//         totalDays += ngay;

//         // Tính ngày thứ của ngày nhập vào
//         int mocNgay = 3; // Mốc là ngày thứ 4 (tức là 01/01/2003 là thứ 4)
//         int thu = (mocNgay + totalDays - 1) % 7; // Sử dụng % 7 để đưa kết quả về số từ 0 (Chủ Nhật) đến 6 (Thứ 7)

//         switch (thu) {
//             case 0:
//                 printf("Day la Chu Nhat.\n");
//                 break;
//             case 1:
//                 printf("Day la Thu Hai.\n");
//                 break;
//             case 2:
//                 printf("Day la Thu Ba.\n");
//                 break;
//             case 3:
//                 printf("Day la Thu Tu.\n");
//                 break;
//             case 4:
//                 printf("Day la Thu Nam.\n");
//                 break;
//             case 5:
//                 printf("Day la Thu Sau.\n");
//                 break;
//             case 6:
//                 printf("Day la Thu Bay.\n");
//                 break;
//         }
//     }

//     return 0;
// }