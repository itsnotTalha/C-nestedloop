/******************************************* 
WAP that will print a pattern based on the input integer n. Please see the sample input
output.
_____               ______
INPUT               OUTPUT
-----               ------
5                    10101
                     01010
                     10101
                     01010
                     10101
********************************************/
#include<stdio.h>
int main(){
    int n;
    printf("Enter term value:");
    scanf("%d",&n);
    int count=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(count%2==1)
            printf("0");
            else printf("1");
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