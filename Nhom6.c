#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include <math.h>
#include <stdbool.h>
#define MAX 100
#define SIZE 10

//Hàm nhập vào số n cho các câu không phải là mảng
void EnterN(int *n)
{
     do
    {
            
        printf("\n\nEnter n : ");
        scanf("%d",&*n);
        if (*n <= 0)
        {
            printf("\nInvalid number. Please try again!!");
        }
    } while (*n <= 0);
}

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
    int i = 0;
    while (i < n)
    {
        b[i] = a[i];
        i++;
    }

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
	do
	{
		printf("\n\nNhap k:");
		scanf("%d",&*k);
		if(*k<0)
			printf("Sai, nhap lai.\n");
	}
	while(*k<0);
}

void a1(int k)
{
    float i;
    float sum = 0;
    for(i = 1; i <=k;i++)
       sum = sum + i/2;
    printf("\na) %f ",sum);
}
void b1(int k)
{
    float i;
    float sum = 0;
    for(i = 1; i <= k;i++)
       sum = sum + (2*i+1);
    printf("\nb) %f ",sum);
}
void c1(int k)
{
    int i, j;
    int sum = 0;
    for(i = 1; i <= k ;i++){
        int g = 1;
        for (j = 1;j <= i ; j++) g = g * j;
        sum = sum + ( g + 1 );
   }
   printf("\nc) %d ",sum);

}
void d1(int k)
{
    int i, j;
    int tich = 1;
    for(i = 1; i <= k;i++){
        int g = 1;
        for (j = 1;j <= i;j++) g = g * j;
        tich = tich * g;
   }
   printf("\nd) %d ",tich);
}
void e1(int k)
{
    float i;
    float tich = 1;
    for(i = 1; i <=k;i++)
      tich = tich * (2*i / 3);
    printf("\ne) %f ",tich);
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
    int i, max = a[0];
    printf("\nQuestion 2:");
	for(i = 1; i < n; i++)
			if(max < a[i]) max = a[i];
    printf("\nMaximum number is : %d ", max);
}

void Q3(int a[], int n)
{
    int i, min = a[0];
    printf("\nQuestion 3:");
	for(i = 1; i < n; i ++)
			if(min > a[i]) min = a[i];
    printf("\nMinimum number is : %d ", min);
}

void Q4(int a[], int n)
{
    int i, sum = 0;
    for(i = 0;i < n;i ++){
        sum = sum + a[i];
    }
    printf("\nSum all numbers :%d", sum);
}

void Q5(int a[], int n)
{
    ;
}

void Q6(int a[], int n)
{
    int i, sum = 0;
    for(i = 0;i< n;i++)
    {
            if (a[i] % 2 == 0){
            sum += a[i];
            }
    }
    printf("\nSum all even numbers : %d",sum);
}

bool Armstrong(int n)
{
    int Du, Sum = 0, Temp = n;
    while (n)
    {
        Du = n % 10;
        Sum += Du*Du*Du;
        n/=10;
    }
    if (Temp == Sum )
    {
        return true;
    } else
    {
        return false;
    }
}

