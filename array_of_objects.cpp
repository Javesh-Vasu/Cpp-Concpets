/*Simple example to see array of object 
*arrays behave as pointer in c++
*array name is constant pointer to the first element in c++
*/

#include<iostream>
using namespace std;

//simple class
class My_class
{
public:
    int x;
    int y;
};


int main()
{
// 1.) single object dynamically allocated, first is a pointer to an object of My_class.
    My_class *first = new My_class;
    first->y = 10;
    first->x = 100;
    cout << first->x << " , " << first->y << endl;

//--------------------------------------------------------------------------------------------------------------------------
// 2. ) an array of objects , memory is allocated in static way !! 
    My_class second[10];
    second[0].x = 5;     //second->x = 5;
    second[0].y = 10;    //second->y = 10;
    cout << second->x << " , " << second->y << endl;
//            OR
    cout << second[0].x << " , " << second[0].y << endl;

//--------------------------------------------------------------------------------------------------------------------------
// 3.) Array of objects memory allocated dynamically!!

    My_class *obj = new My_class[10];

    (obj)->x = 4;
    (obj)->y = 10;
    
//       OR
    obj[1].x = 10;
    obj[1].y = 11;

//       OR
    (*obj).x = 10;

    cout << obj[1].x << " , " << (obj+1)->y;

    return 0;
}