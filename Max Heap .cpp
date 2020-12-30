#include<iostream>

void MAX_HEAP(int *a, int i , int n)
{
    int j, temp ;
    temp=a[i];
    j=2*i;
    while(j<=n)
    {
        if(j<n && a[j+1]> a[j])
            j++;
        if(temp>a[j])
            break;
        else if(temp <= a[j])
        {
            a[j/2]=a[j];
            j=j*2;
        }
    }
    a[j/2]=temp;
}

void BUILD_MAX_HEAP(int* a,int n)
{
    int i;
    for(i=n/2; i>=1 ; i--)
        MAX_HEAP(a,i,n);
}
int main()
{
    int i,n ,x;
    std::cout<<"enter no of  element of array  ";
    std::cin>>n;
    int a[n];
    std::cout<<"\n element of the array ;";
    for(i=0;i<n;i++)
        std::cin>>a[i];
    BUILD_MAX_HEAP(a,n);
    std::cout<<"MAX Heap\n"<<std::endl;
    for(i=0;i<n;i++)
        std::cout<<a[i]<<std::endl;
    return 0;
}
