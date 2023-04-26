
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


 ~DynamicIntegerArray() {
 delete[] data;
 }
 void pushback(int v){ //Colocar un valor al final del arreglo

 size=size+1;
 data[size-1]=v;
 }
  void insert(int v, int pos){ //Insertar un valor en una posicion del arreglo
 size=size+1;
 for(int i=size-1;i>=pos-1;i--)
    data[i+1]=data[i];
 data[pos-1]=v;
 }
   void remove(int pos){ //remover un valor del arreglo


 for(int i=pos-1;i<size-1;i++)
    data[i]=data[i+1];
size=size-1;

 }
};
int main() {
int c[] ={10,5};
 DynamicIntegerArray a(2,c);
 if (true) {
 DynamicIntegerArray b = a;
 }
 a.pushback(6);


 cout << a.data[0] << endl; // 10
  cout << a.data[2] << endl; // 6
  a.insert(7,2);
cout << a.data[1] << endl; // 7
a.remove(2);
cout << a.data[1] << endl; // 5
}
