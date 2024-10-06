#ifndef H_human
#define H_human

class human
{
    public:
        explicit human(int num): age(num)
        {

        }

        int age;
        void talk();
};

#include "human.cpp"
#endif
