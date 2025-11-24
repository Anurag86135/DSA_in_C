#include<stdio.h>
#define max 100

int main(){
    char str[max],f='a';
    int i;
    printf("Enter the String\n");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++){
        switch(f){
            case 'a':if(str[i] =='0')f='b';
            else   f='a';
          
            break;

            case 'b' :if(str[i]=='0') f='b';
            else f = 'c';
          
            break;

            case 'c': if(str[i]=='0') f='b';
            else  f='c';
            break;
        }
    }
    if (f =='c')
    printf("\n String accept",f);
    else{
            printf("\n String Not accept " ,f);
    }

    return 0;
}