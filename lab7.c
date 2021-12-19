#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>
#define MAX 30

void XuatMang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", a[i]);
    }
    
}

void NhapMang(int a[], int *n)
{
    int min, max;
    do
    {
        printf("\n\nNhap so phan tu cua mang: ");
        scanf("%d", &*n);
        if (*n < 1 || *n > MAX)
        {
            printf("\n\nNhap sai. Vui long nhap lai.");
        }
        
    } while (*n < 1 || *n > MAX);

    printf("\n\nNhap khoang random: ");
    printf("\n\nMin: ");
    scanf("%d", &min);
    printf("\n\nMax: ");
    scanf("%d", &max);

    for (int i = 0; i < *n; i++)
    {
        a[i] = rand() % (max - min + 1) + min ;
    }
    printf("\n\nMang da nhap:\n");
    XuatMang(a, *n);
}

void SelectionSort(int a[], int n)
{
    int temp, max, start;
    for (int start = 0; start < n - 1; start++)
    {
        max = start;
        for (int i = start + 1; i < n; i++)
        {
            if (a[max] < a[i])
            {
                max = i;
            }
        }
        temp = a[start];
        a[start] = a[max];
        a[max] = temp;
    }
    printf("\n\nMang sau khi sap xep:\n");
    XuatMang(a, n);
}

void Q3()
{
    int a[MAX], n;
    NhapMang(a, &n);
    SelectionSort(a, n);
}

int main()
{
    srand(time(NULL));
    int choice;
    do
    {
        printf("\n\nCau 1: ");
        printf("\n\nCau 2: ");
        printf("\n\nCau 3: Implement the selection sort algorithm for sorting a list in descendent list. ");
        printf("\n\nCau 4: ");
        printf("\n\nNhap lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice)
    {
    case 1:
        
        break;
    
    case 2:
        
        break;

    case 3:
        Q3();
        break;

    case 4:
        
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