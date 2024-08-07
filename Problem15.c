/******************************************* 
WAP that will print a pattern based on the input integer n. Please see the sample input
output.
_____               ______
INPUT               OUTPUT
-----               ------
5                   zzzzz
                       z
                      z
                     z
                    zzzzz   
********************************************/
#include<stdio.h>
int main(){
    int n;
    printf("Enter term value:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i==1||i==n)
        for(int j=1;j<=n;j++)
        printf("Z");
        else{
            for(int j=1;j<=n-i;j++)
            printf(" ");
            printf("Z");
        }
    puts("");
    }
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/