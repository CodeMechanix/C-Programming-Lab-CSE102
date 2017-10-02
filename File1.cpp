#include<bits/stdc++.h>
using namespace std;
int main()
{
    ofstream myfile("test.txt"); // আমরা যদি ফাইলে কোন কিছু অউটপুট দেখায়তে চায় যা প্রোগ্রাম থেকে আউটপুট কম্পাইলার স্কিন এ না দেখায় ফাইল এ শো করতে চায় তাহলে এটা ব্যাবহার করবো।
    int roll;
    char name[20];
    // myfile.open("test.txt"); // Create a File
    // myfile.open("C:\\folder\\test.txt"); Select any Folder
    if(myfile.is_open())
    {
        cout<<"File Created"<<endl;
        for(int i=0; i<5; i++)
        {
            cin>>roll>>name;
            //myfile<<"I am Hasan Mahmud"<<endl; // Text Saved in File
            myfile<<roll<<" "<<name<<endl; // Roll and Name are Inserted
        }
    }
    else
        cout<<"File Not Created"<<endl;
    myfile.close();
    return 0;
}
