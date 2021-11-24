#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

//Guu câu 1 -> 3

int getLength(const char*);

int getLength(const char* str)
{
	if(str[0] == '\0') return 0;
	int length = 0;
	while(str[length] != '\0')
	{
		length = length + 1;
	}
	return length - 1;
}

void nhapchuoi(char chuoi[SIZE])
{
    do
    {
        printf("\n\nNhap : ");

        gets(chuoi);
    }

    while ( !(strlen(chuoi) > 0 && strlen(chuoi) < SIZE));

}



void strreverse(char chuoi[])
{

    int i = 0;
    int length ;
    for(length = 0; chuoi[length] != '\0'; length++)
    {

    }
        while(i < length)
        {
            length--;

            char temp = chuoi[i];

            chuoi[i] = chuoi[length];

            chuoi[length] = temp;

            ++i;

        }
        printf("\n\nCau 2 : Chuoi ky tu khi viet nguoc la %s",chuoi);
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

void Q1();

void Q2();

void Q3();

//   start khoa cau 4 va cau 11
char *delete_space(char *str, char *ketqua);
void Q4();
void Q11();
//        end khoa

void Q5();

////Phượng
int char_position(char str[], char c)
{
	int i;
	int pos = 0;
	for (i=0; i< strlen(str); i++)
	{
		if (str[i] == c)
		{
			pos	= i+1;
			break;
		}
	}
	return pos;
}

void Q6()
{
    char str[SIZE];
    char c;
    printf("Moi nhap mot chuoi co chieu dai nho hon %d: ", SIZE);
    fflush(stdin);
    fgets(str, SIZE, stdin);

    printf("Moi nhap ki tu ban muon tim: ");
	scanf("%c", &c);

    if (char_position(str,c) == 0)
	{
		printf("Ki tu %c khong xuat hien trong chuoi %s\n", c, str);
	} else
	{
		printf("Ki tu %c xuat hien tai vi tri thu %d trong chuoi %s \n", c, char_position(str,c), str);
	}
}

void Q7()
{
    char str[SIZE];
    char c;
    printf("Moi nhap mot chuoi co chieu dai nho hon %d: ", SIZE);
    fflush(stdin);
    fgets(str, SIZE, stdin);

    printf("Moi nhap ki tu ban muon tim: ");
	scanf("%c", &c);

    int len = strlen(str);
    int check = 0;
    for(int i = 0; i < len; i++)
    {
        if (str[i]==c)
        {
            check = 1;
            printf("\nKi tu xuat hien o cac vi tri %d",i+1);
        }
    }
    if (check == 0)printf("Khong co ton tai ki tu");
}
//end
void Q8()
{
}

void Q9()
{
}

void Q10();

int main()
{
    int z;



    do
    {
        printf("\n\t\t\t\t\t\t Phuong phap lap trinh_N16T01_HK1_2122_501042 \n");
        printf("\n\t\t\t\t\t BAI TAP NHOM 6 LAB5 \n");
        printf("\nChuong trinh gom cac bai tap sau: ");
        printf("\n0. Ket thuc");
        printf("\n1: Tinh 5 bieu thuc");
        printf("\n2: Tim phan tu lon nhat trong mang");
        printf("\n3: Tim phan tu be nhat trong mang");
        printf("\n4: Chinh lai chuoi viet hoa chu dau va xoa khoang trang thua");
        printf("\n5: Nhap hai chuoi s1 va s2, gop s2 vao s1");
        printf("\n6: Tinh tong cac phan tu chan trong mang");
        printf("\n7: Dao nguoc mang ma khong su dung mang khac");
        printf("\n8: Xoa phan tu o vi tri x");
        printf("\n9: Dem tong so phan tu trung lap trong mot mang");
        printf("\n10: Xoa tat ca cac phan tu trung lap khoi mot mang");
        printf("\n11: Nhap chuoi, vi tri xoa ki tu va so luong ki tu can xoa.");
        printf("\n\t\tMoi ban cac so tren (Vui long chon dung neu khong se bi loi chuong trinh): \t");
        scanf("%d", &z);

        switch (z)
        {
        case 0:
            printf("\n\n\t\t\tKET THUC\n\n");
            break;

        case 1:
            Q1();
            break;

        case 2:

            Q2();
            break;

        case 3:

            Q3();
            break;

        case 4:

            Q4();
            break;

        case 5:

            Q5();
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

        case 11:

            Q11();
            break;
        default:
            printf("\n\n\t\t\t vui long chon lai.\n\n");
        }

        Continues(&z);

    } while (z != 0);

    return 0;
}
void Q1()
{
   char chuoi[SIZE];



   printf("\n\nNhap vao chuoi ky tu can dem: ");

   printf("\n\nNhap : ");

   fgets(chuoi, SIZE, stdin);

   printf("\n\nSo ky tu trong chuoi la : %d\n", getLength(chuoi));
}
void Q2()
{

    char chuoi[SIZE];

    printf("\n\nNhap vao chuoi ki tu muon dao nguoc !!");

    nhapchuoi(chuoi);

    strreverse(chuoi);
}
void Q3()
{
    char str[SIZE];

    char y[SIZE];

    char x[SIZE];

    printf("\n\nNhap vao ho va ho dem cua ban !!");

    nhapchuoi(str);

    printf("\n\nNhap vao ten cua ban !!");

    nhapchuoi(y);


    strcpy(x , str);

    printf("Ho va Ten day du cua ban la : %s\n", strcat(x ,y ));
}
void Q4()
{
    fflush(stdin);
    char x[SIZE], x1[SIZE];
    printf("\nBai 4: nhap chuoi can xu li:");
    fgets(x, SIZE, stdin);
    printf("mang vua nhap la:%s\n", x);
    int dai = strlen(delete_space(x, x1));
    printf("mang sau khi chinh sua:%s\n", delete_space(x, x1));
    fflush(stdin);
}
char *delete_space(char *str, char *ketqua)
{
    int pos = 0;
    const int len = strlen(str);
    if (str[0] != ' ')
    {
        ketqua[pos++] = str[0] - 32;
    }
    for (int i = 1; i < len; i++)
    {
        char c = str[i];
        if (c == ' ' && str[i + 1] == ' ')
        {
            continue;
        } else
        if (str[i - 1] == ' ' && c != ' ' && i < len - 1)
            ketqua[pos++] = c - 32;
        else
        {
            char a = tolower(c);
            ketqua[pos++] = a;
        }
    }
    return ketqua;
}

void Q5()
{
	fflush(stdin);
	char str1[SIZE], str2[SIZE], str3[SIZE];

	printf("Enter the first string: ");
	fgets(str1, SIZE, stdin);
	printf("Enter the second string: ");
	fgets(str2, SIZE, stdin);

	int l1 = getLength(str1), l2 = getLength(str2);

	int i, j = 0;
	for (i = 0; i < l1 + l2; i ++)
		if(i < l1)
			str3[i] = str1[i];
		else
		{
			str3[i] = str2[j];
			j ++;
		}

	for (i = 0; i < l1 + l2; i ++)
		printf("%c", str3[i]);
}

void Q10()
{
	fflush(stdin);
	char str1[SIZE], str2[SIZE], str3[SIZE], pos;

	printf("Enter the first string: ");
	fgets(str1, SIZE, stdin);
	printf("Enter the second string: ");
	fgets(str2, SIZE, stdin);

	printf("Enter the insert position: ");
	scanf("%d", &pos);

	int l1 = getLength(str1), l2 = getLength(str2), i, j = 0;

	for (i = 0; i < l1 + l2; i ++)
		if (i < pos)
			str3[i] = str1[i];
		else if (i < pos + l2)
		{
			str3[i] = str2[j];
			j ++;
		}
		else
		{
			str3[i] = str1[pos];
			pos ++;
		}

	for (i = 0; i < l1 + l2; i ++)
		printf("%c", str3[i]);
}

void Q11()
{
    fflush(stdin);
    char x[SIZE], x1[SIZE];
    printf("\nBai 4: nhap chuoi can xu li:");
    fgets(x, SIZE, stdin);
    printf("mang vua nhap la:%s\n", x);
    int dai = strlen(x);
    int n, vt;
    printf("\nNhap vi tri can xoa: ");
    scanf("%d", &vt);
    printf("\nnhap so luong can xoa: ");
    scanf("%d", &n);
    for (int j = 1; j <= n; j++)
    {
        for (int i = vt; i < dai - 2; i++)
        {
            x[i] = x[i + 1];
        }
        dai--;
    }
    char stringphu[SIZE];
    for (int i = 0; i <dai-1;i++){
        stringphu[i] = x[i];
    }
    printf("mang sao khi xoa la:%s\n", stringphu);

}
