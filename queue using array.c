#include<stdio.h>
#define max 5
int myQueue[max];
int F=-1;
int R=-1;
void add()
{
    int item;
    printf("\nEnter Item:");
    scanf("%d",&item);
    if(R==max-1)
    {
        printf("\nStack overflow......!");
        return;
    }
    if(F==-1 && R==-1)
    {
        F=0;
        R=0;
         
    }else{
        R++;  
    }
    myQueue[R]=item;
}

void Delete()
{
    if(R==-1)
    {
        printf("\nStack Underflow.....!");
        return;
    }
    if(F==R)
    {
        F=-1;
        R=-1;
    }
    if(F==1 && R==1)
    {
        F==-1;
        R==-1;
    }else{
        printf("\n%d is deleted...",myQueue[F]);
        F++;
    }
}
void print()
{
    if(F==-1)
    {
        printf("\nQueue is empty....!");
    }else{
        for(int i=F;i<=R;i++)
        {
            printf("\n%d",myQueue[i]);
        }
    }
}

int main()
{
    int ch;
    do{
        printf("\n1.Add\n2.Delete\n3.Print\n4.Exit");
        printf("\nEnter Choice:");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            add();
            break;
        case 2:
            Delete();
            break;
        case 3:
            print();
            break;
        case 4:
            return 0;
        default:
            break;
        }
    }while(ch);
}
