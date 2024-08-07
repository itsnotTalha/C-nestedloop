/******************************************* 
WAP that will print a pattern based on the input integer n. Please see the sample input
output.
_____               ______
INPUT               OUTPUT
-----               ------
4                   1_____1
                    12___21
                    123_321
                    1234321
********************************************/
#include<stdio.h>
int main(){
    int n;
    printf("Enter term value:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++)
        printf("%d",j);
        for(int j=1;j<=2*(n-i)-1;j++)
        printf("_");
        for(int j=i;j>=1;j--){
            if(i==n&&j==n) continue;
        printf("%d",j);
        }
        puts("");
    }
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/