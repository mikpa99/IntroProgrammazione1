#include <stdio.h>
void main()
{
int f0 = 0;
int f1 = 1;
int n;
int f;
printf("inseridci valore di n\n");
scanf("%d", &n);
    int fi;
    int fi1 = f1;
    int fi2 = f0;
for(int i=2;i<=n; i++)
    {
        fi = fi1 + fi2;
        fi2 = fi1;
        fi1 = fi;
        printf("%d\n", fi);
    }
}
