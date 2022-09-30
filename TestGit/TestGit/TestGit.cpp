#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

int main()
{
    std::vector<int> v{ 1, 2, 3, 4 };
    int n1 = 3;
    int n2 = 6;
    auto is_even = [](int i) { return i % 2 == 0; };
    auto is_lt2 = [](int i) { return i < 2; };

    auto result1 = std::find(begin(v), end(v), n1);
    auto result2 = std::find(begin(v), end(v), n2);
    auto result3 = std::find_if(begin(v), end(v), is_even);
    auto result4 = std::find_if(begin(v), end(v), is_lt2);

    (result1 != std::end(v))
        ? std::cout << "v contains " << n1 << '\n'
        : std::cout << "v does not contain " << n1 << '\n';

    (result2 != std::end(v))
        ? std::cout << "v contains " << n2 << '\n'
        : std::cout << "v does not contain " << n2 << '\n';

    (result3 != std::end(v))
        ? std::cout << "v contains an even number: " << *result3 << '\n'
        : std::cout << "v does not contain even numbers\n";

    (result4 != std::end(v))
        ? std::cout << "v contains a number less than 2: " << *result4 << '\n'
        : std::cout << "v does not contain a number less than 2\n";
}