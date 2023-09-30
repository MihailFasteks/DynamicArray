#include "Dynamic array.hpp"

DynamicArray::DynamicArray():ptr(nullptr),size(0)
{}
DynamicArray::DynamicArray(int S)
{
    cout << "Construct by 1 param\n";
    size = S;
    ptr = new int[S] {0};
}

DynamicArray::DynamicArray(const DynamicArray & a)// copy constructor
{
    cout << "Copy construct\n";
    size = a.size;
    ptr = new int[size];
    for (int i = 0; i < size; i++)
    {
        ptr[i] = a.ptr[i];
    }
}
DynamicArray::~DynamicArray()
{
    cout << "Destruct\n";
    delete[] ptr;
    //Sleep(1000);
}
void DynamicArray::Input()
{
    for (int i = 0; i < size; i++)
    {
        ptr[i] = rand() % 20;
    }
}
void DynamicArray::Output()const
{
    for (int i = 0; i < size; i++)
    {
        cout<<ptr[i] <<"\t";
    }
    cout << "\n---------------------------------\n";
}
int * DynamicArray::GetPointer() const
{
    return ptr;
}
int DynamicArray::GetSize()const
{
    return size;
}
void DynamicArray::ReSize(int s)
{
    
    int* ptr2=new int[size+s];
    for (int i=0; i<size;i++)
    {
        ptr2[i]=ptr[i];
    }
    for (int i=size;i<size+s;i++)
    {
        ptr2[i]=rand() % 20;
    }
    size+=s;
    delete[]ptr;
    ptr=ptr2;
    
}
void DynamicArray::Sort()
{
//    int indMin=0;
    int temp;
    for (int i=1;i<size;i++)
    {
        if (ptr[i]<ptr[i-1])
        {
            temp=ptr[i];
            ptr[i]=ptr[i-1];
            ptr[i-1]=temp;
        }
    }
}
void DynamicArray::Search(int a)
{
    int *temp=new int[size];
    int count=0;
    for (int i=0;i<size;i++)
    {
        if (ptr[i]==a)
        {
            temp[count]=i;
            count++;
        }
    }
    for(int i=0;i<count;i++)
    {
        cout<<"Key was founded in pos: "<<temp[i]<<endl;
    }
    delete[]temp;
}
void DynamicArray::Reverse()
{
    int temp;
    int tempSize=size-1;
    for (int i=0;i<size/2;i++)
    {
        temp=ptr[i];
        ptr[i]=ptr[tempSize];
        ptr[tempSize]=temp;
        tempSize--;
    }
}
