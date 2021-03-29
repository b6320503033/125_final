#include<stdio.h>
int main()
{
    int a,b,c,x=0,k=0,suma1=0,suma2=0,i,j,suma3=0,suma4=0;

    scanf("%d %d %d",&a,&b,&c);

    int A[a][a],B[b][b],C[c][c],sumb[b+b],sum[c+c];

    for(i=0; i<a; i++)
        for(j=0; j<a; j++)
        {
            scanf("%d",&A[i][j]);
        }

    for(i=0; i<b; i++)
        for(j=0; j<b; j++)
        {
            scanf("%d",&B[i][j]);
        }

    for(i=0; i<c; i++)
        for(j=0; j<c; j++)
        {
            scanf("%d",&C[i][j]);
        }

    for(i=0; i<a; i++)
    {
        for(j=0; j<a; j++)
        {
            suma1+=A[i][j];
            suma2+=A[j][i];
            if(i==j)
            {
                suma3+=A[i][j];
            }

        }
        if(suma1!=suma2)
            break;
        else
            k++;

    }

    if(k==a)
        printf("yes");
    else
        printf("no");



    return 0;

}
