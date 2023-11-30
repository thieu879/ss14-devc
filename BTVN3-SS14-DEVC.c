#include <stdio.h>
#include <string.h>
int countchar(char *str) {
    int dem = 0;
    char *ptr = str;
    while (*ptr != '\0') {
        dem++;
        ptr++;
    }
    return dem;
}
int main() {
    char str1[100], str2[100];
    printf("Nhap chuoi ky tu 1 ");
    scanf("%s", str1);
    printf("Nhap chuoi ky tu 2 ");
    scanf("%s", str2);
    int len1 = countchar(str1);
    printf("So ky tu trong chuoi 1 la: %d\n", len1);
    int len2= countchar (str2);
    printf("So ky tu trong chuoi 2 la : %d\n", len2);
    if(len1==len2){
    	printf("hai chuoi dai bang nhau\n");
	}else if (len1>len2){
		printf("chuoi 1 dai hon chuoi 2\n");
	}else{
		printf("chuoi 2 dai hon chuoi 1\n");
	}
    return 0;
}
