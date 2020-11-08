#include <stdio.h>
#include <string.h>

int countDigits(char str[]){
    int i, counter = 0;
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] >= '0' && str[i] <= '9'){
            counter++;
        }
    }
    return counter;
}

int main(){

char str[256];
fgets(str, 256, stdin);

if(strlen(str) > 0 && (str[strlen(str) - 1] == '\n')){
    str[strlen(str) - 1 ] = '\0';
}
printf("%s\n", str);

printf("A szamjegyek szama: %d\n", countDigits(str) );


    return 0;
}