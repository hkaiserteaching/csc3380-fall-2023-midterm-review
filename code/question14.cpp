// WRITE A FUNCTION vector<string> center(vector<string> const& v); THAT
// TREATS THE STRINGS STORED IN ITS ARGUMENT ‘V’ AS A ‘PICTURE’, I.E.
// EACH STRING FORMS A LINE (OR ROW) OF SOME PIECE OF ASCII ART. THE
// FUNCTION SHOULD RETURN THE CENTERED PICTURE.

#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> center(std::vector<std::string> const& v)
{
    std::vector<std::string> result;

    return result;
}

int main()
{
    std::vector<std::string> example = {"This", "is", "a", "small", "Picture"};

    for (auto const& s : center(example))
    {
        std::cout << s << "\n";
    }

    return 0;
}