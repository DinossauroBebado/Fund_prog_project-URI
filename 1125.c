#include <stdio.h>

int g, p, s, k;
int i,j;
int corrida[101][101], sistema[101], ponto[101];
int main()
{
    int m;
    while(scanf("%i %i", &g, &p) && (g || p))
    {
        for (i = 0; i < g; ++i)
        {
            for (j = 0; j < p; ++j)
            {
                scanf("%i", &corrida[i][j]);
            }
        }
        scanf("%i", &s);
        while(s--)
        {

            scanf("%i", &k);
            for (i = 0; i < k; ++i)
                scanf("%i", &sistema[i]);
            for (i = 0; i < g; ++i)
            {
                for (j = 0; j < p; ++j)
                {
                    ponto[j] += sistema[corrida[i][j]-1];
                }
            }
            m = 0;
            for (i = 0; i < p; ++i)
                if( ponto[i] > m)
                    m = ponto[i];
            int f = 1;
            for (i = 0; i < p; ++i)
            {
                if(ponto[i] == m){
                    if(f){
                        printf("%d", i + 1);
                        f = 0;
                    }else{
                        printf(" %d", i + 1);
                    }
                }
            }
            printf("\n");
        }
    }
    return 0;
}
