// To write a C program to check whether a string belongs to the grammar
// S -> 0 S 0 | 1 S 1 | 0 | 1 | e

#include<stdio.h>
#include<string.h>

int checkValidity(char ip[], int l){

    int iv = 0;

    for(int i = 0;i<l;i++){
        if(ip[i] == '0' || ip[i] == '1')
            continue;
        else{
            iv = 1;
            break;
        }
    }

    return iv;
}

int main(){
    char input[100];
    while(1){
        printf("Enter a String : ");
        scanf("%s",&input);

        int l = strlen(input);

        int invalid = checkValidity(input,l);

        if(invalid != 1){
            int a = 0;
            int b = l-1;
            int reject = 0;

            while(a != (l/2)){
                if(input[a] == input[b]){
                    a+=1;
                    b-=1;
                }
                else{
                    reject = 1;
                    printf("String Rejected. \n");
                    printf("String is NOT a PALINDROME.\n\n");
                    break;
                }
                    
            }

            if(reject == 0){
                printf("String Accepted. \n");
                printf("String is a PALINDROME.\n\n");
            }
        }
        else
            printf("Enter a Valid String over E = {0,1} .\n\n");
    }

    return 0;
}