#include<iostream>
# define MAX 5

class Circular_Queue{

    private:
        int *cqueue_arr;
        int front, rear;
    public :
        Circular_Queue();
        void insert(int item);
        void del();
        void display();


};

Circular_Queue:: Circular_Queue()
{
  cqueue_arr = new int[MAX];
  rear = front = -1;
}

void Circular_Queue :: insert(int item)
{
    if((front == 0 && rear == MAX-1)||(front == rear+1))
        std::cout<<"Queue overflow"<<std::endl;
    if(front == -1){
        front = rear = 0;
    }
    else {
        if(rear == MAX-1)
            rear = 0;
        else
            rear += 1;
    }
    cqueue_arr[rear]=item;
}

void Circular_Queue::del()
  {
      if (front==-1)
        std::cout<<"Queue Underflow"<<std::endl;
      std::cout<<"element deleted from queue is : "<<cqueue_arr[front]<<std::endl;
      if(front == rear )
      {
          front =-1;
          rear =-1;
      }
      else{
        if(front ==MAX-1)
            front=0;
        else
            front +=1;
      }
  }

void Circular_Queue::display()
{
    int front_pos=front,rear_pos=rear;
    if(front==-1)
        std::cout<<"Queue is empty"<<std::endl;
    std::cout<<"Queue element :   ";
    if(front_pos<=rear_pos)
    {
        while(front_pos <= rear_pos)
        {
            std::cout<<cqueue_arr[front_pos]<<"dd ";
            front_pos++;
        }
    }
    else
    {
        while(front_pos <= MAX-1){
            std::cout<<cqueue_arr[front_pos]<<"  ";
            front_pos++;
        }
        front_pos=0;
        while(front_pos <=rear_pos){
            std::cout<<cqueue_arr[front_pos]<<"";
            front_pos++;
        }
     std::cout<<std::endl;

    }

}
int main()
{
    int choice ,item;
    Circular_Queue cq;
    do{
        std::cout<<"\n1.Insert\n2.Delete\n3.Display\n4.Quit\nEnter your choice";
        std::cin>>choice;
        switch(choice)
        {
            case 1 :
                std::cout<<"Input the element for insertion in queue";
                std::cin>>item;
                cq.insert(item);break;
            case 2 :
                cq.del();
                break;
            case 3 :
                cq.display();
                break;
            case 4 : break;
            default:
                std::cout<<"wrong choice"<<std::endl;

        }

    }while(choice!=4);
    return 0;
}
