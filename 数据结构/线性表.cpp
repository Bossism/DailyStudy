/*#include<iostream>
using namespace std;

const int MaxSize = 100;
template <class DataType>
class SeqList
{
public:
    SeqList(){length=0;}            
    SeqList(DataType a[],int n);    
    ~SeqList(){}                    
    int Length(){return length;}    
    DataType Get(int i);            
    int Locate(DataType x);         
    void Insert(int i,DataType x);  
    DataType Delete(int i);         
    void PrintList();               
private:
    DataType data[MaxSize];         
    int length;                     
};

template <class DataType>
SeqList<DataType>::SeqList(DataType a[],int n)
{
    if(n>MaxSize) throw "wrong parameter";
    for(int i=0;i<n;i++)
        data[i]=a[i];
    length=n;
}

template <class DataType>
DataType SeqList<DataType>::Get(int i)
{
    if(i<1 && i>length) throw "wrong Location";
    else return data[i-1];
}

template <class DataType>
int SeqList<DataType>::Locate(DataType x)
{
    for(int i=0;i<length;i++)
        if(data[i]==x) return i+1;
    return 0;
}

template <class DataType>
void SeqList<DataType>::Insert(int i,DataType x)
{
    if(length>=MaxSize) throw "Overflow";
    if(i<1 || i>length+1) throw "Location";
    for(int j=length;j>=i;j--)
        data[j]=data[j-1];
    data[i-1]=x;
    length++;
}

template <class DataType>
DataType SeqList<DataType>::Delete(int i)
{
    int x;
    if(length==0) throw "Underflow";
    if(i<1 || i>length) throw "Location";
    x = data[i-1];
    for(int j=i;j<length;j++)
        data[j-1] = data[j];
    length--;
    return x;
}

template <class DataType>
void SeqList<DataType>::PrintList()
{
    for(int i=0;i<length;i++)
        cout<<data[i]<<endl;
}

int main()
{
    SeqList<int> p;
    p.Insert(1,5);
    p.Insert(2,9);
    p.PrintList();
    p.Insert(2,3);
    cout<<p.Length()<<endl;
    p.PrintList();
    cout<<p.Get(3)<<endl;
    p.Delete(2);
    p.PrintList();
    return 0;
}

*/

#include<iostream>
using namespace std;

template<class DataType>
struct Node
{
    DataType data;
    Node<DataType> *next;
};

template<class DataType>
class LinkList
{
public:
    LinkList();                     
    LinkList(DataType a[], int n);  
    ~LinkList();                    
    int Length();                   
    DataType Get(int i);            
    int Locate(DataType x);         
    void Insert(int i, DataType x); 
    DataType Delete(int i);         
    void PrintList();               
private:
    Node<DataType> *first;          
};

template<class DataType>
LinkList<DataType>::LinkList()
{
    first = new Node<DataType>;
    first->next = NULL;
}

template<class DataType>
LinkList<DataType>::LinkList(DataType a[], int n)
{
    first = new Node<DataType>;
    first->next = NULL;
    for (int i = 0; i < n; i++)
    {
        Node<DataType> *s = new Node<DataType>;
        s->data = a[i];
        s->next = first->next;
        first->next = s;
    }
}

template<class DataType>
LinkList<DataType>::~LinkList()
{
    while (first != NULL)
    {
        Node<DataType>* q = first;
        first = first->next;
        delete q;
    }
}

template<class DataType>
int LinkList<DataType>::Length()
{
    Node<DataType>* p = first->next;
    int count = 0;
    while (p != NULL)
    {
        p = p->next;
        count++;
    }
    return count;
}

template<class DataType>
DataType LinkList<DataType>::Get(int i)
{
    Node<DataType>* p = first->next;
    int count = 1;
    while (p != NULL && count<i)
    {
        p = p->next;
        count++;
    }
    if (p == NULL) throw "Location";
    else return p->data;
}

template<class DataType>
int LinkList<DataType>::Locate(DataType x)
{
    Node<DataType> *p = first->next;
    int count = 1;
    while (p != NULL)
    {
        if (p->data == x) return count;
        p = p->next;
        count++;
    }
    return 0;
}

template<class DataType>
void LinkList<DataType>::Insert(int i, DataType x)
{
    Node<DataType> *p = first;
    int count = 0;
    while (p != NULL && count<i - 1)
    {
        p = p->next;
        count++;
    }
    if (p == NULL) throw "Location";
    else {
        Node<DataType> *s = new Node<DataType>;
        s->data = x;
        s->next = p->next;
        p->next = s;
    }
}

template<class DataType>
DataType LinkList<DataType>::Delete(int i)
{
    Node<DataType> *p = first;
    int count = 0;
    while (p != NULL && count<i - 1)
    {
        p = p->next;
        count++;
    }
    if (p == NULL || p->next == NULL) throw "Location";
    else {
        Node<DataType> *q = p->next;
        int x = q->data;
        p->next = q->next;
        return x;
    }
}

template<class DataType>
void LinkList<DataType>::PrintList()
{
    Node<DataType> *p = first->next;
    while (p != NULL)
    {
        cout << p->data << endl;
        p = p->next;
    }
}

int main()
{
    LinkList<int> p;
    p.Insert(1, 6);
    p.Insert(2, 9);
    p.PrintList();
    p.Insert(2, 3);
    p.PrintList();
    cout << p.Get(2) << endl;
    cout << p.Locate(9) << endl;
    cout << p.Length() << endl;
    p.Delete(1);
    p.PrintList();
    return 0;
}