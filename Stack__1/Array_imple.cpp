#include <iostream>
using namespace std;

class Queue {
private:
    int arr[5];
    int front;
    int back;

public:

    Queue() {
        front = 0;
        back = -1;
    }
    bool isEmpty() {
        return back==-1;
    }

    void push(int x) {
        if (back == 4) {
            cout << "Queue overflow" <<endl;
            return;
        }
        back = (back + 1) % 5;
        arr[back] = x;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Queue underflow" <<endl;
            return;
        }
        front = (front + 1) % 5;
    }

    int frontele() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        return arr[front];
    }
    void display(){
        if(isEmpty()) cout<<"Queue is empty";
        else{
            for(int i=front;i<=back;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }

    

    int size() {
        if(back==-1) return 0;
        else{
            return (front-back+1);
        }
    }
};

int main() {
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);


   q.display();

}

