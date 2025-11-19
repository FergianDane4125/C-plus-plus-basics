// food fee

#include <iostream>
using namespace std;
int main()
{
	int order = 10;
	if (order >= 50)
		{
			cout << "free delivery" << endl;
		}
		
	if (order <= 49 && order >= 20)
		{
			cout << "$5 fee" << endl;
		}
	else
	{
		cout << "$10 fee" << endl;
	}
		
}

