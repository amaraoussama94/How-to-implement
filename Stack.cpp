#include<iostream>
#define MAX 6
int STACK[MAX],Top ;
//stack initializatiion
void INIT_STACK()
{
    Top=-1;
}

//check if it is empty or no
int IS_EMPTY()
{
    if (Top == -1)
        return 1;
    else
        return 0;
}

//check STACK is full or no
int IS_FULL()
{
    if (Top == MAX-1)
        return 1;
        else
            return 0;
}

void PUSH (int num)
{
  int i ;
  if (IS_FULL())
  std:: cout <<"STACK is full"<<std::endl;
  ++Top;
  STACK[Top]=num;
  std::cout<<num<<"    has been inserted"<<std::endl;
}

void DISPLAY()
{
    int i;
    if (IS_EMPTY())
        std::cout<<"STACK is empty"<<std::endl;
    std::cout<<"stack element :"<<std::endl ;
    for(i=Top;i>=0;i--)
        std::cout<<STACK[i]<<std::endl ;
}

//pop to remove item
void POP()
{
    int temp;
    if(IS_EMPTY())
        std::cout<<"STACK is empty"<<std::endl;
    temp=STACK[Top];
    --Top;
    std::cout<<temp<<"has been deleted"<<std::endl;

}
int main()
{int num;
INIT_STACK();
char ch;
do
{
    int a;
    std::cout<<"choose \n1.push\n2.poop\n3.display\nPlease enter your choice:"<<std::endl;
    std::cin>>a;
    switch(a)
    {
        case 1:
            std::cout<<"enter an integer number:   ";
            std::cin>>num;
            PUSH(num);
            break;
        case 2:POP();
               break;
        case 3:DISPLAY();
               break;
        default:
            std::cout<<"An invalid choice"<<std::endl;

    }
    std::cout<<"Do you a want to continue Y/N"<<std::endl;
    std::cin>>ch;
}while(ch == 'Y'||ch == 'y');
return 0;
}











