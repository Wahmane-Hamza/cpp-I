#include<iostream>

class rectangle
{
    private:

    int *width;
    int *height;

    public:

    rectangle (int x, int y)
    {
        width = new int;
        height = new int;

        *width = x;
        *height = y;
        std::cout << "constract" << std::endl;
    }
    ~rectangle ()
    {
        delete width;
        delete height;
        std::cout << "destract" << std::endl;
    }

    int width2()
    {
        return (*width * 2);
    }

    int height2()
    {
        return (*height * 2);
    }
};

int main()
{
    rectangle r1(10,2);

    std::cout << r1.height2() << std::endl;
    std::cout << r1.width2() << std::endl;
}