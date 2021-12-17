#include <stdio.h>
#include <stdbool.h>




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