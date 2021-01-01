#include <stdio.h>


int isPrime(int n)
{
    if(n <= 1)
    {
        return 0;
    }
    for(int i = 2; i < n; i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n, i, j, sum;
    scanf("%d", &n);
    while(n > 2)
    {
        sum = 0;
        i = j = 2;
        while( i <= n)
        {
            if(n%i==0)
            {
                n/=i;
                sum+=i;
            }
            else
            {
                ++i;
            }
        }

        if(isPrime(sum) == 1)
        {
            printf("%d", sum);
        }
        else
        {
            n=sum;
        }
    }
    return 0;
}
