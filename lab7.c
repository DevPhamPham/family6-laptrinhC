#include <stdio.h>
#include <stdbool.h>
#define max 100


void bai2();
int BinarySearch(int x,int a[max],int n);
int main()
{
    int choice,n;
    do
    {
        printf("\n\nCau 1: Tinh giai thua n");
        printf("\n\nCau 2: Implement the binary search algorithm.");
        printf("\n\nCau 3: Tinh tich le");
        printf("\n\nCau 4: Tinh tong binh phuong");
        printf("\n\nCau 5: Kiem tra n co toan le");
        printf("\n\nNhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice)
    {
    case 1:
        
        break;
    
    case 2:
        bai2();
        break;

    case 3:
        
        break;

    case 4:
        
        break;

    case 5:
        
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

void bai2(){
    int a[max],n,x;
    printf("\n Nhap n: ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++) {
        printf("\nNhap phan tu thu %d: ",i);
        scanf("%d",&a[i]);
    }
    printf("\nNhap phan tu can tiem kiem: ");
    scanf("%d",&x);
    printf("\nPhan tu %d nam o vi tri %d\n",x,BinarySearch(x,a,n));
}
int BinarySearch(int x,int a[max],int n){
    int left=0,right=n-1;
    while (left<=right) {
        int mid = (left+right)/2;
        if (x==a[mid]){
            return mid;
        } else if (x<a[mid]){
            right=mid-1;
        } else {
            left=mid+1;
        }
    }
    return -1;
}