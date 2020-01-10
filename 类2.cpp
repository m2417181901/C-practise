#include <iostream>
 
using namespace std;
 
class Line
{
   	public:
		void setLength( double len );
		void setWidth( double len );
		double getLength( void );
    private:
		double Length;
	    double Width;  
};
 

double Line::getLength(void)
{
    return Length*Width ;
}
 
void Line::setLength( double len )
{
    Length = len;
}
void Line::setWidth( double wid )
{
    Width = wid;
}
class point : public Line
{
			
};
int main( )
{
   Line line;
 
   line.setWidth(8.0);
   line.setLength(6.0); 
   cout << "Length of line : " << line.getLength() <<endl;
 
   
   
   
   return 0;
}
