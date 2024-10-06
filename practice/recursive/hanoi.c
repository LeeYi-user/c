#include <stdio.h>

void hanoi(int n, char A, char B, char C)   //  第1個參數代表層數, 第2個參數代表起始柱, 第4個參數代表目標柱
{
    if (n == 1)
    {
        printf("%c -> %c\n", A, C);
    }
    else
    {
        hanoi(n - 1, A, C, B);  //  要把一個n層的河內塔從A柱移到C柱, 要先把A柱的前(n-1)層移到B柱
        hanoi(1, A, B, C);  //  把A柱的前(n-1)層移到B柱後, 再把A柱剩下的1層移到C柱
        hanoi(n - 1, B, A, C);  //  把A柱剩下的1層移到C柱後, 再把B柱的(n-1)層移到C柱
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
