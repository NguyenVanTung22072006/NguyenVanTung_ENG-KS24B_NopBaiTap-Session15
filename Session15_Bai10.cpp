#include <stdio.h>
#include <string.h>

int main(){
    char str[]="bcdac";
    int count[256]={0};

    for(int i=0; str[i]!='\0'; i++){
        count[str[i]]++;
    }
    for(int i=0; str[i]!='\0'; i++){
        if (count[str[i]] > 0){ 
            printf("%c: %d", str[i], count[str[i]]);
            count[str[i]]=0; 
        }
    }
    return 0;
}
