#pragma once
#include <iostream>
using namespace std;

class DynamicArray
{
    int * ptr; // ÛÍ‡Á‡ÚÂÎ¸ Ì‡ ‰ËÌ‡Ï. Ï‡ÒÒË‚
    int size;  // ‡ÁÏÂ Ï‡ÒÒË‚‡
public:
    DynamicArray();
    DynamicArray(int);
    DynamicArray(const DynamicArray&); // copy constructor
    ~DynamicArray();
    void Input();// rand
    void Output()const;// ‚˚‚Ó‰ Ì‡ ÍÓÌÒÓÎ¸
    int * GetPointer()const;
    int GetSize()const;

    
    void ReSize(int s);
    void Sort();
    void Search(int a);
    void Reverse();



};

