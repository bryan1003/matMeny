#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i = 1;
    while ( i < 2);
    {
        printf("Velkommen til Kuben Fast Food!\n");
        //sleep(2);
        printf("Her er menyen for idag!\n");
        //sleep(1);
        printf("Pizza: (120kr) trykk 1 %40s Kebab: (90kr) trykk 2\n");
        //sleep(1);
        int mat; 
        scanf("%d", &mat);
            if (mat == 1)
            {
                printf("Du valgte pizza 1\n");


            }
                

        return 0;
    }



}