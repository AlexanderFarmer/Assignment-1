//Name: Alexander Farmer
//Email: alf7mq@mail.umkc.edu
//Date: 9/1/2019
//Assignment: 1

#include <iostream>

using namespace std;

int main()
{
	int x, y;
	for (int i = 10; i <= 100; i+=10)
	{
		x = 100 * i + 10;
	
		y = 5 * i * i + 2;

		if (x > y)
		{
			cout << "At i = " << i << " Y1 is larger" << endl;
			cout << x << " > " << y << endl;
		}
		else if (y > x)
		{
			cout << "At i = " << i << " Y2 is larger" << endl;
			cout << y << " > " << x << endl;
		}
		else
		{
			cout << "Both y1 and y2 were completed at the same time" << endl;
		}
	
	}

	return 0;
}
