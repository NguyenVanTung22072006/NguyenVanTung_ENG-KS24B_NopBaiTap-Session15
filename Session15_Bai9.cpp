#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char ch;

    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    printf("Nhap ky tu can xoa: ");
    scanf("%c", &ch);
    
    int length = strlen(str);
    int i, j = 0;
    for(i=0; i<length; i++){
        if (str[i] != ch){
            str[j++] = str[i]; 
        }
    }
    str[j] = '\0';
    printf("Chuoi sau khi xoa: %s\n", str);

    return 0;
}
