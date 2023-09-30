#include "Dynamic array.hpp"

DynamicArray GetObj() //‚ÓÁ‚‡Ú ÔÓ ÁÌ‡˜ÂÌË˛
{
    DynamicArray obj(3);
    obj.Input();

    return obj;
}
int main()
{
    DynamicArray a(5); // constructor 1 param
    a.Input();
    a.Output();
    DynamicArray b = a; // copy constructor
    b.Output();

    DynamicArray rezult = GetObj();
    rezult.Output();
    cout<<endl;
    a.ReSize(2);
    a.Output();
    cout<<endl;
    a.Sort();
    a.Output();
    cout<<endl;
    a.Search(9);
    cout<<endl;
    a.Reverse();
    a.Output();
    
}
