#include <stdio.h>
#include <string.h>

int main(void)
{
    int array[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};    //  �}�C�W��array�N�O���V�}�C�Ĥ@�Ӥ������`�ƫ���
    int (*pArray)[4] = array;   //  �N����array�Ҧs���O�����}�s�J����pArray

    printf("%p\n", pArray); //  �L�X����pArray�Ҧs���O�����}
    printf("%p\n", *pArray);    //  �L�X����pArray�ҫ��V���ܼƪ���, �]�����V���ܼƬO�}�C, �Ӱ}�C�N�O����, �ҥH�|�L�X�O�����}
    printf("%d\n", *(*pArray)); //  �L�X����pArray�ҫ��V�����Щҫ��V���ܼƪ���
    printf("%d\n", *(*pArray + 1)); //  �L�X�H����pArray�ҫ��V�����ЩҦs���O�����}�@���_�l�I, �첾1����ҫ��V���ܼƪ���
    printf("%d\n", *(*(pArray + 1)));   //  �L�X�H����pArray�Ҧs���O�����}�@���_�l�I, �첾4*1����ҫ��V�����Щҫ��V���ܼƪ���
}
