/******************************************* 
WAP that will print a pattern based on the input integer n. Please see the sample input
output.
_____               ______
INPUT               OUTPUT
-----               ------
5                   ____*
                    ___***
                    __*****
                    _*******
                    *********
                    _*******
                    __*****
                    ___***
                    ____*                   
********************************************/
#include<stdio.h>
int main(){
    int n;
    printf("Enter term value:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++)
        printf("_");
        for(int j=1;j<=(2*i-1);j++)
        printf("*");
        puts("");
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<=i;j++)
        printf("_");
        for(int j=1;j<=(2*(n-i)-1);j++)
        printf("*");
        puts("");
    }
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/