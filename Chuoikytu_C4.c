//Bai tap
//1. Nhap vao chuoi ky tu, dem so ky tu co trong chuoi.
#include<stdio.h>
#include<string.h>
int main(){
    int n;
    printf("Nhap so ky tu muon nhap: ");
    scanf("%d", &n);
    char chuoi[n];
    printf("Nhap vao chuoi: \n");
    gets(chuoi);
    printf("Chuoi vua nhap la: %s\n", chuoi);
    return 0;
}