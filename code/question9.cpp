#include <iostream>

struct life_time
{
    explicit life_time(std::string const& which)
      : name(which)
    {
        std::cout << "life_time::constructor: " << name << "\n";
    }
    ~life_time()
    {
        std::cout << "life_time::destructor: " << name << "\n";
    }

    std::string name;
};

life_time g("global");

int main()
{
    life_time g("main");
    return 0;
}
