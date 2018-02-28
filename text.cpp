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
   ofstream mfile ;
   mfile.open("abc.txt");
   mfile << a;
   mfile << b;
   mfile << c;
   
   mfile.close();
   cout<<endl<<endl;
 
   return 0;
}
