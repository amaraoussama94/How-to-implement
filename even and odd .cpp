 #include<iostream>

 int main()
 {   int n ,i;
     int arr[100];
     std::cout<<"enter the size of array :";
     std::cin>>n;
     std::cout<<"\n Enter element of the array :";
     for (i=0;i<n;i++)
        std::cin>>arr[i];
     std::cout<<"\n Even element :";
     for (i=0;i<n;i++)
        { if(arr[i]%2 == 0)
            std::cout<<arr[i]<< std::endl;
        }
     std::cout<<"\n Odd element :";
     for (i=0;i<n;i++)
        { if(arr[i]%2 == 1)
            std::cout<<arr[i]<< std::endl;
        }
     return 0;
 }
