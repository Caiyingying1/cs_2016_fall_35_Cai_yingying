#include <stdio.h>



#define MAXHIST 20  

#define MAXLEN 10   

#define IN 1

#define OUT 0



void main()

{

    int i = 0;

    int j = 0;

    int c = 0;

    int count = 0;

    int overflow = 0;

    int state = OUT;

    int wlenth[MAXLEN];

    for (i = 0; i < MAXLEN; i++)

    {

        wlenth[i] = 0;

    }



    while ((c = getchar()) != '\n') 

    {

        if (c == ' ' || c == '\t')

        {

            state = OUT;

            if (count > 0)   

            {

                if (count <= MAXLEN)

                    wlenth[count - 1]++;

                else

                    overflow++;

                count = 0;

            }

        }

        else if (state == OUT)  

        {

            state = IN;

            count = 1;  

        }

        else

            count++;  

    }



    printf("overflow - %2d: ", overflow);   

    if (overflow > MAXHIST)

        printf("OVER THE MAXHIST");

    else

    {

        for (i = 0; i < overflow; i++)

        {

            putchar('*');

        }

    }

    putchar('\n');



    for (i = 0; i < MAXLEN; i++) 

    {

        printf("lenth%3d - %2d: ", i + 1, wlenth[i]);

        if (wlenth[i] >= MAXHIST)

            printf("OVER THE MAXHIST");

        else

        {

            for (j = 0; j < wlenth[i]; j++)

                putchar('*');

        }

        putchar('\n');

    }

}
