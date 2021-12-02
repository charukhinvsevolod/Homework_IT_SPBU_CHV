#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int n = 0;
    int k = 0;
    
    cin >> n >> k;
    
    
    for (int i = 1; i <= 8; ++i)
	{
           for (int j = 1; j <= 8; ++j)
		{
        	if (i == n && j == k)
        	{
        		cout << "0 ";
			}
			else
			if ((n - i == k - j) || (n - i == j - k) || (n == i) || (k == j))
			{
				cout << "1 ";
			}
			else
			{
				cout << "2 ";
			}
    	}
    	cout << endl;
    }
    
    return EXIT_SUCCESS;
}
