#include <iostream>

using namespace std;
//
int main()
{
   int a;
	a = 1; //sencialmente, un lvalue proporciona una pieza de memoria (semi) permanente.
	return 0;
//------------------------------------

//También puede tener valores que no sean variables:

	int x;
	int& getRef () 
	{
	        return x;
	}
	 
	getRef() = 4;
//-------------------------

}



sd
