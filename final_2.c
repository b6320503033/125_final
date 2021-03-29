#include<stdio.h>
int main()
{
    int n,i,max=0,imax,k=0;
    scanf("%d",&n);
    int c[n];
    if(n>=2&&n<=1000)
    {
        for(i=1; i<=n; i++)
        {
            scanf("%d",&c[i]);
            if(c[i]>0&&c[i]<=10000);
        }
        for(i=1; i<=n; i++)
        {
            if(max<c[i])
            {
                max=c[i];
                imax=i;
            }
        }
        for(i=1; i<=n; i++)
        {
            if(max!=c[i])
                continue;
            imax=i;
            break;

        }
        for(i=1; i<=n; i++)
        {
            if(max==c[i])
                k++;
        }

        printf("%d ",imax);
        if(k>1)
            printf("%d",max);
    }


    return 0;
}
