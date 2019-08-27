#include <stdio.h>
#include <string.h>
int main()
{
    char a[100];
    int i=0;
    while((a[i]=getchar())!='='){
        i++;
    }
    a[i]='\0';
    int p=a[0]-48;
    for(i=0;a[i]!='\0';i++){
        if(a[i]=='+'){
            p=p+(a[i+1]-48);
        }
        if(a[i]=='-'){
            p=p-(a[i+1]-48);
        }
        if(a[i]=='*'){
            p=p*(a[i+1]-48);
        }
        if(a[i]=='/'){
            p=p/(a[i+1]-48);
        }
    }
    printf("%d",p);
    return 0;
}
