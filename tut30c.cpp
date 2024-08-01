#include <iostream>
using namespace std;
class point
{

    public:
    int x;
    int y;

    point (void);
   

    void println()
    {
        cout<<"(" << x << "," << y << ")" << endl;
    }
};

point::point(void)
{
     x=2;
     y=3;
}



int main()
{

    point c1;
    c1.println();
    
   

    return 0;
}
