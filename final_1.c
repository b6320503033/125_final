#include<stdio.h>
int main()
{

    int n,c,i=0,tn,x=0,y=1,z;
    int k[5];
    scanf("%d %d",&n,&c);

    if(n>=0&&n<=32750)
    {

        tn=n;
        while(tn>0)
        {
            k[i]=tn%10;
            tn/=10;
            i++;
            y*=10;
        }
        y/=10;
        if(k[0]>c)
        {
            k[0]=c;
            k[1]++;
            for(i--; i>=0; i--,y/=10)
            {
                x=x+(k[i]*y);
            }
        }
        else
        {
            k[0]=c;
            for(i--; i>=0; i--,y/=10)
            {
                x=x+(k[i]*y);
            }
        }
        printf("%d",x);
    }


    return 0;
}
