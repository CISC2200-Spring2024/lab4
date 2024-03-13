#include <iostream>
#include "SLList.h"

using namespace std;

int main()
{
	SLList<int> a;

	a.addFirst (10);
	a.addFirst (20);
	a.addFirst (30);
	a.addFirst (40);
	a.addFirst (50);

	cout <<"Display the list in order:";
	a.print(cout);
	cout <<endl; 

	cout <<"Display the list in reverse order:";
	a.reverse_print(cout);
	cout <<endl; 
}
