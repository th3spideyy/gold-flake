#include<iostream>
using namespace std;
struct node
{
    int data ;
    struct node *next;
};
class stack{
    node *top;
    public :
    void push();
    void display();
    stack()

{
    top = NULL ;
}
};
void stack::push()
{
    int data;
    node *newnode;
    newnode = new node;
    if(newnode ==NULL)
    cout<<"stack is full";
    
    else
     {
        cout<<"enter data ";
        cin >> data;
        newnode->data=data;
        newnode->next=top;
     }
}
void pop()
{
    if(top == NULL)
    cout<<"stack is empty";
    else{
        cout<<"deleted element"
        top->data;
        node*temp;
        temp=top;
        top=top->next;
        delete temp ;
    }
}
void display ()
{
    if (top == NULL)
    cout<<"stack.empty"
    else{
        for(node*t=start)
        t!=NULL;
        t=t->next;
        cout<<t->data;
        }
}
int main(){
    stack s;
    int choice;

    while (true){
        cout<<{"\n1. push\n2. pop\n3. display\4. exit/n";}
        cout << "enter your choice";
        cin >> choice ;

        switch (choice) {
            case 1:
                s.push();
                break;
            case 2: 
                s.pop();
                break;
            case 3:
                s.display();
                break;
            case 4:
                s.exit(0);
            default:
            cout<<"invalid choice\n" ;   
        }
    }
    return 0;
}
