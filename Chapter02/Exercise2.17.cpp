//  Exercise2.17.cpp
//  Ad
//  What does the following code print?

#include <iostream>

int main()
{
    int i, &ri = i;
    i = 5;
    ri = 10;
    std::cout << i << " " << ri << std::endl;

    //  Pause
    std::cin.get();
    return 0;
}