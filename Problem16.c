/******************************************* 
WAP that will print a pattern based on the input integer n. Please see the sample input
output.
_____               ______
INPUT               OUTPUT
-----               ------
5                   *___*
                    _*_*_
                    __*__
                    _*_*_
                    *___*
********************************************/
#include<stdio.h>
int main(){
    int n;
    printf("Enter term value:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==i||j==n-i+1)
            printf("*");
            else printf("_");
        }
        puts("");
    }
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/