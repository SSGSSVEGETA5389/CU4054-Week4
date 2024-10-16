#include <iostream>
#include "GraphicsManager.h"	
using namespace std;



int main()
{
	double item1, item2, item3, item4, item5, item6;
	double totalCost;
	double discount1 = 0.0;
	double discount2 = 0.0;


	cout << "Enter price of 6 items: " << endl; 
	cin >> item1, item2, item3, item4, item5, item6;
	totalCost = item1 + item2 + item3 + item4 + item5 + item6;

	if (item1 < item2 && item1 < item3)
	{

//Item one has lowest price
	}
	else if (item2 < item1 && item2 < item3)
	{
		//Item 2 has lowest price
	}
	else
	{
		//Item 3 has lowest

	}
}