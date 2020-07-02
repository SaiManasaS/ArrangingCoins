#include <iostream>

using namespace std;

void arranging_coins(int in_num)
{
	int i = 1, n = in_num, ret_val = 0;
	for(i = 1; n >= 0 ; i++)
	{
        n = n - i;
		if(n >= 0)
		{
			ret_val = i;
		}
	}
	cout << "ret_val is:" << ret_val;
}

void main()
{
    arranging_coins(16);
	while(1);
}