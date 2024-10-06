#include <stdio.h>

int main(void)
{
    int num = 60;
    int* pNum = &num;   //  將整數num的記憶體位址存入指標pNum

    printf("%p\n", pNum);   //  印出指標pNum所存的記憶體位址
    printf("%d\n", *pNum);  //  印出指標pNum所指向的變數的值

    *pNum = 100;    //  改變指標pNum所指向的變數的值

    printf("%d\n", num);    //  印出整數num的值
}
