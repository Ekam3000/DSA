#include <iostream>
using namespace std;
struct node
{
    int data;
    node *next;
};
class linked_list
{
private:
    node *head, *tail;

public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }
    void add_node(int n)
    {
        node *tmp = new node;
        tmp->data = n;
        tmp->next = NULL;

        if (head == NULL)
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->next = tmp;
            tail = tail->next;
        }
    }
    void display(linked_list* root){
        if(root==NULL){
            return;
        }else{
            cout<<root->head->data;
            root->head->next;
        }
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        linked_list a;
        int n, k;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            a.add_node(t);
        }
        a.display(a);
    }

    return 0;
}
