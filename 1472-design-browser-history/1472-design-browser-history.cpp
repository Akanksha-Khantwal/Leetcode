class Node {
public:
    string data;
    Node* next;
    Node* back;

    Node(): data(""), next(nullptr), back(nullptr) {}  
    Node(string val): data(val), next(nullptr), back(nullptr) {}
};

class BrowserHistory {
    Node* currentPage;

public:
    BrowserHistory(string homepage) {
        currentPage = new Node(homepage);
    }
    
    void visit(string url) {
        Node* newNode = new Node(url);
        currentPage->next = newNode;
        newNode->back = currentPage;
        currentPage = newNode;
    }
    
    string back(int steps) {
        while (steps && currentPage->back) {
            currentPage = currentPage->back;
            steps--;
        }
        return currentPage->data;
    }
    
    string forward(int steps) {
        while (steps && currentPage->next) { 
            currentPage = currentPage->next;
            steps--;
        }
        return currentPage->data;
    }
};
