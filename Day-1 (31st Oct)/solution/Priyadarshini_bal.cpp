#include<iostream>
using namespace std;

int main(){
    int i,x;
    cin>>x;
    while(x--)
    {
        cin>>i;
        if(i>=38)
        {
            int a=i%5;
            if(a==3)
            {
                i=i+2;
            }
            if(a==4){
                i=i+1;
            }
        }
         cout<<i<<endl;
   }
   return 0;
} 
