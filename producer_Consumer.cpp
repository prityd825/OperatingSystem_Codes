#include<bits/stdc++.h>
using namespace std;

void wait(int &x){
    if(x>0){
        x--;
    }
}

void signal(int &x){
    x++;
}


int main(){
    int a[5];
    int empty=5;
    int full=0;
    int mutex=1;

    while(1){
        //cout<<"Empty: "<<empty<<"\t"<<"Full: "<<full<<"\t"<<"Mutex: "<<mutex<<"\t"<<endl;
        cout<<"Choose A Option: 1. Produce\t 2.Consume\t3.End"<<endl;
        int n;
        cin>>n;
        if(n==1){
            if(empty!=0 && mutex==1){
                wait(empty);
                wait(mutex);
                cout<<"Enter the data you want to produce:"<<endl;
                cin>>a[full];
                signal(mutex);
                signal(full);
            }else{
                cout<<"Buffer is full. You can't produce any data"<<endl;
            }
        }else if(n==2){
            if(full>0 && mutex==1){
                cout<<"Full:"<<full<<endl;
                wait(full);
                wait(mutex);
                cout<<"The Data is: "<<a[full]<<endl;
                signal(mutex);
                signal(empty);
            }else{
                cout<<"Buffer is empty. You can't consume any data"<<endl;
            }
        }else if(n==3){
            break;
        }
    }
}
