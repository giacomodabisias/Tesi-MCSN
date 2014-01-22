#include <omp.h>
#include <unistd.h>
#include "profile_tracker/profile_tracker.h"
int work(int bar){
if( ProfileTracker x = ProfileTrackParams(3, 0)) {
//    #pragma omp parallel for
    if( ProfileTracker x = ProfileTrackParams(3, 5, bar - 0))
    for (int i = 0; i < bar; ++i)
    {
       sleep(1); //do stuff
    }  
    return 0;
}
};

int main(int argc, char* argv[]) {
if( ProfileTracker x = ProfileTrackParams(12, 0)) {
    int bar = 0;
//    #pragma omp parallel private(bar)
    if( ProfileTracker x = ProfileTrackParams(12, 15))
    {
//        #pragma omp sections
        if( ProfileTracker x = ProfileTrackParams(12, 17))
        {
//            #pragma omp section
            if( ProfileTracker x = ProfileTrackParams(12, 19))
            {   
                bar = 6; //do stuff (bar)
                work(bar);
            }
            
//            #pragma omp section
            if( ProfileTracker x = ProfileTrackParams(12, 25))
            {
                bar = 8; //do stuff (bar)
                work(bar);
            }
        }
    }
    return 0;
}
}