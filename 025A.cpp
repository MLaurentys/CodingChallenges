#include <iostream>

using namespace std;

int main()
{
    int amount;
    cin>>amount;
    int rule;
    cin>>rule;
    int challenge;
    cin>>challenge;
    int sumIndex = 2;
    //check if num1 is even
    if(rule%2==0)
    {
        //check if num2 is even
        if(challenge%2==0)
        {
            //look for first odd integer
            while(sumIndex<amount)
            {
                sumIndex++;
                cin>>challenge;
                if(challenge%2 == 1)
                {
                    break;
                }
            }
        }
        else
        {
            //check if norm is even or odd and return appropriate response
            cin>>rule;
            if(rule%2 == challenge%2)
            {
                sumIndex = 1;
            }
        }
    }
    else
    {
        if(challenge%2==1)
        {
            //check if num2 is odd
            while(sumIndex<amount)
            {
                //look for first even
                sumIndex++;
                cin>>challenge;
                if(challenge%2 == 0)
                {
                    break;
                }
            }
        }
        else
        {
            //check if norm is even or odd and return appropriate response
            cin>>rule;
            if(rule%2 == challenge%2)
            {
                sumIndex = 1;
            }
        }
    }
    cout<<sumIndex;
    return 0;
}