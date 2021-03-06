#ifndef VECTOR_H
#define VECTOR_H
#include <assert.h>
#include <vector>

class Vector
{
    public:
        //members
        int dimension;

        //constructors
        Vector();
        Vector(int n);

        //deconstructor
        virtual ~Vector();

        //functions
        void init();

        void setValue(int pos, int value);

        int getValue(int pos);

        bool lessOrEqual(Vector& b);

    protected:
        //members
        std::vector<int> arr;

};

#endif // VECTOR_H
