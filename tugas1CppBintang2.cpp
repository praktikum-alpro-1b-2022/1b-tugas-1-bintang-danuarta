#include <iostream> // input, output, stream
using namespace std;

int main() {
   int num1 = 20;
   int num2 = 30;
   int temp;

   //tukar 2 variabel angka dengan variabel sementara

   temp = num1;
   num1 = num2;
   num2 = temp;

   cout << "num1 : " << num1 << endl;
   cout << "num2 : " << num2 << endl;

   //tukar 2 angka tanpa variabel sementara

   int x = 5;
   int y = 6;


   x = y+x;
   y = x-y;
   x = x-y;

   cout << "x : " << x << endl << "y : " << y << endl;

   return 0;
}
