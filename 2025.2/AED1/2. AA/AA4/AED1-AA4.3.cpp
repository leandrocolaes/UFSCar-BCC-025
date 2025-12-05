#include <iostream>
using namespace std;


struct NodeL {
    int value;
    NodeL *prev;
    NodeL *next;
    friend ostream &operator<<(ostream&, const NodeL&);
};

struct NodeC {
    int key;
    int occ;
    NodeC *prev;
    NodeC *next;
    friend ostream &operator<<(ostream&, const NodeC&);
};

ostream &operator<<(ostream &output, const NodeL &node){
    output << node.value;
    return output;
}
ostream &operator<<(ostream &output, const NodeC &node){
    output << node.key << ',' << node.occ;
    return output;
}

class dl {
    private:
        NodeL *head;
    public:
        dl(){
            head = NULL;
        }
    
        NodeL* get_head() const{
            return head;
        }

        void   set_head(NodeL *nodel){
            head = nodel;
        }

        void add_head(int value)
        {
            NodeL *node = new NodeL;
            node->value = value;
            node->prev = NULL;
            node->next = head;
            head = node;
        }

        void add_tail(int value)
        {
            NodeL *node = new NodeL;
            node->value = value;
            node->next  = NULL;
            
            if (head == NULL)
            {
                node->prev = NULL;
                head = node;
                return ;
            }

            NodeL *current = head;
            while (current->next != NULL){
                current = current->next;
            }
            current->next = node;
            NodeL *pos = current->next;
            pos->prev  = current;

            current->next = node;
            return ;               
        }

        void remove_head() {
            NodeL* temp = head->next;
            delete head;

            head = temp;
        }
        void remove_tail(){
            NodeL *current = head;
            while (current->next != NULL){
                current = current->next;
            }
            current->prev->next = NULL;
            delete current;
            return ;
        }

        void print(){
            NodeL *current = head;
            while (current != NULL){
                cout << *current << endl;
                current = current->next;
            }
        }
};

class dlc {
    private:
        NodeC *head;

    public:
        dlc()
        {
            head = NULL;
        }
    
        NodeC* get_head() const {
            return head;
        }

        void set_head(NodeC *node)
        {
            head = node;
        }

        void add_head(int value, int occ)
        {
            NodeC *node = new NodeC;
            node->key   = value;
            node->prev  = NULL;
            node->next  = head;
            node->occ   = occ;
            
            if (head != NULL){
                NodeC *previous = head;
                previous->prev = node;                
            }
            
            head = node;
        }
        void add_tail(int value, int occ){
            NodeC *node = new NodeC;
            node->key = value;
            node->next = NULL;
            node->occ =  occ;
            
            if (head == NULL) {
                node->prev = NULL;
                head = node;
                return ;
            }

            NodeC *current = head;
            while (current->next != NULL){
                current = current->next;
            }
            current->next = node;
            NodeC *pos = current->next;
            pos->prev  = current;

            current->next = node;
            return ;               
        }

        void add_pos(int key, int index, int occ) {
            NodeC *node = new NodeC;
            node->key   = key;
            node->occ   = 0; 

            NodeC *current = head;
            if (index == 0){
                add_head(key, occ);
                return ;
            }

            while (index != 0 && current != NULL)
            {
                current = current->next;
                index--;
            }

            if (current == NULL)
            {
                add_tail(key, occ);
                return ;
            }

            node->next = current;
            node->prev = current->prev;

            NodeC *previous = current->prev;
            previous->next = node;

            current->prev = node;
        }

        void add_after(int key, int occ, NodeC *target)
        {
            NodeC *node = new NodeC;
            node->key   = key;
            node->occ   = occ;

            NodeC *current = head;

            if (target->next == current){
                add_tail(key, occ);
                return ;
            }

            int idx = 0;
            while (current->prev != target)
            {
                current = current->next;
                idx++;
            }

            add_pos(key, idx, occ);
            return ;
        }

        void add_before(int key, int occ, NodeC *target){
            NodeC *node = new NodeC;
            node->key   = key;
            node->occ   = 0;

            NodeC *current = head;

            if (current->prev == NULL){
                add_head(key, occ);
                return ;
            }

            int idx = 0;
            while (current != target){
                idx++;
                current = current->next;
            }
            add_pos(key, idx, occ);
        }

        void remove_pos(int index)
        {
            NodeC *current = head;
            
            if (index == 0) {
                remove_head();
                return ;
            }

            while (index != 0 && current->next != NULL)
            {
                current = current->next;
                index--;
            }

            if (current->next == NULL)
            {
                remove_tail();
                return ;
            }

            NodeC *previous = current->prev;
            previous->next  = current->next;

            NodeC *forward  = current->next;
            forward->prev   = previous;

            delete current;
            return ;
        }

        void remove_head()
        {
            NodeC* temp = head->next;
            delete head;

            head = temp;
            return ;
        }

        void remove_tail()
        {
            NodeC *current = head;
            while (current->next != NULL)
            {
                current = current->next;
            }
            current->prev->next = NULL;
            delete current;
            return ;
        }

        void print()
        {
            NodeC *current = head;
            while (current != NULL)
            {
                std::cout << *current << std::endl;
                current = current->next;
            }
        }
};

dlc * compactarLista(dl &L);
void swapNode(NodeL *n, NodeL *m);

int main(int argc, char *argv[]){
    dl dl1;

    dl1.add_head(4);
    dl1.add_tail(2);
    dl1.add_tail(1);
    dl1.add_tail(4);
    dl1.add_tail(2);
    dl1.add_tail(3);
    dl1.add_tail(1);
    dl1.add_tail(3);
    dl1.add_tail(5);
    dl1.add_tail(5);
    dl1.add_tail(2);
    dl1.add_tail(2);
    dl1.add_tail(3);
    dl1.add_tail(2);
    dl1.add_tail(4);
    dl1.add_tail(1);
    dl1.add_tail(3);
    dl1.add_tail(5);

    dlc *newdl = compactarLista(dl1);
    newdl->print();

    return 0;
}

dlc * compactarLista(dl &L){
    dlc *newL = new dlc;

    NodeL *end = NULL;
    NodeL *subcurrent = NULL;

    // ordenar
    while (end != L.get_head()){
        subcurrent = L.get_head();
        while (subcurrent->next != end) {
            if (subcurrent->value > subcurrent->next->value){
                swapNode(subcurrent, subcurrent->next);
            }   

            subcurrent = subcurrent->next;
        }
        end = subcurrent;
    }

    int occ = 0;
    subcurrent = L.get_head();
    int key = subcurrent->value;

    while (subcurrent != NULL){
        if (subcurrent->value == key){
            occ++;
        }
        else{
            newL->add_tail(subcurrent->prev->value, occ);
            key = subcurrent->value;
            occ = 1;
        }

        subcurrent = subcurrent->next;
    }
    newL->add_tail(key, occ);

    return newL;
}


void swapNode(NodeL *n, NodeL *m){
    int temp = m->value;
    m->value = n->value;
    n->value = temp;
}
