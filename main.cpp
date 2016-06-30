#include <iostream>
#include "deque.hpp"

int main(){
    Deque q;
    int NumberOfElements = 10000;
    try{
        if (q.isEmpty()){
            std::cout << "Deque is empty" << std::endl;
        }
        //Push elements to populate queue
        for(int i = 1; i <= NumberOfElements;i++){
            q.InsertToBack(i);
        }
        //Size of queue
        int sizeOfDequeue = q.Size();
        std::cout << "Size of dequeue = " << sizeOfDequeue << std::endl;

        //Pop elements
        for(int i = 0; i <sizeOfDequeue; i++){
            std::cout << q.RemoveFromBack() << std::endl;
        }
    }
    catch (...){
        std::cout << "Some exception occured" << std::endl;
    }

    Deque q1;
    try{
        if (q1.isEmpty()){
            std::cout << "Deque is empty" << std::endl;
        }

        //Push elements into queue
        for(int i = 1; i <= NumberOfElements;i++){
            q1.InsertToBack(i);
        }

        //Size of queue
        int sizeOfDequeue = q1.Size();
        std::cout << "Size of dequeue = " << q1.Size() << std::endl;

        //Pop elements
        for(int i = 0; i < sizeOfDequeue;i++){
            std::cout << q1.RemoveFromFront() << std::endl;
        }
    }
    catch (...) {
        std::cout << "Some exception occured" << std::endl;
    }
}
