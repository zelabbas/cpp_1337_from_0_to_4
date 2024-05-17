#include <iostream>

class A
{
    public:
    A(){ std::cout << "ola A\n";}
    static void display()
    {
        std::cout << "vt\n";
    }
	void show()
    {
        std::cout << "show\n";
    }
	void test()
    {
        std::cout << "test\n";
    }
};

class B :  public A
{
    public:
    B(){ std::cout << "ola b\n";};
};

class C :  public A
{
    public:
    C(){ std::cout << "ola c\n";};
};

class D: public B, public C
{
    public:
    D(){ std::cout << "ola D\n";};
};

// class F
// {
//     public:
//     F(){ std::cout << "ola\n";}
//     virtual void display()
//     {
//         std::cout << "vt";
//     }
// };

// class O:  public F
// {
//     public:
//     O(){ std::cout << "ola\n";}
// };

int main()
{
	D obj;
    std::cout << sizeof(A) << "\n";
    std::cout << sizeof(B) << "\n";
    std::cout << sizeof(C) << "\n";
    std::cout << sizeof(D) << "\n";
    // std::cout << sizeof(O) << "\n";

	obj.display();
	obj.B::display();
	obj.C::display();

    return (0);
}