#include<iostream>

void encryption(char *str, int i )
{
    for(i=0;(i<75 &&str[i]!='\0');i++)
                        str[i] = str[i]+2;// the key for encryption is 3 that is added to ASCII value
    std::cout<<"\n Encrypted string  "<< str <<std::endl;
}

void decryption(char *str, int i )
{
    for(i=0;(i<75 &&str[i]!='\0');i++)
                        str[i] = str[i]-2;// the key for encryption is 3 that is added to ASCII value
    std::cout<<"\n Encrypted string  "<< str <<std::endl;
}
 int main()
 {
int i,x;
char str[75],ch;
std::cout<<"Please enter a string : \t";
std::cin>>str;

do
{
    std::cout<<"\n Please choose folloing options: \n1. Encrypt the string.\n2. Decrypt the string :    ";
    std::cin>>x;

    switch(x)
    {
        case 1:
            encryption(str,i );
            break;
        case 2:
            decryption(str,i );
            break;

        default:
            std::cout<<"An invalid choice"<<std::endl;

    }
    std::cout<<"Do you a want to continue Y/N"<<std::endl;
    std::cin>>ch;
}while(ch == 'Y'||ch == 'y');

     return 0;
 }
