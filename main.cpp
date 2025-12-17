#include <iostream>
#include <string>

class A
{
    public:
        A()
        {
            std::cout << "Construct A" << std::endl;
        } 
        virtual void yo()
        {
            std::cout << "A" << std::endl;
        }
};

class B : virtual public A
{
    public:
        B()
        {
            std::cout << "Construct B: " << std::endl;
        } 
        void yo()
        {
            std::cout << "B" << std::endl;
        }
};

class C : virtual public A
{
    public:
        C()
        {
            std::cout << "Construct C: " << std::endl;
        } 
        void yo()
        {
            std::cout << "C" << std::endl;
        }
};

class D : public C, public B
{
    public:
        D()
        {
            std::cout << "Construct D: " << std::endl;
        } 
        void yo()
        {
            std::cout << "D" << std::endl;
        }
};

//TODO: Issue in data
// int main()
// {
//     D d = D();
//     std::cout << d.n << std::endl;
//     d.yo();
// }

//TODO: Issue in functions
int main()
{
    A *d = new D();
    d->yo();
    delete d;
}
