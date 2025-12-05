#include <iostream>

using namespace std;

struct Node {
    int value;
    struct Node *next; 
    friend ostream &operator<<(ostream&, const Node&);
};

class linked {
    private:
        Node *head;

    public:
        linked(){
            head = NULL;
        }
        
        Node* get_head() const{
            return head;
        }
        void  set_head(Node *new_head){
            this->head = new_head;
        }

        void  add_head(int value){
            Node *n = new Node;
            n->value = value;
            n->next  = head;
            head = n;
        }
        void  add_tail(int value){
            Node *node = new Node;

            node->value = value;
            node->next  = NULL;

            Node *current;
            if (head == NULL){
                head = node;
                return;
            }
            else {
                current = head;
                while (current->next != NULL){
                    current = current->next;
                }
            }
            current->next = node;
            return;
        }
        void  remove_head()
        {
            if (head == NULL){
                return ;
			}
            Node *temp = head->next;
            delete head;
            head = temp;
            return;
        }

        void print()
        {
            Node *current = head;
            while (current != NULL)
            {
                cout << *current << endl;
                current = current->next;
            }
        } 
};

ostream& operator<<(ostream &output, const Node &l)
{
    output << l.value;
    return output;
}

Node* intercalarListas(const linked &L1, const linked &L2);

int main(int argc, char *argv[])
{
    linked l;

    l.add_head(1);
    l.add_tail(3);
    l.add_tail(5);
    l.add_tail(7);
    l.add_tail(10);
    l.add_tail(11);

	linked ll;
    ll.add_head(2);
    ll.add_tail(3);
    ll.add_tail(4);
    ll.add_tail(6);
    ll.add_tail(8);
    ll.add_tail(10);
    ll.add_tail(12);
    

    ll.set_head(intercalarListas(l, ll));
    ll.print();

    return 0;
}

Node* intercalarListas(const linked &L1, const linked &L2)
{  

    Node*  current1 = L1.get_head();
    Node* current2 = L2.get_head();

    linked* it = new linked();

    if (!current1 && !current2)
        return NULL;

    while (current1 != NULL && current2 != NULL)
    {
        if (current1->value == current2->value)
        {
            it->add_tail(current1->value);

            current1 = current1->next;
            current2 = current2->next;
        }
        else if (current1->value < current2->value){
            it->add_tail(current1->value);
            current1 = current1->next;
        }
        else{
            it->add_tail(current2->value);
            current2 = current2->next;
        }
    }

    Node *rest;

    if (current1 == NULL){
        rest = current2;
	} else{
        rest = current1;
	}
    while (rest != NULL){
        it->add_tail(rest->value);
        rest = rest->next;
    }

    return it->get_head();
}
