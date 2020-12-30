#include<iostream>
#define MAX_SIZE 10
class Queue{
  private :
      int Item[MAX_SIZE];
      int rear;
      int front;
  public:
    Queue();
    void ENQUEUE(int);
    int DEQUEUE();
    int SIZE();
    void DISPLAY();
    bool IS_EMPTY();
    bool IS_FULL();
};

Queue::Queue()
{
    rear=-1;
    front=0;
}

void Queue :: ENQUEUE(int data)
{
    Item[++rear]=data;
}

int Queue ::DEQUEUE()
{
    return Item[front++];
}

void Queue :: DISPLAY()
{
    if (!IS_EMPTY())
    {
        for (int i=front; i<=rear; i++)
            std:: cout<<Item[i]<<std::endl;
    }
    else
        std::cout<<"Queue Underflow  "<<std::endl;
}

int Queue:: SIZE()
{
   return (rear-front+1);
}

bool Queue ::IS_EMPTY()
{
    if (front > rear)
        return true;
    else
        return false ;
}

bool Queue ::IS_FULL()
{
    if (this-> SIZE() >= MAX_SIZE)
        return true;
    else
        return false ;
}
int main()
{
    Queue queue;
    char ch;
    int data ,choice;
    do{
            std::cout<<"1.enqueue\n2.dequeue\n3.size\n4.Display all element\n enter your choice:  ";
            std::cin>>choice;
    switch(choice)
    {
        case 1:
            if (!queue.IS_FULL())
            {
                std::cout<<"\n Enter your data: ";
                std::cin >> data;
                queue.ENQUEUE(data);
                std::cout<<data<<"\n has been enqueued "<<std::endl;


            }
            else std:: cout<<"Queue is full"<<std::endl;
          break;
        case 2:
            if (!queue.IS_EMPTY())
                std::cout<<"\n the data dequeued is  :"<<queue.DEQUEUE();
            else
                std::cout<<"Queue is empty "<<std::endl;
            break;
        case 3:
            std::cout<<"\n Size of Queue is  "<<queue.SIZE()<<std::endl;
        break;
        case 4:
            queue.DISPLAY();
        break;

        default:
            std::cout<<"  an invalid choice  "<<std::endl;
    }
    std::cout<<"do you ant continue Y/N  "<<std::endl;
    std::cin>>ch;
    }while(ch =='y'|| ch == 'Y');
    return 0;
}
