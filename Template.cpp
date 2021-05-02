/*
Simple example to demonstrate the use of Templates
*/

#include <iostream>
using namespace std;

template <typename T>

T get_max(T a, T b)
{
    return (a > b) ? a : b;
}

int main( )
{
    char a = 'F';
    char b = 'Z';

    int x = 5;
    int y = 6;

    cout << get_max<char>(a,b);
    cout << endl;
    cout << get_max<int>(x,y);
    
    return 0;
}