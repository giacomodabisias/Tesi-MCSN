#include <omp.h>
#include <unistd.h>
int work(int bar){
    #pragma omp parallel for
    for (int i = 0; i < bar; ++i)
    {
       sleep(1); //do stuff
    }  
    return 0;
};

int main(int argc, char* argv[]) {
    int bar = 0;
    #pragma omp parallel private(bar)
    {
        #pragma omp sections
        {
            #pragma omp section
            {   
                bar = 6; //do stuff (bar)
                work(bar);
            }
            
            #pragma omp section
            {
                bar = 8; //do stuff (bar)
                work(bar);
            }
        }
    }
    return 0;
}