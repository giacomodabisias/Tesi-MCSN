#include <omp.h>

int work(int bar){
    #pragma omp parallel for
    for (int i = 0; i < bar; ++i)
    {
       //do stuff
    }  
    return 0;
};

int main(int argc, char* argv[]) {
    int bar;
    #pragma omp parallel private(bar)
    {
        #pragma omp sections
        {
            #pragma omp section
            {   
                //do stuff (bar)
                work(bar);
            }
            
            #pragma omp section
            {
                //do stuff (bar)
                work(bar);
            }
        }
    }
    return 0;
}