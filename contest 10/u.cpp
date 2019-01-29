#include <bitset>
#include <iostream>
#include <limits>

using namespace std;

int main( )
{
   // write a decimal integer as a binary number
   int num = 10;
   std::bitset<8>num;
   unsigned long int n=num.to_ulong();
   cout  << "\n\nDecimal number: " << num << "\tBinary equivalent: " << n << endl;
}
