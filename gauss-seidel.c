    #include<stdio.h>
    int main()

    {

        float a[10][10], b[10], x[10], y[10];

        int n = 0, m = 0, i = 0, j = 0;

        printf("Enter size of 2d array(Square matrix) :- ");

        scanf("%d",&n);

        for (i = 0; i < n; i++)

        {

            for (j = 0; j < n; j++)

            {

                printf("Enter values number (%d,%d) :-",i,j);
                scanf("%d",&a[i][j]);

            }

        }

        printf("\nEnter Values to the right side of equation\n");

        for (i = 0; i < n; i++)

        {

            printf("Enter values number (%d,%d) :-",i,j);

            scanf("%d",&b[i]);

        }

        printf("Enter initial values of x\n");

        for (i = 0; i < n; i++)

        {

            printf("Enter values number (%d) :-",i);

            scanf("%d",&x[i]);

        }

        printf("\nEnter the no. of iteration : ");

        scanf("%d",&m);

        while (m > 0)

        {

            for (i = 0; i < n; i++)

            {

                y[i] = (b[i] / a[i][i]);

                for (j = 0; j < n; j++)

                {

                    if (j == i)

                        continue;

                    y[i] = y[i] - ((a[i][j] / a[i][i]) * x[j]);

                    x[i] = y[i];

                }

                printf("x%d = %f    ", i + 1, y[i]);

            }

            printf("\n");

            m--;

        }

        return 0;

    }
