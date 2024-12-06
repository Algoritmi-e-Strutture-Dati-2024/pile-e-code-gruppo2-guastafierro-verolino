#include <iostream>
#include "ListaPuntatori.cpp"

// Funzione per ordinare la lista usando Bubble Sort
template <typename T>

int main() {
    coda<int> codaInt;
    pila<int> pilaInt;
    int b=12;

    pila.push(0);
    pila.push(10);
    pila.push(20);

    coda.enqueue(0);
    coda.enqueue(10);

    std::cout<<"l'elemento eliminato dalla pila è:"<<pila.pop()<<std::endl;
    std::cout<<"l'elemento eliminato dalla coda è:"<<coda.dequeue()<<std::endl;

    std::cout<<"l'elemento in testa alla coda è:"<<coda.front()<<std::endl;
    std::cout<<"l'elemento in cima alla pila è:"<<pila.top()<<std::endl;

    if(pila.isEmpty()==true){
        std::cout<<"la pila è vuota"<<std::endl;
    }
    else(){
        std::cout<<"la pila non è vuota"<<std::endl;
    }

    if(coda.isEmpty()==true){
        std::cout<<"la coda è vuota"<<std::endl;
    }
    else(){
        std::cout<<"la coda non è vuota"<<std::endl;
    }

    std::cout<<"la coda ha:"<<coda.size()<<"elementi"<<std::endl;
    std::cout<<"la pila ha:"<<pila.size()<<"elementi"<<std::endl;


    return 0;
}
