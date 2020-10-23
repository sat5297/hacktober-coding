#include <iostream>
#include <conio.h>
using namespace std;

int n,e,f=1,r=-1,i;

void Insert(int pq[]);
void Delete(int pq[]);
void Display(int pq[]);

int main()
{
    int a=1,c;
    cout<<"Enter size of priority queue:";
    cin>>n;
    int pq[n];

    while(a)
    {
        cout<<"\n1.Insert\n2.Delete\n3.Display\n4.Exit\nEnter choice";
        cin>>c;

        switch(c)
        {
            case 1:
                {
                    Insert(pq);
                    break;
                }
            case 2:
                {
                    Delete(pq);
                    break;
                }
            case 3:
                {
                    Display(pq);
                    break;
                }
            case 4:
                {
                    a=0;
                    break;
                }
            default:
                cout<<"Invalid choice";
        }
    }
    return 0;
}

void Insert(int pq[])
{
    int pos;
    if(r==(n-1))
        cout<<"Overflow";
    else
    {
        cout<<"Enter element";
        cin>>e;

        if(r==-1 || f==-1)
        {
            f=r=0;
            pq[r]=e;
        }
        else
        {
            pos=r+1;
            for(i=f;i<=r;++i)
            {
                if(e>=pq[i])
                {
                    pos=i;
                    break;
                }
            }
            for(i=r;i>=pos;--i)
            {
                pq[i+1]=pq[i];
            }
            r=r+1;
            pq[pos]=e;
        }
        cout<<e<<" pushed\n";
    }
}

void Delete(int pq[])
{
    if(f==-1 || r==-1)
    {
        cout<<"Underflow";
    }
    else
    {
        e=pq[f];
        for(i=f+1;i<=r;++i)
        {
            pq[i-1]=pq[i];

        }
        r--;
        cout<<e<<" popped\n";

    }

}

void Display(int pq[])
{
    if(f==-1 || r==-1)
        cout<<"Underflow";
    else
    {
        for(i=f;i<=r;++i)
        {
            cout<<pq[i]<<'\t';
        }

    }


}
