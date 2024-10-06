#include <stdio.h>

int main(void)
{
    int array[10] = {1, 2, 3};  //  陣列名稱array就是指向陣列第一個元素的常數指標
    int* pArray = array; //  將指標array所存的記憶體位址存入指標pArray

    printf("%p\n", pArray);  //  印出指標pArray所存的記憶體位址
    printf("%d\n", *pArray); //  印出指標pArray所指向的變數的值
    printf("%d\n", *(pArray + 1));   //  印出以指標pArray所存的記憶體位址作為起始點, 位移1格後所指向的變數的值

    *pArray = 4; //  改變指標pArray所指向的變數的值

    printf("%d\n", array[0]);   //  印出array的第一個元素
}
