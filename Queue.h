#ifndef WEEK8_QUEUE_H
#define WEEK8_QUEUE_H

template<class T>
class Queue {
private:
    struct Node {
        T element;
        Node* next;

        Node(T anElement, Node* aNextPointer = nullptr){
            element = anElement;
            next = aNextPointer;
        }
    };

    Node* front;
    Node* back;
    int numNodes;

public:
    Queue();
    ~Queue();
    void enqueue(T);
    void dequeue(T &);
    bool isEmpty();
    void clear();
};



//************************************************
// Constructor                                   *
//************************************************
template<class T>
Queue<T>::Queue() {

}

//************************************************
// Destructor                                    *
//************************************************


//************************************************
// Function enqueue inserts the value in num     *
// at the rear of the queue.                     *
//************************************************
template<class T>
void Queue<T>::enqueue(T anElement){

    numNodes ++;
    Node(anElement, front);

}

//************************************************
// Function dequeue removes the value at the     *
// front of the queue, and copies it into num.   *
//************************************************


//************************************************
// Function isEmpty returns true if the queue    *
// is empty, and false otherwise.                *
//************************************************


//************************************************
// Function clear dequeues all the elements      *
// in the queue.                                 *
//************************************************


#endif //WEEK8_QUEUE_H
