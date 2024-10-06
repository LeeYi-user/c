#include <stdio.h>

void hanoi(int n, char A, char B, char C)   //  ��1�ӰѼƥN��h��, ��2�ӰѼƥN��_�l�W, ��4�ӰѼƥN��ؼЬW
{
    if (n == 1)
    {
        printf("%c -> %c\n", A, C);
    }
    else
    {
        hanoi(n - 1, A, C, B);  //  �n��@��n�h���e����qA�W����C�W, �n����A�W���e(n-1)�h����B�W
        hanoi(1, A, B, C);  //  ��A�W���e(n-1)�h����B�W��, �A��A�W�ѤU��1�h����C�W
        hanoi(n - 1, B, A, C);  //  ��A�W�ѤU��1�h����C�W��, �A��B�W��(n-1)�h����C�W
    }
}

int main(void)
{
    int num;

    printf("Please enter the number: ");
    scanf("%d", &num);
    hanoi(num, 'A', 'B', 'C');

    return 0;
}
