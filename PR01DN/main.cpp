#include <stdio.h>
#include <conio.h>
#include <mem.h>
#include <cstdlib>
#define NMAX 20
int a[NMAX][NMAX],d[NMAX],i,j,k,n,x,y,min,imin;
char c[NMAX],varf[NMAX];
char name[NMAX][NMAX];// = {"DN", "Balti", "Chisinau", "Soroca", "Tiraspol", "Orhei", "Drochia", "Floresti", "Glodeni", "Ocnita"};
char dname[NMAX][NMAX];

void VectorExit (char c, int n, int a[])
{
    printf("\n Vector %c: ", c);
    for (int i=1; i<=n; i++)
        printf("%d ", a[i]);
    //printf("\n");
}
void VectorExit (char c, int n, char a[])
{
    printf("\n Vector %c: ", c);
    for (int i=1; i<=n; i++)
        printf("%s ", a);
    printf("\n");
}

int main( )
{
    FILE *f;
    f=fopen("dijkstra.in","r");
    if (f==NULL)
    {
        printf("Eroare la deschidere ");
        return 0;
    }
    fscanf(f,"%d",&n);
    // Citim denumirile
    for(i=1; i<=n; i++)
    {
        fscanf(f, "%s", name[i]);
        strcpy(dname[i], name[i]);
        strcat(dname[i], ",");
    }
    // Citim datele din matricea de incidenta
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            fscanf(f,"%d",&a[i][j]);
    fscanf(f,"%d",&x);
    memset(d,0,sizeof(d));
    memset(varf,0,sizeof(varf));
    for(i=1; i<=n; i++)
    {
        c[i]=1;
        if(a[x][i])
            varf[i]=x;
    }
    c[x]=0;
    for(i=1; i<=n; i++)
        if(c[i])
            d[i]=a[x][i];
    for(y=1; y<=n; y++)
        if(x!=y)
        {
            for(k=1; k<=n-2; k++)
            {
                min=10000;
                for(i=1; i<=n; i++)
                    if(c[i]&& d[i]>0 && d[i]<min)
                    {
                        min=d[i];
                        imin=i;
                    }
                if (imin==y)
                    break;
                c[imin]=0;
                for(i=1; i<=n; i++)
                    if(c[i] && d[imin]!=0 && a[imin][i]!=0)
                        if(d[i]==0 || d[i]>d[imin]+a[imin][i])
                        {
                            d[i]=d[imin]+a[imin][i];
                            varf[i]=imin;
                        }
            }
            VectorExit('D', n, d);
            // VectorExit('C', n, c);
            printf("\n Costa minima intre %s si %s este: %d lei \n \tRuta: \n\t\t", name[x], name[y], d[y]);
            c[i=0]=y;
            while(varf[i]!=x && varf[c[i]])
                c[++i]=varf[c[i-1]];
            if(c[i]!=x)
                c[++i]=x;
            for(; i>0;)
                printf("%s ", dname[c[i--]]);
            printf("%s.\n", name[c[0]]);

        }
    getch();
    return 0;
}
