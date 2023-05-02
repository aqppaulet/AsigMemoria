
#include <iostream>
using namespace std;

class DynamicIntegerArray {
public:
 int *data; int size;
 public:
 DynamicIntegerArray() {
 data = new int[0];
 this->size = 0;
 }
 DynamicIntegerArray(int size, int arr[]) {
 data = new int[size];
 this->size = size;
 for(int i =0;i<size;i++)
    data[i]=arr[i];
 }
DynamicIntegerArray(const DynamicIntegerArray &o) {
 data = new int[o.size];
 this->size = o.size;
 for (int i = 0; i < o.size; ++i)
 data[i] = o.data[i];
 }

 void print () const {
    std::cout <<"[";
    for(int i=0;i<size;i++)
        std::cout<<data[i]<<" ";
    std::cout<<"] "<<std::endl;

 }


 NODynamicIntegerArray() {
 delete[] data;
 }
 void pushback(int v){ //Colocar un valor al final del arreglo
int *tmp = new int (size +1);

for (int i=0;i<size;i++)
    tmp[i]=data[i];

NODynamicIntegerArray() ;
size++;
 data = tmp;
 data[size-1]=v;
 }
  void insert(int v, int pos){ //Insertar un valor en una posicion del arreglo
int *tmp = new int (size +1);

 for(int i=0;i<pos-1;i++)
    tmp[i]=data[i];

for(int i=pos-1;i<size;i++)
    tmp[i+1]=data[i];

NODynamicIntegerArray() ;
size++;
 data = tmp;
 data[pos-1]=v;

 }
   void remove(int pos){ //remover un valor del arreglo
int *tmp = new int (size -1);

 for(int i=0;i<pos-1;i++)
    tmp[i]=data[i];

for(int i=pos;i<size;i++)
    tmp[i-1]=data[i];
size--;
data=tmp;

 }
};
int main() {
int c[] ={10,5};
 DynamicIntegerArray a(2,c);
 if (true) {
 DynamicIntegerArray b = a;
 }
  a.print();
 a.pushback(6);
 a.print();


  a.insert(7,2);
   a.print();
a.remove(2);
 a.print();
 a.remove(2);
 a.print();
}
