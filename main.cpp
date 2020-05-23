#include "Header.h"

int main()
{
    int answer = menu();
    switch (answer){

        case 0: Body(1); break;
        case 1: Body(2); break;
        case 2: Demo();  break;
        case 3: Bench(); break;



    }
    return 0;
}



