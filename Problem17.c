/******************************************* 
WAP that will print a pattern based on the input integer n. Please see the sample input
output.
_____               ______
INPUT               OUTPUT
-----               ------
9                   ____$____
                    ___$$$___
                    __$_$_$__
                    _$__$__$_
                    $$$$$$$$$
                    _$__$__$_
                    __$_$_$__
                    ___$$$___
                    ____$____
********************************************/
#include<stdio.h>
int main(){
    int n;
    printf("Enter term value:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==n/2+1||j==n/2+1)
            printf("$");
            else
            printf("_");
        }
        puts("");
    }
}
/******************************************* 
 * Author- Talha Jubayer
 * talhajubayer737@gmail.com
 * BSCSE@United International University
********************************************/