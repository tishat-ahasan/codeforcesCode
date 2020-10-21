#include <stdio.h>

int main()
{
    int n, m, i, j;
    char clr;
    int flag=0;

    scanf("%d %d", &n, &m);


        for(i = 0; i < n; ++i) {
            for(j = 0; j < m; ++j) {
                getchar();
                clr = getchar();

                if(clr != 'B' && clr != 'W' && clr != 'G')
                    flag = 1;
            }
        }

        if (flag==1)
            printf("#Color\n");
        else
            printf("#Black&White\n");
    return 0;
}