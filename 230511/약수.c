#include <stdio.h>
 
int main()
{
    int n, i, cnt=0;
 
 
    printf ("숫자를 입력하세요 : ");
    scanf ("%d", &n);
 
 
    for (i=2; i<n; i++) {
            printf ("%d %% %d = %d",n,i,num%i);
            if (n % i == 0)
                cnt++;
    }
 
    
    if ( cnt == 0 )
        printf ("소수 입니다.");
    else 
        printf ("소수가 아닙니다.");
 
 
    return 0;
 }