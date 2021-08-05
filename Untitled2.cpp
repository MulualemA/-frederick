#include<iostream>
#include <cstring>
int main()
{
    std::cout << "Nour Hany";
    std::cout << " ,nourmarzouk278@gmail.com";
    std::cout << " ,@Nour";
    std::cout << " ,Genomics & Drug Development";
    int i, length, count = 0;
    char Slack_handle[4]={'N','o','u','r'};
    char Twitter_handle[8]={'N','o','u','r'};
    length = strlen(Twitter_handle);
    for(i = 0; i < length; i++)
    {
        if(Slack_handle[i] != Twitter_handle[i])
        {
            count++;
        }
    }
    std::cout <<count;

}
