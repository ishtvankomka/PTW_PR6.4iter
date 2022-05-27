#include <iostream>
#include <iomanip>
using namespace std;
typedef int Info;

struct Elem
{
    Elem* link;
    Info info;
};

void Insert(Elem*& L, Info value)
{
    Elem* tmp = new Elem;
    tmp->info = value;
    if (L != NULL)
    {
        Elem* T = L;
        while (T->link != L)
            T = T->link;
        T->link = tmp;
    }
    else
    {
        L = tmp;
    }
    tmp->link = L;
}

void Print(Elem* L)
{
    if (L == NULL)
        return;
    Elem* first = L;
    cout << setw(4) << L->info;
    while (L->link != first)
    {
        L = L->link;
        cout << setw(4) << L->info;
    }
    cout << endl;
}

void Change(Elem* L)
{
    if (L == nullptr)
        return;
    
    Elem* first = L;
    int i = 1;
    while (L->link != first)
    {
        if (i % 2 != 0)
        {
            swap(L->info, L->link->info);
        }
        else
            if (L->link == first)
            {
                L = L->link;
            }
        L = L->link;
        i++;
    }
}
