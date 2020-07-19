#include <iostream>

using namespace std;
//
int main()
{
/// constante :
	const string& name = getName(); 
	
/*aquí es que no puede usar una referencia "mutable" 
porque, si lo hiciera, podría modificar algún objeto que está a punto de desaparecer*/

//----------------------
//Las referencias de Rvalue usan la sintaxis && en lugar de solo &, 
//y pueden ser const y no const, 
//al igual que las referencias de lvalue

	const string&& name = getName(); 
	
	
	printReference (const String& str)
	{
	    cout << str;
	}
	 
	printReference (String&& str)
	{
		cout << str;
	}

	return 0;
}


