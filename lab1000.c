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
float B15(int ,int);
void bai32();
void bai42();
void bai43();
int findKB42(int,int n,int,int,int);
int demsSo43(int n,int c);
float mainB15(int n,float sum);
void NhapN(int *n)
{
    do
    {
        printf("\n\nNhap so N: ");
        scanf("%d", &*n);
        if (*n <= 0)
        {
            printf("\n\nSo N khong hop le. Vui long nhap N > 0.");
        }
        
    } while (*n <= 0);
    
}

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

bool Perfect(int n)
{
    int i = 1, Sum = 0, Temp = n;
    while (i < n)
    {
        if(n % i == 0)
        {
            Sum += i;
        }
        i++;
    }
    if (Temp == Sum )
    {
        return true;
    } else
    {
        return false;
    }
}

bool Prime(int n)
{
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            return false;
        }
    i++;
    }
    return true;    
}

void Q6()
{
    int n;
    float sum;
    NhapN(&n);
    for (int i = 1; i <= n; i++)
    {
        sum += (float) 1/(i*(i + 1));
    }
    printf("\n\nSum: [%0.2f]", sum);

}

void Q7()
{
    int n;
    float sum;
    NhapN(&n);
    for (int i = 1; i <= n; i++)
    {
        sum += (float) i/(i + 1);
    }
    printf("\n\nSum: [%0.2f]", sum);

}

void Q8()
{
    int n;
    float sum;
    NhapN(&n);
    for (int i = 0; i <= n; i++)
    {
        sum += (float) (2*i + 1)/(2*i + 2);
    }
    printf("\n\nSum: [%0.2f]", sum);

}

void Q9()
{
    int n;
    NhapN(&n);
    printf("\n\n%d! = [%d]", n, factorial(n));
}

void Q10()
{
    int n, x;
    printf("\n\nNhap X: ");
    scanf("%d", &x);
    NhapN(&n);
    printf("\n\n%d^%d = [%0.0lf]", x, n, pow((double) x, (double) n));
}

void Q29()
{
    int n;
    NhapN(&n);
    for (int i = n - 1; i > 0; i--)
    {
        if (n % i == 0 && i % 2 == 1)
        {
            printf("\n\nUoc le lon nhat cua [%d] la [%d]", n, i);
            return;
        }
        
    }
    
}

void Q30()
{
    int n;
    NhapN(&n);
    if (Perfect(n)== true)
    {
        printf("\n\n[%d] la so hoan thien", n);
    } else
    {
        printf("\n\n[%d] khong la so hoan thien", n);
    }
}

void Q31()
{
    int n;
    NhapN(&n);
    if (Prime(n)== true)
    {
        printf("\n\n[%d] la so nguyen to", n);
    } else
    {
        printf("\n\n[%d] khong la so nguyen to", n);
    }
}

void Cau21()
{
    int n, i, s = 0;
    NhapN(&n);
    for (i = 1; i < n; i ++)
    {
        if (n % i == 0)
            s += i;
    }
    printf("Tong tat ca uoc so cua %d la: %d", n, s);
}

void Cau22()
{
    int n, i, p = 1;
    NhapN(&n);
    for (i = 1; i < n; i ++)
    {
        if (n % i == 0)
            p *= i;
    }
    printf("Tich tat ca uoc so cua %d la: %d", n, p);
}

void Cau23()
{
    int n, i, s = 0;
    NhapN(&n);
    for (i = 1; i < n; i ++)
    {
        if (n % i == 0)
            s += 1;
    }
    printf("So luong uoc so cua %d la: %d", n, s);
}

void Cau24()
{
    int n, i;
    NhapN(&n);
    printf("Tat ca uoc so le cua %d la: ", n);
    for (i = 1; i < n; i ++)
    {
        if (n % i == 0 && i % 2 != 0)
            printf("%d ", i);
    }
}

void Cau25()
{
    int n, i, s = 0;
    NhapN(&n);
    for (i = 1; i < n; i ++)
    {
        if (n % i == 0 && i % 2 == 0)
            s += i;
    }
    printf("Tong tat ca uoc so chan cua %d la: %d\n", n, s);
}

void Cau47()
{
    int n, s = 0;
    NhapN(&n);
    printf("Tong cac chu so chan cua %d la: ", n);
    while (n > 0)
    {
        if (n % 10 % 2 == 0)
            s += n % 10;
        n /= 10;
    }
    printf("%d", s);
}

void Cau48()
{
    int n, p = 1;
    NhapN(&n);
    printf("Tich cac chu so le cua %d la: ", n);
    while (n > 0)
    {
        if (n % 10 % 2 != 0)
            p *= n % 10;
        n /= 10;
    }
    printf("%d", p);
}

void Cau49()
{
    int n;
    NhapN(&n);
    printf("Chu so dau tien cua %d la: ", n);
    while (n >= 10)
    {
        n /= 10;
    }
    printf("%d", n);
}

void Cau50()
{
    int n, i = 0, rn = 0;
    NhapN(&n);
    int k = n;
    while (k > 0)
    {
    	k /= 10;
    	i ++;
	}
    printf("Chu so dao nguoc cua %d la: ", n);
    while (n > 0)
    {
    	i --;
        rn += n % 10 * pow(10, i);
        n /= 10;
    }
    printf("%d", rn);
}

