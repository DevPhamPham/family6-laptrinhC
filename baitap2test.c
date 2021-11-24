#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define MAX 100
#define SIZE 10

//Hello
// khoaaaaaa
void Continues(int *z)
{
    printf("\nBan co muon tiep tuc? (yes(1)/no(0):");
    scanf("%d", &*z);
    if (*z == 0)
    {
            printf("\nbyebye\n\n");

    }
}

void NhapSo(int *n)
{
    do
    {
        printf("\n\nNhap so n: ");
        scanf("%d",&*n);
        if (*n <= 0 || *n > MAX)
        {
            printf("\n\nNhap sai. Vui long nhap lai");
        }

    } while (*n <= 0 || *n > MAX);

}

void XuatMang(int a[], int n)
{
    int i = 0;

    printf("\n\nMang: ");

    while (i < n)
    {
        printf("\t%d", a[i]);
        i++;
    }

}

// Hàm này để nhập mảng thủ công bằng tay. Có sử dụng thêm hàm XuatMang
void NhapMangThuCong(int a[], int n)
{
    int i = 0;

    while (i < n)
    {
        printf("\n\nNhap phan tu thu a[%d] : ",i);
        scanf("%d",&a[i]);
        i++;
    }

    XuatMang(a,n);
}

// Hàm này dùng để nhập mảng tự động
void NhapMangTuDong(int a[], int n)
{
    int min, max, temp, i = 0;

    printf("\n\nGia tri nho nhat");
    scanf("%d",&min);
    printf("\n\nGia tri lon nhat");
    scanf("%d",&max);
    printf("\n\nMang da nhap: ");

    // Trong trường hợp người dùng nhập min > max thì ta sẽ đổi 2 giá trị này cho nhau.
    if (min > max)
    {
        temp = min;
        min = max;
        max = temp;
    }


    while (i < n)
    {
        a[i] = rand()%(max - min + 1) + min;
        printf("\t%d",a[i]);
        i++;
    }


}

//Hàm này để nhập mảng và cho người dùng lựa chọn nên chọn cách nhập nào
void NhapMang(int a[], int n)
{
    int choice;

    do
    {
        printf("\n\nBan muon nhap mang thu cong hay tu dong");
        printf("\n\nThu cong        Phim 0");
        printf("\n\nTu dong         Phim 1");
        printf("\n\nLua chon cua ban la: ");
        scanf("%d",&choice);

        switch (choice)
        {
        case 0:
            NhapMangThuCong(a,n);
            break;

        case 1:
            NhapMangTuDong(a,n);
            break;

        default:
            printf("\n\nKhong co chuc nang nay. Vui long nhap lai.");
            break;
    }
    } while (choice != 0 && choice != 1);


}

// Tạo một mảng sao chép.
void copyMang(int a[], int b[], int n)
{
    // int i = 0;
    // while (i < n)
    // {
    //     b[i] = a[i];
    //     i++;
    // }

}

void NhapHangCot(int *ca, int *ra, int *cb, int *rb)
{
    do
    {
        printf("\n\nNhap so cot cua mang a: ");
        scanf("%d",&*ca);
        printf("\n\nNhap so hang cua mang a: ");
        scanf("%d",&*ra);
        printf("\n\nNhap so cot cua mang b: ");
        scanf("%d",&*cb);
        printf("\n\nNhap so hang cua mang b: ");
        scanf("%d",&*rb);
        if(*ca < 0 || *ra < 0 || *cb < 0 || *rb < 0)
        {
            printf("\n\nSo hang va so cot phai la so duong. Vui long nhap lai");
        }
    } while (*ca < 0 || *ra < 0 || *cb < 0 || *rb < 0);
}

void NhapMang2chieu(int c[][MAX], int ca, int ra)
{
    int i = 0;
    printf("\n\nNhap mang 2 chieu:");
    while (i < ra)
    {
        int j = 0;
        while (j < ca)
        {
            printf("\n\nNhap phan hang [%d] cot [%d]", i, j);
            scanf("%d",&c[i][j]);
            j++;
        }
        i++;
    }

}

void NhapK(int *k)
{
	// do
	// {
	// 	printf("\n\nNhap k:");
	// 	scanf("%d",&*k);
	// 	if(*k<0)
	// 		printf("Sai, nhap lai.\n");
	// }
	// while(*k<0);
}
void Q1()
{
    int k;
    NhapK(&k);
    a1(k);
    b1(k);
    c1(k);
    d1(k);
    e1(k);
}

void Q2(int a[],int n )
{
    int max = a[0];
    printf("\nQuestion 2:");
	for(int i= 1; i< n; i++)
			if(max < a[i]) max = a[i];
    printf("\nMaximum number is : %d ",max);
}

void Q3(int a[], int n)
{
    int min = a[0];
    printf("\nQuestion 3:");
	for(int i= 1; i< n; i++)
			if(min > a[i]) min = a[i];
    printf("\nMinimum number is : %d ",min);
}

void Q4(int a[], int n)
{
    char x[SIZE], x1[SIZE];
    printf("nhap chuoi can xu li:");
    fgets(x, SIZE, stdin);
    int dai = strlen(x);
    printf("mang vua nhap la:%s\n", x);

    printf("mang sau khi xoa khoang trang:%s\n", delete_space(x, x1));

    return 0;
}
char *delete_space(char *str, char *ketqua)
{
    int pos = 0;
    const int len = strlen(str);
    if (str[0]!=' '){
        ketqua[pos++] = str[0]-32;
    }
    for (int i = 1; i < len; i++)
    {
        char c = str[i];
        if (c == ' ' && str[i + 1] == ' ')
        {
            continue;
        }
        if (str[i - 1] == ' ' && c != ' ' && i < len - 1)
            ketqua[pos++] = c - 32;
        else
        {
            char a= tolower(c);
            ketqua[pos++] = a;
        }
    }
    return ketqua;
}
void Q5(int a[], int n)
{
    int sum = 0;
    for(int i = 0;i<= n;i++){
            if (a[i] < 0){
                sum = sum + a[i];
            }
    }
    printf("\nSum all non-positive numbers : %d",sum);
}

