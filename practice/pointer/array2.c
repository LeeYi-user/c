#include <stdio.h>
#include <string.h>

int main(void)
{
    int array[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};    //  陣列名稱array就是指向陣列第一個元素的常數指標
    int (*pArray)[4] = array;   //  將指標array所存的記憶體位址存入指標pArray

    printf("%p\n", pArray); //  印出指標pArray所存的記憶體位址
    printf("%p\n", *pArray);    //  印出指標pArray所指向的變數的值, 因為指向的變數是陣列, 而陣列就是指標, 所以會印出記憶體位址
    printf("%d\n", *(*pArray)); //  印出指標pArray所指向的指標所指向的變數的值
    printf("%d\n", *(*pArray + 1)); //  印出以指標pArray所指向的指標所存的記憶體位址作為起始點, 位移1單位後所指向的變數的值
    printf("%d\n", *(*(pArray + 1)));   //  印出以指標pArray所存的記憶體位址作為起始點, 位移4*1單位後所指向的指標所指向的變數的值
}
