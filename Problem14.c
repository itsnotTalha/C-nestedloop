/******************************************* 
WAP that will print a pattern based on the input integer n. Please see the sample input
output.
_____               ______
INPUT               OUTPUT
-----               ------
5                   *****
                    *___*
                    *****
                    *___*
                    *****
********************************************/
#include<stdio.h>
int main(){
    int n;
    printf("Enter term value:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0)
        for(int j=1;j<=n;j++)
        printf("*");
        else{
            printf("*");
            for(int j=1;j<=n-2;j++)
            printf("_");
            printf("*");
        }
        puts("");
    }
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/