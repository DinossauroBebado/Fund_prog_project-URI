#include <stdio.h>
	int g, p, s, k;

    int corrida[101][101], sistema[101], ponto[101];

    int main()
{
    int m;
    while(scanf("%i %i", &g, &p) && (g || p))
    {
        for (int i = 0; i < g; ++i)
        {
            for (int j = 0; j < p; ++j)
            {
                scanf("%i", &corrida[i][j]);
            }
        }

    return 0;
}
}
