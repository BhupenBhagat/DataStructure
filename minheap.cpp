//Insertion in Min-Heap
#include<iostream>
using namespace std;
void swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void insertIntoMinheap(int heap[],int &size,int element)
{
    size++;
    heap[size-1]=element;
    int i=size-1;
    while(i>0 && heap[i]<heap[(i-1)/2]){
        swap(heap[i],heap[(i-1)/2]);
        i=(i-1)/2;
    }
}
void printheap(int heap[],int size){
    cout<<"Min-heap";
    for(int i=0;i<size;i++)
    {
        cout<<heap[i]<<" ";

    }
    cout<<endl;

}


int main()
{
    const int MAX_SIZE=100;
    int heap[MAX_SIZE]={0};
    int size=0;
    insertIntoMinheap(heap,size,10);
    insertIntoMinheap(heap,size,20);
    insertIntoMinheap(heap,size,30);
    insertIntoMinheap(heap,size,40);
    insertIntoMinheap(heap,size,15);
    printheap(heap,size);

}