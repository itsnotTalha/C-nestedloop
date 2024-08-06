/******************************************* 
Intro
_____               ______
INPUT               OUTPUT
-----               ------
3                    123
                     234
                     345
********************************************/
#include<stdio.h>
int main(){
    int n;
    printf("Enter term value:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int count=i;
        for(int j=1;j<=n;j++){
        printf("%d",count);
        count++;
        }
        puts("");
    }
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/