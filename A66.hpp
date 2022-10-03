//

#include <iomanip>
#include <iostream>
using namespace std;

// complete the function maxmin( )
int maxmin(int a,int b,int c,int& max,int& min)
{
    min = a;
    max = a;
    int difference;
    if (min > b)
    {
        min = b;
    }
    else if (min > c)
    {
        min = c;
    }

    if (max < b)
    {
        max = b;
    }
    else if (max < c)
    {
        max = c;
    }
    
    difference = max-min;
    return difference;
}