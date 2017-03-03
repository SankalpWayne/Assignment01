#include <iostream>
#include <cstdlib>
using namespace std;
const int size=4;
class Queue
{
    int f,r;
    int s[size];
    public:
        Queue();
        void Insert_rear(int);
        void Delete_front();
        void dispaly();

};
Queue::Queue()
{
    f=-1;
    r=-1;
}
void Queue::Insert_rear(int x)
{
    if(r==size)
    {
        cout<<"\nQueue Overflow\n";
        return;
    }
    s[++r]=x;
    if(f==-1)
        f=0;

    cout<<x<<" is inserted\n";
}
void Queue::Delete_front()
{
    int temp;
    if(f==-1)
    {
        cout<<"\nQueue Underflow\n";
        return;
    }
    temp=s[f];
    if(f==r)
        f=r=-1;
    else
        f++;

    cout<<temp<<" is deleted\n";
}
void Queue::dispaly()
{
    int i;
    if(f==-1)
    {
        cout<<"\nEmpty Queue\n";
        return;
    }
    cout<<"\nThe Queue contents are: ";
    for(i=f;i<=r;i++)
        cout<<s[i]<<"\t";
    cout<<endl;
}
int main()
{
    Queue qu;
    int count,ch,i;
    count=0;
    while(1)
    {
        cout<<"\n1.Insert\n2.Delete\n3.Display\n4.Exit\n";
        cout<<"\nEnter your choice\n";
        cin>>ch;
        if(ch==1)
        {
            if(count==size)
                cout<<"\nQueue Overflow\n";
            else
            {
                cout<<"\nEnter the data to be inserted\n";
                cin>>i;
                qu.Insert_rear(i);
                count++;
            }
        }
        else if(ch==2)
        {
            qu.Delete_front();
            count--;
        }
        else if(ch==3)
            qu.dispaly();
        else
            exit(0);
    }
    return 0;
}
