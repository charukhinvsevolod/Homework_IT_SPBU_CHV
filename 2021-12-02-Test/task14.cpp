#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char* argv[])
{
    double H = 0;
    double M = 0;
    double R = 0;
    double G = 0.000000000066743; \\гравитационная постоянная
    
    cin >> H >> M >> R;
    
    cout << R * sqrt(2 * H / (G * M)) << endl;
    
    return EXIT_SUCCESS;
}
