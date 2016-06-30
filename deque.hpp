#ifndef deque
#define deque


class IsDequeEmpty{
    public:
        IsDequeEmpty(){
            std::cout << "Dequeue is empty" << std::endl;
        }
};
// Each node in a doubly linked list
class Node{
public:
    int data;
    Node* next;
    Node* prev;
};

class Deque{
private:
    Node* front;
    Node* rear;
    int count;

public:
    Deque(){
        front = NULL;
        rear = NULL;
        count = 0;
    }

    void InsertToFront(int element){
        //Create a new node
        Node* tmp = new Node();
        tmp->data = element;
        tmp->next = NULL;
        tmp->prev = NULL;

        if (isEmpty()){
            //Add the first element
            front = rear = tmp;
        }
        else{
            tmp->next = front;
            front->prev = tmp;
            front = tmp;
        }

        count++;
    }

    int RemoveFromFront(){
        if (isEmpty()){
            throw new IsDequeEmpty();
        }

        //Data in the front node
        int ret = front->data;

        //Delete the front node and fix the links
        Node* tmp = front;
        if (front->next != NULL){
            front = front->next;
            front->prev = NULL;
        }
        else{
            front = NULL;
        }
        count--;
        delete tmp;
        return ret;
    }

    void InsertToBack(int element){
        //Create a new node
        Node* tmp = new Node();
        tmp->data = element;
        tmp->next = NULL;
        tmp->prev = NULL;
        if (isEmpty()){
            //Add the first element
            front = rear = tmp;
        }
        else{
            //Append to the list and fix links
            rear->next = tmp;
            tmp->prev = rear;
            rear = tmp;
        }
        count++;
    }

    int RemoveFromBack(){
        if (isEmpty()){
            throw new IsDequeEmpty();
        }
        //  Data in the rear node
        int ret = rear->data;
        // Delete the front node and fix the links
        Node* tmp = rear;
        if (rear->prev != NULL){
            rear = rear->prev;
            rear->next = NULL;
        }
        else{
            rear = NULL;
        }
        count--;
        delete tmp;
        return ret;
    }

    int Front(){
        if (isEmpty()){
            throw new IsDequeEmpty();
        }
        return front->data;
    }

    int Back(){
        if (isEmpty()){
            throw new IsDequeEmpty();
        }
        return rear->data;
    }

    int Size(){
        return count;
    }

    bool isEmpty(){
        return count == 0 ? true : false;
    }
};
#endif //Deque
