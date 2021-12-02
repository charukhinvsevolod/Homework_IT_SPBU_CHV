#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    int a = 0;
    double sr = 0;
    
    for (int i = 0; i < 100; ++i)
	{
        cin >> a;
        sr += a;
    }
    sr = sr / 100;
    cout << sr << endl;
    
    return EXIT_SUCCESS;
}
