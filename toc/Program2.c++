#include<stdio.h>
#define max 100

int main(){
    char str[max], f = 'A';   // Start state = A
    int i;

    printf("Enter the String: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++){
        switch(f){

            case 'A':
                if(str[i] == '0')
                    f = 'B';
                else
                    f = 'A';
                break;

            case 'B':
                if(str[i] == '0')
                    f = 'C';
                else
                    f = 'A';
                break;

            case 'C':
                if(str[i] == '0')
                    f = 'D';
                else
                    f = 'A';
                break;

            case 'D':
                if(str[i] == '0')
                    f = 'D';    // Stays in D
                else
                    f = 'A';
                break;
        }
    }

    printf("\nFinal State = %c", f);

    if(f == 'D')
        printf("\nString Accepted");
    else
        printf("\nString Not Accepted");

    return 0;
}
