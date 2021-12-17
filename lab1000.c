#include <stdio.h>
#include <stdbool.h>
#include <math.h>

void bai11();
long B11(int n,int sum);
long fac(int n);
void bai12();
int B12(int ,int);
void bai13();
int B13(int ,int);
void bai14();
int B14(int ,int);
void bai15();
int B15(int ,int);
int main()
{
    int choice,n;
    do
    {
        printf("\n\nCau 1: Tinh giai thua n");
        printf("\n\nCau 2: Tinh tong le");
        printf("\n\nCau 3: Tinh tich le");
        printf("\n\nCau 4: Tinh tong binh phuong");
        printf("\n\nCau 5: Kiem tra n co toan le");
        printf("\n\nCau 11: Tinh S(n) = 1 + 1 x 2 + 1 x 2 x 3 + ⋯ + 1 x 2 x 3 x ... x n");
        printf("\n\nCau 12: Tinh S(n) = x + x^2 + x^3 + ⋯ + x^n");
        printf("\n\nCau 13: Tinh S(n) = x^2 + x^4 + ⋯ + x^2n");
        printf("\n\nCau 14: Tinh S(n) = x + x^3 + x^5 ... + x^2n+1");
        printf("\n\nCau 15: Tinh S(n) = 1 + 1/(1+ 2)+1/(1+2+3)+ ... + 1/(1+2+...+n)");
        printf("\n\nCau 32: Cho so nguyen duong n. Kiem tra so nguyen duong n co phai la so chinh phuong hay khong?");
        printf("\n\nCau 42: Cho so nguyen duong n. Kiem tra so nguyen duong n có phai la so chinh phuong hay khong?");
        printf("\n\nCau 43: Hay Dem so luong chu so cua so nguyen duong n");
        printf("\n\nNhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice)
    {
    case 1:
        
        break;
    
    case 2:
        
        break;

    case 3:
        
        break;

    case 4:
        
        break;

    case 5:
        
        break;
    case 11:
        bai11();
        break;
    case 12:
        bai12();
        break;
    case 13:
        bai13();
        break;
    case 14:
        bai14();
        break;
    case 15:
        bai15();
        break;
    case 32:
        
        break;
    case 42:
        
        break;
    case 43:
        
        break;

    default:
        printf("\n\nKhong co lua chon nay. Vui long nhap lai");
        break;
    }
    printf("\n\n\n\nBan co muon tiep tuc su dung chuong trinh khong?");
    printf("\n\nYes(1)/No(0)");
    printf("\n\nLua chon cua ban la: ");
    scanf("%d", &choice);
    } while (choice != 0);
    
}

void bai11(){
    int n;
    printf("\nBai11: Nhap n: ");
    scanf("%d", &n);
    printf("\n\tS= %d",B11(n,0));
}
long B11(int n,int sum){
    if (n ==0) return sum;
    sum+=fac(n);
    return B11(n-1,sum);
}
long fac(int n){
    if (n == 0) return 1;
    return n*fac(n-1);
}

void bai12(){
    int n,x;
    printf("\nBai12: Nhap n: ");
    scanf("%d", &n);
    printf("\n\tnhap x: ");
    scanf("%d", &x);
    printf("\nS = %d",B12(n,x));
}
int B12(int n,int x){
    if (n == 0) return 0;
    return pow(x,n)+B12(n-1,x);
}
void bai13(){
    int n,x;
    printf("\nBai13: Nhap n: ");
    scanf("%d", &n);
    printf("\n\tnhap x: ");
    scanf("%d", &x);
    printf("\nS = %d",B13(n,x));
}
int B13(int n,int x){
    if (n == 0) return 0;
    return pow(x,2*n)+B13(n-1,x);
}
void bai14(){
    int n,x;
    printf("\nBai14: Nhap n: ");
    scanf("%d", &n);
    printf("\n\tnhap x: ");
    scanf("%d", &x);
    printf("\nS = %d",B14(n,x));
}
int B14(int n,int x){
    if (n < 0) return 0;
    return pow(x,2*n+1)+B14(n-1,x);
}
void bai15(){
    int n,x;
    printf("\nBai15: Nhap n: ");
    scanf("%d", &n);
    printf("\n\tnhap x: ");
    scanf("%d", &x);
    printf("\nS = %d",B15(n,x));
}
int B15(int n,int x){
    if (n < 0) return 0;
    return pow(x,2*n+1)+B15(n-1,x);
}