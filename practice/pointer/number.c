#include <stdio.h>

int main(void)
{
    int num = 60;
    int* pNum = &num;   //  �N���num���O�����}�s�J����pNum

    printf("%p\n", pNum);   //  �L�X����pNum�Ҧs���O�����}
    printf("%d\n", *pNum);  //  �L�X����pNum�ҫ��V���ܼƪ���

    *pNum = 100;    //  ���ܫ���pNum�ҫ��V���ܼƪ���

    printf("%d\n", num);    //  �L�X���num����
}
