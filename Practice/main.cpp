#include <iostream>
#include "main.h"
using namespace std;

int main( )
{	
	Distance dist1, dist3;
	Distance dist2(10, 3.5);
	
	dist1.getDist( ); 
	dist3.AddDist(dist1, dist2);
	cout <<"\ndist1 ="  ; dist1.ShowDist( );
	 cout <<"\ndist2 = " ; dist2.ShowDist( );
	 cout <<"\ndist3 = " ; dist3.ShowDist( );
     return 0;
}


