/******************************************* 
WAP that will print a pattern based on the input integer n. Please see the sample input
output.
_____               ______
INPUT               OUTPUT
-----               ------
3                    3
                     32
                     321
********************************************/
#include<stdio.h>
int main(){
    int n;
    printf("Enter term value:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        int count=n;
        for(int j=1;j<=i;j++){
        printf("%d",count);
        count--;
        }
        puts("");
    }
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/