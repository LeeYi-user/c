#include <stdio.h>

int main(void)
{
    int array[10] = {1, 2, 3};  //  �}�C�W��array�N�O���V�}�C�Ĥ@�Ӥ������`�ƫ���
    int* pArray = array; //  �N����array�Ҧs���O�����}�s�J����pArray

    printf("%p\n", pArray);  //  �L�X����pArray�Ҧs���O�����}
    printf("%d\n", *pArray); //  �L�X����pArray�ҫ��V���ܼƪ���
    printf("%d\n", *(pArray + 1));   //  �L�X�H����pArray�Ҧs���O�����}�@���_�l�I, �첾1���ҫ��V���ܼƪ���

    *pArray = 4; //  ���ܫ���pArray�ҫ��V���ܼƪ���

    printf("%d\n", array[0]);   //  �L�Xarray���Ĥ@�Ӥ���
}
