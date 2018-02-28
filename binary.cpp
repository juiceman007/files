#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
   cout<<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)
   ofstream mfile{"abc.bin", ios::binary};
   if(mfile){
   mfile.write (reinterpret_cast<char*>(&a), sizeof(a));
   mfile.write (reinterpret_cast<char*>(&b), sizeof(b));
   mfile.write (reinterpret_cast<char*>(&c), sizeof(c));
    }
   mfile.close();
   cout<<endl<<endl;
 
   return 0;
}
