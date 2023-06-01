#include<iostream>

using namespace std;
int main()
{
    
    char s[20];
    cin>>s;
int leng=0;
    int c=0;

    for (int i = 0;s[i]!='\0'; i++)
    {
       leng++;
       c=c^ (s[i]-'0');
        
    }
    cout<<leng<<" value of c "<<c<<endl;
    
    int j=0;
    int f=0;
    while(j!=leng/2){
        if (s[j]!=s[leng-j-1])
        {
            cout<<"False";
            f=1;
            break;
        }
            j++;
        
    }


    if (f==0){
        cout<<"true";
        
    }
    
    

    
    return 0;
}
