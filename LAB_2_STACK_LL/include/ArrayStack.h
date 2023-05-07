#ifndef _ARRAY_STACK
#define SIZE 5
class ArrayStack{
    private:
        int *data;
        int _topidx;
        int MAXSIZE;

    public:
        ArrayStack(int MAXSIZE);
         bool isEmpty() const;
         bool isFull() const;
         bool push(const int element) ;
         bool pop(int &element) ;
         bool top(int &element) const;

         ~ArrayStack(){delete[] data;};
};

#endif