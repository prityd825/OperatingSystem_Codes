#include<iostream>
using namespace std;
int main()
{
    int n,array[50],FramesNo,Frame[10];
    cout<<"Enter the number of pages: ";
    cin>>n;
    cout<<"Enter the page number: ";
    for(int i=1; i<=n; i++)
        cin>>array[i];
    cout<<"Enter the number frames: ";
    cin>>FramesNo;
    for(int i=0; i<FramesNo; i++)
    {
        Frame[i]=-1;
    }
   cout<<"\nIncoming\tFrame 1\t\tFrame 2\t\tFrame 3"<<endl;

    int i,j,k,s=0,avail,count=0;

    for(i=1; i<=n; i++)
    {
        cout<<"   "<<array[i];
        avail=0;

       for(j=0; j<FramesNo; j++)
        {
            if(Frame[j]==array[i])
            {
                avail=1;

            }

        }

        if (avail==0)
        {
            Frame[s]=array[i];
            s=(s+1)%FramesNo;
            count++;

            for(k=0; k<FramesNo; k++)
            {
                if(Frame[k]!=-1)
                {
                    cout<<"\t\t   "<<Frame[k];
                }
                else
                {
                    cout<<"\t\t   -";
                }

            }

        }

        cout<<endl;
    }
    cout<<"Page Fault is : "<<count<<endl;
    cout<<"Page Hit is : " << n-count <<endl;
    return 0;
}

