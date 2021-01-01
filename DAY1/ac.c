#include <stdio.h>

int main()
{
    int n;
    printf("Nhap n >= ");
    scanf("%d",&n);
    int f1 = 0;
    int f2 = 1, c= 0;
    int f3;
    int i;
    printf(" %d ",1);
    if(n==1)
        printf("");
    else
    {
        for(i=2; i<n; i++)
        {
            f3=f1+f2;
        //if(f3>n) break;
            f1=f2;
            f2=f3;
            if (f3 < n)
            {
                printf("%d ",f3);
                c++;
            }
        }

    }
    printf("\n\n%d\nn: %d",c, n);

}

