#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 20




int main()
{
   int i;
   int *p;
   int vt[N];
   p = vt;
   srand((int)time(NULL));

    for(i = 0;i<N; i++)
    {
    *(p+i)=1+rand()%100;
    printf("%d" , p[i]);
    }

    return 0;
}