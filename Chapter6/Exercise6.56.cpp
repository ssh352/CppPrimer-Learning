//  Exercise6.56.cpp
//  Ad
//  Call each element in the vector and print their result.

#include <iostream>
#include <vector>
using std::cin;
using std::cout;
using std::endl;

int add(int i1, int i2);
int sbutract(int i1, int i2);
int multiply(int i1, int i2);
int divide(int i1, int i2);

//  using type alias
using ptrFun = int(*)(int, int);

int main(int argc, char* argv[])
{
    std::vector<ptrFun> vecPtr = {add, sbutract, multiply, divide};
    int i1 = {10}, i2 = {5};
    for (auto ptr : vecPtr)
    {
        cout << ptr(i1, i2) << endl;
    }

    //  pause
    cin.get();
    return 0;
}

int add(int i1, int i2)
{
    return i1 + i2;
}

int sbutract(int i1, int i2)
{
    return i1 - i2;
}

int multiply(int i1, int i2)
{
    return i1 * i2;
}

int divide(int i1, int i2)
{
    return i1 / i2;
}