#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 100

//Hello Moi Nguoi

char *delete_space(char *str, char *ketqua);
int main()
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