#include<bits/stdc++.h>
using namespace std;
int main()
{
    int roll;
    char name[20];
    ifstream myfile("test.txt"); // যদি আমরা ফাইল থেকে কোন ডাটা রিড করে প্রোগ্রাম এ দেখায়তে চায় তাহলে এটা ব্যাবহার করবো
    if(myfile.is_open())
    {
        cout<<"File Open"<<endl;
        while(myfile>>roll>>name)
        {
            cout<<roll<<" "<<name<<endl;
        }
    }
    else
        cout<<"File Not Exit"<<endl;
    return 0;
}
