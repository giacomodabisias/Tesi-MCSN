#include <omp.h>
#include <unistd.h>
#include "thread_pool/threads_pool.h"
int work(int bar){
//    #pragma omp parallel for
    //for (int i = 0; i < bar; ++i)
{
  class Nested : public NestedBase {
  public: 
    virtual std::shared_ptr<NestedBase> clone() const { return std::make_shared<Nested>(*this); } 
    Nested(int pragma_id, int & bar)  : NestedBase(pragma_id), bar_(bar) {}
int & bar_;

void fx(ForParameter for_param, int & bar) {
for(int i = 0 + for_param.thread_id_*(bar - 0)/for_param.num_threads_; i < 0 + (for_param.thread_id_ + 1)*(bar - 0)/for_param.num_threads_; i ++ )
    {
       sleep(1); //do stuff
    }  
launch_todo_job(); 
 }
void callme(ForParameter for_param) {
  fx(for_param, bar_);
}
};
std::shared_ptr<NestedBase> nested_b = std::make_shared<Nested>(5, bar);
if(ThreadPool::getInstance("source_exctractor/test_cases/thesis_test/omp_test.cpp")->call(nested_b)) 
  nested_b->callme(ForParameter(0,1));
}
    return 0;
};

int main(int argc, char* argv[]) {
    int bar = 0;
//    #pragma omp parallel private(bar)
    {
      class Nested : public NestedBase {
      public: 
        virtual std::shared_ptr<NestedBase> clone() const { return std::make_shared<Nested>(*this); } 
        Nested(int pragma_id, int bar)  : NestedBase(pragma_id), bar_(bar) {}
    int bar_;
    
    void fx(ForParameter for_param, int bar){
//        #pragma omp sections
        {
          class Nested : public NestedBase {
          public: 
            virtual std::shared_ptr<NestedBase> clone() const { return std::make_shared<Nested>(*this); } 
            Nested(int pragma_id, int & bar)  : NestedBase(pragma_id), bar_(bar) {}
        int & bar_;
        
        void fx(ForParameter for_param, int & bar){
//            #pragma omp section
            {
              class Nested : public NestedBase {
              public: 
                virtual std::shared_ptr<NestedBase> clone() const { return std::make_shared<Nested>(*this); } 
                Nested(int pragma_id, int & bar)  : NestedBase(pragma_id), bar_(bar) {}
            int & bar_;
            
            void fx(ForParameter for_param, int & bar){   
                bar = 6; //do stuff (bar)
                work(bar);
            launch_todo_job(); 
}
void callme(ForParameter for_param) {
  fx(for_param, bar_);
}
};
std::shared_ptr<NestedBase> nested_b = std::make_shared<Nested>(19, bar);
if(ThreadPool::getInstance("source_exctractor/test_cases/thesis_test/omp_test.cpp")->call(nested_b)) 
  todo_job_.push(nested_b); 
}
            
//            #pragma omp section
            {
              class Nested : public NestedBase {
              public: 
                virtual std::shared_ptr<NestedBase> clone() const { return std::make_shared<Nested>(*this); } 
                Nested(int pragma_id, int & bar)  : NestedBase(pragma_id), bar_(bar) {}
            int & bar_;
            
            void fx(ForParameter for_param, int & bar){
                bar = 8; //do stuff (bar)
                work(bar);
            launch_todo_job(); 
}
void callme(ForParameter for_param) {
  fx(for_param, bar_);
}
};
std::shared_ptr<NestedBase> nested_b = std::make_shared<Nested>(25, bar);
if(ThreadPool::getInstance("source_exctractor/test_cases/thesis_test/omp_test.cpp")->call(nested_b)) 
  todo_job_.push(nested_b); 
}
        launch_todo_job(); 
}
void callme(ForParameter for_param) {
  fx(for_param, bar_);
}
};
std::shared_ptr<NestedBase> nested_b = std::make_shared<Nested>(17, bar);
if(ThreadPool::getInstance("source_exctractor/test_cases/thesis_test/omp_test.cpp")->call(nested_b)) 
  todo_job_.push(nested_b); 
}
    launch_todo_job(); 
}
void callme(ForParameter for_param) {
  fx(for_param, bar_);
}
};
std::shared_ptr<NestedBase> nested_b = std::make_shared<Nested>(15, bar);
if(ThreadPool::getInstance("source_exctractor/test_cases/thesis_test/omp_test.cpp")->call(nested_b)) 
  nested_b->callme(ForParameter(0,1));
}
    return 0;
}