void List::remove(int idx) {
    if (root == NULL || idx < 0 || idx >= size) return;
    Node *current = root;
    if (idx == 0) { 
        root = root->next;
        delete current;
        size--;
        return;
    }
    Node *prev = NULL;
    for (int i = 0; i < idx; i++) { 
        prev = current;
        current = current->next;
    }
    prev->next = current->next;
    delete current;
    size--;
}