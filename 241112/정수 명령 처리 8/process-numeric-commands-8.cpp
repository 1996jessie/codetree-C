#include <iostream>
#include <string>

struct Node {
    int value;
    Node* prev;
    Node* next;
    Node(int val) : value(val), prev(nullptr), next(nullptr) {}
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;
    int size;

public:
    DoublyLinkedList() : head(nullptr), tail(nullptr), size(0) {}

    void push_front(int value) {
        Node* new_node = new Node(value);
        if (size == 0) {
            head = tail = new_node;
        } else {
            new_node->next = head;
            head->prev = new_node;
            head = new_node;
        }
        size++;
    }

    void push_back(int value) {
        Node* new_node = new Node(value);
        if (size == 0) {
            head = tail = new_node;
        } else {
            new_node->prev = tail;
            tail->next = new_node;
            tail = new_node;
        }
        size++;
    }

    void pop_front() {
        if (size == 0) return;
        std::cout << head->value << std::endl;
        Node* temp = head;
        if (size == 1) {
            head = tail = nullptr;
        } else {
            head = head->next;
            head->prev = nullptr;
        }
        delete temp;
        size--;
    }

    void pop_back() {
        if (size == 0) return;
        std::cout << tail->value << std::endl;
        Node* temp = tail;
        if (size == 1) {
            head = tail = nullptr;
        } else {
            tail = tail->prev;
            tail->next = nullptr;
        }
        delete temp;
        size--;
    }

    void get_size() const {
        std::cout << size << std::endl;
    }

    void is_empty() const {
        std::cout << (size == 0 ? 1 : 0) << std::endl;
    }

    void get_front() const {
        if (size == 0) return;
        std::cout << head->value << std::endl;
    }

    void get_back() const {
        if (size == 0) return;
        std::cout << tail->value << std::endl;
    }
};
int main() {
    // 여기에 코드를 작성해주세요.
    DoublyLinkedList dll;
    int N;
    std::cin >> N;
    std::cin.ignore();

    for (int i = 0; i < N; ++i) {
        std::string command;
        std::getline(std::cin, command);

        if (command.substr(0, 10) == "push_front") {
            int value = std::stoi(command.substr(11));
            dll.push_front(value);
        } else if (command.substr(0, 9) == "push_back") {
            int value = std::stoi(command.substr(10));
            dll.push_back(value);
        } else if (command == "pop_front") {
            dll.pop_front();
        } else if (command == "pop_back") {
            dll.pop_back();
        } else if (command == "size") {
            dll.get_size();
        } else if (command == "empty") {
            dll.is_empty();
        } else if (command == "front") {
            dll.get_front();
        } else if (command == "back") {
            dll.get_back();
        }
    }

    return 0;
}