void Q7()
{
    int n;
    printf("\n\nAll armstrong number between 1 to n");
    EnterN(&n);
    int i = 1;
    while (i <= n)
    {
        if (Armstrong(i) == true)
        {
            printf("%d \t",i);
        }
        i++;
    }  
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

void Q8()
{
    int n;
    printf("\n\nAll perfect number between 1 to n");
    EnterN(&n);
    int i = 1;
    while (i <= n)
    {
        if (Perfect(i) == true)
        {
            printf("%d \t",i);
        }
        i++;
    }
}

void Q9()
{
    int n, s = 0, f = 0;
    printf("\nBai 9: doi so thap phan ra nhi phan");
    printf("\nNhap n: ");
    scanf("%d", &n);
    while (n != 0)
    {
        if (n % 2 == 0)
        {
            f++;
        }
        else
        {
            s = s + (n % 2) * pow(10, f);
            f++;
        }
        n /= 2;
    }
    printf("\n\tSo nhi phan la: %d\n", s);
}

void Q10()
{
    int days, weeks = 0, years = 0, day = 0;
    printf("\nBAI 4:\nnhap so ngay: ");
    scanf("%d", &days);
    years = days / 365;
    weeks = (days - years * 365) / 7;
    day = days - years * 365 - weeks * 7;
    printf("\nyears: %d", years);
    printf("\nweeks: %d", weeks);
    printf("\nday: %d", day);
}

void Q11(int a[], int n)
{
    int i, j, dem = 1;

    for (i = 1; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (a[i] < a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
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

void Q12()
{

    int a[MAX], na;
    int b[MAX], nb;
    int c[MAX];
    int i;

    printf("\nMang dau tien: ");
    NhapSo(&na);
    NhapMang(a,na);

    printf("\n\nMang thu hai: ");
    NhapSo(&nb);
    NhapMang(b, nb);

    for (i = 0; i < na + nb; i++)
    {
        if (i < na)
        {
            c[i] = a[i];
        }
        else
        {
            c[i] = b[i - nb];
        }
    }

    printf("\nMang dau tien la: ");
    XuatMang(a,na);

    printf("\nMang thu hai la: ");
    XuatMang(b,nb);

    printf("\nMang sau khi gop la: ");
    XuatMang(c,na + nb);
}

void Q13(int a[], int n)
{
    printf("\n\nSum of all numbers: ");
    int i = 0, Sum = 0;
    while (i < n)
    {
        Sum += a[i];
        i++;
    }
    printf("\n\nSum: %d", Sum);
}

void Q14(int a[], int n)
{
    int i, sum = 0;
    for(i = 0;i<= n;i++){
            if (a[i] < 0){
                sum = sum + a[i];
            }
    }
    printf("\nSum all non-positive numbers : %d",sum);
}

void Q15(int a[], int n)
{
    

}

void XuatMang2C(int a[][MAX], int n, int m)
{
	int i, j;
	for (i = 0; i < n; i ++)
	{
		for (j = 0; j < m; j ++)
		{
			printf("%5d", a[i][j]);
		}
		printf("\n\n");
	}
}

void NhapMang2CThuCong(int a[][MAX], int n, int m)
{
	int i, j;

	int min, max, temp;

    printf("\n\nGia tri nho nhat");
    scanf("%d",&min);
    printf("\n\nGia tri lon nhat");
    scanf("%d",&max);

    if (min > max)
    {
        temp = min;
        min = max;
        max = temp;
    }

	for (i = 0; i < n; i ++)
		for (j = 0; j < m; j ++)
		{
			printf("Nhap phan tu [%d][%d]", i, j);
			scanf("%d", a[i][j]);
		}

	XuatMang2C(a, n, m);
}

void NhapMang2CTuDong(int a[][MAX], int n, int m)
{
	int i, j;

	int min, max, temp;

    printf("\n\nGia tri nho nhat");
    scanf("%d",&min);
    printf("\n\nGia tri lon nhat");
    scanf("%d",&max);

    if (min > max)
    {
        temp = min;
        min = max;
        max = temp;
    }

	for (i = 0; i < n; i ++)
		for (j = 0; j < m; j ++)
		{
			a[i][j] = rand()%(max - min + 1) + min;
		}

	printf("Mang vua nhap la:\n");
	XuatMang2C(a, n, m);
}

void NhapMang2C(int a[][MAX], int n, int m)
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
            NhapMang2CThuCong(a ,n, m);
            break;

        case 1:
            NhapMang2CTuDong(a ,n, m);
            break;

        default:
            printf("\n\nKhong co chuc nang nay. Vui long nhap lai.");
            break;
    }
    } while (choice != 0 && choice != 1);


}

void Q16(int c[][MAX], int d[][MAX])
{
	int ca, ra, cb, rb;
	int i = 0, j;

	NhapHangCot(&ca, &ra, &cb , &rb);

	if (ca != cb || ra != rb)
    {
        printf("\n\nPhep cong hai ma tran khong xac dinh");
        return;
    }

	printf("\nNhap mang thu nhat:");
	NhapMang2C(c,ra,ca);
	printf("\nNhap mang thu hai:");
    NhapMang2C(d,rb,cb);

    int E[MAX][MAX];	// Ma tran E de luu tru gia tri cua phep cong.

	printf("Ket qua phep cong la:\n");
    for (i = 0; i < ra; i ++)				// for i de di qua tung dong
	{
		for (j = 0; j < ca; j ++)			// for j de qi qua tung cot
		{
			E[i][j] = c[i][j] + d[i][j];	// luu tru gia tri cua phep cong vao phan tu trong mang E
			printf("%5d", E[i][j]);			// In ket qua phep cong
		}
		printf("\n\n");
	}
}

void Q17(int c[][MAX], int d[][MAX])
{
	int ca, ra, cb, rb;
	int i = 0, j;

	NhapHangCot(&ca, &ra, &cb , &rb);

	if (ca != cb || ra != rb)
    {
        printf("\n\nPhep tru hai ma tran khong xac dinh");
        return;
    }

	printf("\nNhap mang thu nhat:");
	NhapMang2C(c,ra,ca);
	printf("\nNhap mang thu hai:");
    NhapMang2C(d,rb,cb);

    int E[MAX][MAX];

	printf("Ket qua phep tru la:\n");
    for (i = 0; i < ra; i ++)
	{
		for (j = 0; j < ca; j ++)
		{
			E[i][j] = c[i][j] + d[i][j];
			printf("%5d", E[i][j]);
		}
		printf("\n\n");
	}
}

void Q18(int c[][MAX], int d[][MAX])
{

}

void Q19(int c[][MAX], int d[][MAX])
{
    printf("\nQuestion 19: ");
    int ca, ra, cb, rb; // ca là cột mảng a, ra là hàng mảng a. Tương tự với mảng b.
    int i = 0;

    NhapHangCot(&ca, &ra, &cb , &rb);

    // Khi hàng và cột của hai mảng không bằng nhau thì ta xuất kết quả và kết thúc.
    if (ca != cb || ra != rb)
    {
        printf("\n\nHai ma tran khong bang nhau");
        return;
    }

    // Khi hàng cột đã đúng thì ta tiến hành nhập giá trị cho 2 mảng
    printf("\nNhap mang thu nhat:");
	NhapMang2C(c,ra,ca);
	printf("\nNhap mang thu hai:");
    NhapMang2C(d,rb,cb);


    while (i < ra)
    {
        int j = 0;
        while (j < ca)
        {
            if (c[i][j] != d[i][j])
            {
                printf("\n\nHai ma tran khong bang nhau");
                return;
            }
            j++;
        }
        i++;
    }
    printf("\n\nHai ma tran bang nhau.");
}

void Q20()
{
	

}

void Q21()
{
    float a[SIZE][SIZE], x[SIZE], ratio, det=1;
	 int i,j,k,n;

	 printf("Enter Order of Matrix: ");
	 scanf("%d", &n);


	 printf("\nEnter Coefficients of Matrix: \n");
	 for(i=0;i< n;i++)
	 {
		  for(j=0;j< n;j++)
		  {
			   printf("a[%d][%d]=",i,j);
			   scanf("%f", &a[i][j]);
		  }
	 }

	 for(i=0;i< n;i++)
	 {
		  if(a[i][i] == 0.0)
		  {
			   printf("Mathematical Error!");
			   exit(0);
		  }
		  for(j=i+1;j< n;j++)
		  {
			   ratio = a[j][i]/a[i][i];

			   for(k=0;k< n;k++)
			   {
			  		a[j][k] = a[j][k] - ratio*a[i][k];
			   }
		  }
	 }

	 printf("\nUpper Triangular Matrix: \n");
	 for(i=0;i< n;i++)
	 {
		  for(j=0;j< n;j++)
		  {
			   printf("%0.2f\t",a[i][j]);
		  }
		  printf("\n");
	 }


	 for(i=0;i< n;i++)
     {
         det = det * a[i][i];
     }

	 printf("\n\nDeterminant of given matrix is: %0.3f", det);

}

void Q24(int a[], int n)
{
    printf("\n\nQuestion 24: Write a program to sort array elements in ascending order");

    int i = 0,temp;

    while (i < n)
    {
        int j = 0;
        while (j < n)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
            j++;
        }
        i++;
    }
    XuatMang(a,n);

}

