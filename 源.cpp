#include<iostream>
using namespace std;
/*£¿ int main(void)
{
	const int a = 10;
	int *p = (int *)(&a);
	*p = 20;
	cout << a << *p << endl;
	system("pause");
	return 0;
} */
/* void test1()
{
	int i = 3;
	printf("%d %d", ++i, ++i);
}


int main()
{
	test1();
	system("pause");
	return 0;
} */
/* main()
{
	char str[] = "geneius";
	print(str);
}

void print(char*s)
{
	if (*s){
		print(++s);
		printf("%c", *s);
	}
} */
/*  class base
{
public:
	virtual int foo(int x)
	{
		return x * 10;
	}
	int foo(char x[14])
	{
		return sizeof(x) + 10;
	}
};
class derived :public base
{
	int foo(int x)
	{
		return x * 20;
	}
	virtual int foo(char x[10])
	{
		return sizeof(x) + 20;
	}
};

int main()
{
	derived stderived;
	base *pstbase = &stderived;
	char x[10];
	printf("%d\n", pstbase->foo(100) + pstbase->foo(x));
	system("pause");
	return 0;
}*/
/* void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}

int main()
{
	int a = 100;
	int b = 999;
	swap_int(&a,&b);
	system("pause");
	return 0;
} */
/* class A
{
public:
	void funcA()
	{
		printf("funcA called\n");
	}
	virtual void funcB()
	{
		printf("funcB called\n");
	}
};
class B :public A
{ 
public:
	void funcA()
	{
		A::funcA();
		printf("funcAB called\n");
	}
	virtual void funcB()
	{
		printf("funcBB called\n");
	}
};
void main(void)
{
	B b;
	A *pa;
	pa = &b;
	A *pa2 = new A;
	pa->funcA(); 
		pa->funcB();
	pa2->funcA();
	pa2->funcB();
	delete pa2;
	system("pause");
} */
