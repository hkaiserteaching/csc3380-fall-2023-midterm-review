
#include <iostream>

int sum(int x)
{
    std::cout << x << std::endl;
    if (x == 1)
        return 1;
    return sum(x-1) + x;
}

int main()
{
    std::cout << sum(4) << std::endl;
    return 0;
}
