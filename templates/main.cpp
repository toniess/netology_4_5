#include <iostream>

template<typename T>
T square(const T& a)
{
    return a*a;
}

template<class T>
std::vector<T> square(const std::vector<T>& a)
{
    std::vector<T> vector;
    for(auto item : a)
        vector.push_back(square(item));
    return vector;
}


int main()
{
    std::cout << square(5) << std::endl;
    std::vector<int> k{1,2,3,4,5};
    k = square(k);
    for(auto item : k)
        std::cout << item << " ";
    std::cout << std::endl;
    return 0;
}