void Q29()
{
	int i, j;

	int a[MAX][MAX], transpose[MAX][MAX], r, c;
	printf("Enter rows :  ");
	scanf("%d", &r);
    printf("Enter columns: ");
	scanf("%d", &c);

	printf("\nEnter matrix elements:\n");
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
		printf("Enter element a%d%d: ", i + 1, j + 1);
		scanf("%d", &a[i][j]);
		}

	printf("\nEntered matrix: \n");
	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
		printf("%d  ", a[i][j]);
		if (j == c - 1)
		printf("\n");
		}

	for (i = 0; i < r; ++i)
		for (j = 0; j < c; ++j)
		{
		transpose[j][i] = a[i][j];
		}

	printf("\nTranspose of the matrix:\n");
	for (i = 0; i < c; ++i)
		for (j = 0; j < r; ++j)
		{
		printf("%d  ", transpose[i][j]);
		if (j == r - 1)
		printf("\n");
		}

}

int main()
{
    int n, m, z;
    int a[MAX];
    int c[MAX][MAX],d[MAX][MAX];
    srand(time(NULL));

    do
    {
    printf("\n\t\t\t\t\t\t Phuong phap lap trinh_N16T01_HK1_2122_501042 \n");
    printf("\n\t\t\t\t\t BAI TAP NHOM 6 LAB4 \n");
    printf("\nChuong trinh gom cac bai tap sau: ");
    printf("\n0. Ket thuc");
    printf("\n1: Tinh 5 bieu thuc");
    printf("\n2: Tim phan tu lon nhat trong mang");
    printf("\n3: Tim phan tu be nhat trong mang");
    printf("\n4: Tinh tong cac phan tu trong mang");
    printf("\n5: Tinh tong cac phan tu am trong mang");
    printf("\n6: Tinh tong cac phan tu chan trong mang");
    printf("\n7: Write a C function to print all Armstrong between 1 to n.");
    printf("\n8: Write a C function to print all Perfect between 1 to n.");
    printf("\n9: Dem tong so phan tu trung lap trong mot mang");
    printf("\n10: Xoa tat ca cac phan tu trung lap khoi mot mang");
    printf("\n11: Dem tan so cua tung phan tu trong mang");
    printf("\n12: Gop hai mang lai voi nhau");
    printf("\n13: Write function to sum all number of an integer array.");
    printf("\n14: Write function to sum all non- positive number of an integer array.");
    printf("\n15: Sap xep mang tang dan");
    printf("\n16: Cong hai ma tran");
    printf("\n17: Tru hai ma tran");
    printf("\n18: Convert Decimal to Binary number system.");
    printf("\n19: Kiem tra hai ma tran co bang nhau khong");
    printf("\n20: Tim chuyen vi cua mot ma tran");
    printf("\n21: Tim dinh uoc cua ma tran");
    printf("\n24: Write to sort array elements in ascending order.");
    printf("\n29: Write program to find transpope of a matrix.");
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

            case 11:
                NhapSo(&n);
                NhapMang(a,n);
                Q11(a,n);
                break;

            case 12:
                Q12();
                break;

            case 13:
                NhapSo(&n);
                NhapMang(a,n);
                Q13(a,n);
                break;

            case 14:
                NhapSo(&n);
                NhapMang(a,n);
                Q14(a,n);
                break;

            case 15:
                NhapSo(&n);
                NhapMang(a,n);
                Q15(a,n);
                break;

            case 16:
                Q16(c,d);
                break;

            case 17:
                Q17(c,d);
                break;

            case 18:
                Q18(c,d);
                break;

            case 19:
                Q19(c,d);
                break;

            case 20:
                Q20();
                break;

            case 21:
                Q21();
                break;

            case 24:
                NhapSo(&n);
                NhapMang(a,n);
                Q24(a,n);
                break;

            case 29:
                Q29();
                break;
            
            default:
                printf("\n\n\t\t\t vui long chon lai.\n\n");
        }

        Continues(&z);

    }while (z != 0);

	return 0;
}
