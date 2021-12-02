#include <iostream>
#include <math.h>

using namespace std;

int main(int argc, char* argv[])
{
    double x[3] {0};
    double y[3] {0};
    double z[3] {0};
    double l[3] {0};
    double p = 0;
    double s = 0;
    
    for (int i = 0; i < 3; ++ i)
    {
    	cin >> x[i] >> y[i] >> z[i];
	}
	
    l[0] = sqrt((x[1] - x[0]) * (x[1] - x[0]) + (y[1] - y[0]) * (y[1] - y[0]) + (z[1] - z[0]) * (z[1] - z[0]));
    l[1] = sqrt((x[2] - x[1]) * (x[2] - x[1]) + (y[2] - y[1]) * (y[2] - y[1]) + (z[2] - z[1]) * (z[2] - z[1]));
    l[2] = sqrt((x[0] - x[2]) * (x[0] - x[2]) + (y[0] - y[2]) * (y[0] - y[2]) + (z[0] - z[2]) * (z[0] - z[2]));
    
    p = (l[0] + l[1] + l[2]) / 2;
    s = sqrt(p * (p - l[0]) * (p - l[1]) * (p - l[2]));
    
    cout << s << endl;
    
    return EXIT_SUCCESS;
}
