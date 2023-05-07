#ifndef _ARRAY_STACK
#define MAXSIZE 5

class ArrayStack{

	private:
		int *data;
		int _topidx;

	public:
		virtual ArrayStack(int MAXSIZE);
		virtual ~ArrayStack(delete[] data);

		virtual bool isEmpty() const = 0;
		virtual bool isFull() const = 0;

		virtual bool push(const int element) = 0;
		virtual bool pop(int &element) = 0;
		virtual bool top(int &element) const = 0;
};
#endif 
