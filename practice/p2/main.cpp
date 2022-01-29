#include "iostream"
#include "myfunc.h"
#include "United.h"

 int main()
 {
    int x, y;
     double r, t;
     United V (10, 5.5, 'V');
     United W (20, 8.5, 'U');
     r = 3.2;
     t = 2.7;
     x = 6;
     y = 9;
     std::cout << minE<int> (x, y) << std::endl;
     std::cout << minE<double> (r, t) << std::endl;
     if (minE<United> (V, W)==V)
     {
         std::cout <<"V" <<std::endl;
     }
     else 
     {
         std::cout <<"U" <<std::endl;
     }
    return 0;
}
