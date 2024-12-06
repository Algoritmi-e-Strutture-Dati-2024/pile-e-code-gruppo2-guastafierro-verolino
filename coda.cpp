#include <iostream>
#include <stdexcept>

#include<iostudio>
    template<typename T>


class coda{
    private:
    static const int MAX = 100;
    T elementi[MAX-1];
    int lung;
    int start;
    int end;

    public:
    coda(){
        lung=0;
        start=0;
        end=0;
    };

    void enqueue (T elem){
        if( lung<100){
            elementi[end]=elem;
            end=(end+1)%100;
            lung++;
        }
        else{
            std::cout<<"la coda è piena"<<std::endl;
        }
    };

    void dequeue(){
        if(lung>0){
            int b;
            b=elementi[start];
            start=(start+1)%100;
            lung--;
            return b;
        }
        else{
            std::cout<<"la coda è vuota"<<std::endl;
        }
    };

    void front(){
        return elementi[start];
    };

    bool isEmpty(){
         if(lung=0){
        
            return true;
        }
        else{
            return false;
        }
    };

    int size(){
        return lung;
    };

};