int main()
{
    int choice,n;
    do
    {
        
        printf("\n\n -------MENU----------\n\n");
        printf("\n\n01: ");
        printf("\n\n02: ");
        printf("\n\n03: ");
        printf("\n\n04: ");
        printf("\n\n05: "); 
        printf("\n\n06: S = 1/n*(n + 1)");
        printf("\n\n07: S = n/(n + 1)");
        printf("\n\n08: S = (2n + 1)/(2n + 2)");
        printf("\n\n09: S = n!");
        printf("\n\n10: S = x^n");
        printf("\n\n11: Tinh S(n) = 1 + 1 x 2 + 1 x 2 x 3 + ⋯ + 1 x 2 x 3 x ... x n");
        printf("\n\n12: Tinh S(n) = x + x^2 + x^3 + ⋯ + x^n");
        printf("\n\n13: Tinh S(n) = x^2 + x^4 + ⋯ + x^2n");
        printf("\n\n14: Tinh S(n) = x + x^3 + x^5 ... + x^2n+1");
        printf("\n\n15: Tinh S(n) = 1 + 1/(1+ 2)+1/(1+2+3)+ ... + 1/(1+2+...+n)");
        printf("\n\n21: Tinh tong tat ca uoc so cua so nguyen duong n.");
        printf("\n\n22: Tinh tich tat ca uoc so cua so nguyen duong n.");
        printf("\n\n23: Dem so luong uoc so cua so nguyen duong n.");
        printf("\n\n24: Liet ke tat ca uoc so le cua so nguyen duong n.");
        printf("\n\n25: Tinh tong tat ca uoc so chan cua so nguyen duong n.");
        printf("\n\n29: Tim uoc so le lon nhat cua so nguyen duong n.");
        printf("\n\n30: Kiem tra so nguyen duong N co phai so hoan thien hay khong.");
        printf("\n\n31: Kiem tra so nguyen duong N co phai so nguyen to hay khong.");
        printf("\n\n32: Cho so nguyen duong n. Kiem tra so nguyen duong n co phai la so chinh phuong hay khong?");
        printf("\n\n42: Cho n la so nguyen duong. Hay tim gia tri nguyen duong k lon nhat sao cho S(k) < n. Trong do chuoi S duoc dinh nghia nhu sau: S(k)=1+2+3+...+k.");
        printf("\n\n43: Hay Dem so luong chu so cua so nguyen duong n");
        printf("\n\n47: Tinh tong cac chu so chan cua so nguyen duong n");
        printf("\n\n48: Tinh tich cac chu so le cua so nguyen duong n");
        printf("\n\n49: Tim chu so dau tien cua so nguyen duong n");
        printf("\n\n50: Tim chu so dao nguoc cua so nguyen duong n");
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
    
    case 21:
        Cau21();
        break;
    case 22:
        Cau22();
        break;
    case 23:
        Cau23();
        break;
    case 24:
        Cau24();
        break;
    case 25:
        Cau25();
        break;
                
    case 32:
        bai32();
        break;
    case 42:
        bai42();
        break;
    case 43:
        bai43();
        break;

    case 47:
        Cau47();
        break;
    case 48:
        Cau48();
        break;
    case 49:
        Cau49();
        break;
    case 50:
        Cau50();
        break;  
                
    case 6:
        Q6();
        break;

    case 7:
        Q7();
        break;

    case 8:
        Q8();
        break;

    case 9:
        Q9();
        break;

    case 10:
        Q10();
        break;




    case 29:
        Q29();
        break;

    case 30:
        Q30();
        break;

    case 31:
        Q31();
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
    printf("\nS = %f",mainB15(n,0.0));
}
float mainB15(int n,float sum){
    if (n==0) return sum;
    // printf("\n%f",B15(n,0));
    sum+=(float)1/(float)B15(n,0);
    return mainB15(n-1,sum);
}
float B15(int n,int sum){
    if (n == 0) return sum;
    sum+=n;
    return B15(n-1,sum);
}
void bai32(){
    int n,i;
    printf("\nNhap n: ");
    scanf("%d", &n);
    if (sqrt(n)*sqrt(n)==n){
        printf("\nBai 32: Day la so chinh phuong");
    } else{
        printf("\nDay khong phai la so chinh phuong");
    }
}
void bai42(){
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    printf("\n\tBai 42: k = %d",findKB42(n,n,0,1,n));
}
int findKB42(int nA,int n,int sum,int i,int nho){
    // printf("\nNA,N,SUM = %d,%d,%d",n,nA,sum);
    if (n==0){
    if (sum>=nA) return findKB42(nA,nA-i,0,i+1,nA-i);
    if (sum<nA) return nho;
    }
    sum+=n;
    return findKB42(nA,n-1,sum,i,nho);
}
void bai43(){
    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    printf("\nBai 43: %d co %d chu so.",n,demsSo43(n,1));
}
int demsSo43(int n,int c){
    if (n<10) return c;
    c++;
    return demsSo43(n/10,c);
}
