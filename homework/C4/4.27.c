#include <stdio.h>

int main(void)
{
    for (int side1 = 1; side1 <= 500; side1++)
    {
        for (int side2 = 1; side2 <= 500; side2++)
        {
            for (int side3 = 1; side3 <= 500; side3++)
            {
                int sides[3] = {side1, side2, side3};
                for (int i = 0; i < 2; i++)
                {
                    for (int j = 0; j < 2; j++)
                    {
                        if (sides[j] < sides[j + 1])
                        {
                            int temp = sides[j];
                            sides[j] = sides[j + 1];
                            sides[j + 1] = temp;
                        }
                    }
                }

                if (sides[0]*sides[0] == sides[1]*sides[1] + sides[2]*sides[2])
                {
                    printf("%d\t%d\t%d\n", side1, side2, side3);
                }
            }
        }
    }

    return 0;
}
