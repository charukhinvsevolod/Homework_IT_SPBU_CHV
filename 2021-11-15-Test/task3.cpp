#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    int b = 0;
    int nok = 0;
    
    cin >> a >> b;
    
    nok = a * b;
    while (a != b)
    {
        if (a > b)
        {
            a = a - b;
        }
        else
        {
            b = b - a;
        }
    }
    
    nok = nok / a;
    cout << nok << endl;
    
	return EXIT_SUCCESS;
}
