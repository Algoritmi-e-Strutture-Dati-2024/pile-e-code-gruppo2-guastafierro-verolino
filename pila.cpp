#include<iostudio>
    template<typename T>


class pila{
    private:
    static const int MAX = 100;
    T elementi[MAX-1];
    int lung;

    public:
    pila(){
        lung=0;
    };

    void push(T elem){
        if( elementi[0]==NULL){
            elementi[0]=elem;
        }
        else{
            elementi[lung]=elem;
            lung++;
        }
    };
    
    void pop(){
        if( elementi[0]==NULL){
            std::cout<<"la pila è vuota."<<std::endl;
        }
        else{
            int b
            b=elementi[lung];
            lung--;
            return b;
        }
    };

    void top(){
        return elementi[lung];
    };

    bool isEmpty(){
         if( elementi[0]==NULL){
        
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
