#include <utility> //  std::move
 
    // move constructor
    ArrayWrapper (ArrayWrapper&& other)
        : _p_vals( other._p_vals  )
        , _metadata( std::move( other._metadata ) )
    {
        other._p_vals = NULL;
    }s
    
//convierte un valor l en un valor r, para que pueda invocar el constructor de movimiento. 

//______
// que contiene 
	MetaData (MetaData&& other)
	    : _name( std::move( other._name ) ) // oh, blissful efficiency
	    : _size( other._size )
	{}
	
//__________________________

void printAddress (const int& v) // const ref to allow binding to rvalues
{
    cout << reinterpret_cast<const void*>( & v ) << endl;
}
 

int main(){

	int x;
	 
	int getInt ()
	{
	    return x;
	}
	 
	int && getRvalueInt ()
	{
	    return std::move( x );
	}
	
	printAddress( getInt() ); 
	printAddress( x );
}