void Q6(int a[], int n)
{
    int sum = 0;
    for(int i = 0;i< n;i++)
    {
            if (a[i] % 2 == 0){
            sum += a[i];
            }
    }
    printf("\nSum all even numbers : %d",sum);
}

void Q7(int a[], int n)
{
    printf("\nQuestion 7:");
    for(int i = 0; i < n/2 ; i++)
    {
        int t;
        t = a[i];
        a[i] = a[n- i - 1];
        a[n-i -1] = t;
    }
    printf("\nNew Array :");
    for(int i = 0; i < n; i++){
        printf("\t%d",a[i]);
    }
}

void Q8(int a[], int n)
{
    int k;
    printf("\nQuestion 8:");
    printf("Hay nhap vi tri k muon xoa:");
    scanf("%d",&k);
    for(int i = k; i < n; i++)
    {
        a[i] = a[i+1];
    }
    n--;
    printf("New Array:");
    for(int i = 0; i < n; i++){
        printf("\t%d",a[i]);
    }
}

void Q9(int a[], int n)
{
    int cnt=0,try=0;
    int j;
    printf("\nQuestion 9:");
    for (int i = 0; i < n - 1; i++)
    {
        int j = i + 1;
        try = 0;
        while (j < n)
        {
            if (a[i] == a[j])
            {
                for (int k = j; k < n - 1; k++)
                    a[k] = a[k + 1];
                n--;
                try++;
            }
            else
            {
                j++;
            }
        }
        if (j == n)
        {
            if (try > 0)
            {
                cnt++;
            }
        }
    }
    printf("\nTotal number of duplicate elements found in array = %d", cnt);
}

void Q10(int a[],int n )
{
    int j,k;
     printf("\nQuestion 10:");
    for (int i = 0; i < n; i++)
     {
        for (int j = i + 1;j < n; j++)
        {
            if(a[i] == a[j])
            {
                for(k=j; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                n--;
                j--;
            }
        }
     }
    printf("New Array:");
    for(int i = 0; i < n; i++)
        printf("\t%d",a[i]);
}

void Q11(int a[], int n)
{
    int dem = 1;

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == a[i + 1])
        {
            dem++;
        }
        else
        {
            printf("\nGia tri %d xuat hien %d lan", a[i], dem);
            dem = 1;
        }
    }
    printf("\n");
}
int main()
{
    int n, z;
    int a[MAX];
    int c[MAX][MAX],d[MAX][MAX];
    srand(time(NULL));

    do
    {
    printf("\n\t\t\t\t\t\t Phuong phap lap trinh_N16T01_HK1_2122_501042 \n");
    printf("\n\t\t\t\t\t BAI TAP NHOM 6 LAB4 \n");
    printf("\nChuong trinh gom cac bai tap sau: ");
    printf("\n0. Ket thuc");
    printf("\n1: Tinh 4 bieu thuc");
    printf("\n2: Tim phan tu lon nhat trong mang");
    printf("\n3: Tim phan tu be nhat trong mang");
    printf("\n4: Tinh tong cac phan tu trong mang");
    printf("\n5: Tinh tong cac phan tu am trong mang");
    printf("\n6: Tinh tong cac phan tu chan trong mang");
    printf("\n7: Dao nguoc mang ma khong su dung mang khac");
    printf("\n8: Xoa phan tu o vi tri x");
    printf("\n9: Dem tong so phan tu trung lap trong mot mang");
    printf("\n10: Xoa tat ca cac phan tu trung lap khoi mot mang");
    printf("\n11: Dem tan so cua tung phan tu trong mang");
    printf("\n\t\tMoi ban cac so tren (Vui long chon dung neu khong se bi loi chuong trinh): \t");
    scanf("%d", &z);

    switch (z)
        {
            case 0:
                printf("\n\n\t\t\tKET THUC\n\n");
                break;\

            case 1:
                Q1();
                break;

            case 2:
                NhapSo(&n);
                NhapMang(a,n);
                Q2(a,n);
                break;

            case 3:
                NhapSo(&n);
                NhapMang(a,n);
                Q3(a,n);
                break;

            case 4:
                NhapSo(&n);
                NhapMang(a,n);
                Q4(a,n);
                break;

            case 5:
                NhapSo(&n);
                NhapMang(a,n);
                Q5(a,n);
                break;

            case 6:
                NhapSo(&n);
                NhapMang(a,n);
                Q6(a,n);
                break;

            case 7:
                NhapSo(&n);
                NhapMang(a,n);
                Q7(a,n);
                break;

            case 8:
                NhapSo(&n);
                NhapMang(a,n);
                Q8(a,n);
                break;

            case 9:
                NhapSo(&n);
                NhapMang(a,n);
                Q9(a,n);
                break;

            case 10:
                NhapSo(&n);
                NhapMang(a,n);
                Q10(a,n);
                break;

            case 11:
                NhapSo(&n);
                NhapMang(a,n);
                Q11(a,n);
                break;

            case 12:
                Q12();
                break;
            default:
                printf("\n\n\t\t\t vui long chon lai.\n\n");
        }

        Continues(&z);

    }while (z != 0);

	return 0;
}
