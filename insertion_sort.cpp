#include<iostream>
using namespace std; 
int main()
{
    int a[5] = {4, 3, 1, 2, 6};
    int ptr, i, temp;
    for(int i=1; i<5; i++){
        temp = a[i];
        ptr = i-1;
        while(temp < a[ptr] && ptr>=0){
            a[ptr+1]  = a[ptr];
            ptr--;
        }a[ptr+1] = temp;
    }
    cout<<a[ptr]<<" ";
}