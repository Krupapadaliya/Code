#include<iostream>
using namespace std;

int main()
{
    int b[10];
    int n;
    
    cout << "Enter 10 integer value:";
    
    for (int i=0; i<10; ++i){
    cin >>  b[i];
    }
    cout << "Enter any number:" ;
    cin >> n;
    for (int i=0; i<10; i++){
    
    if(b[i] == n)
    {
    cout << "yes";
    break;
    }
 }   
        return 0;
}