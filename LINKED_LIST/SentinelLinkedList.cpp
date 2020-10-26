#include <iostream>

template <typename T>
class Sentinel {
    struct Node {
        T data_;
        Node* next_;
        Node* prev_;
        Node(const T& data=T{}, Node* next = nullptr, Node* prev = nullptr) {
            data_ = data;
            next_ = next;
            prev_ = prev;
        }
    };
    Node* front_;
    Node* back_;
public:
    Sentinel() {
        front_ = new Node();
        back_ = new Node();
        front_->next_ = back_;
        back_->prev_ = front_;
    }
    void insert_front(const T& data);
    void insert_back(const T& data);
    void delete_front();
    void delete_back();
    void print() const;
    ~Sentinel();
};

template <typename T>
void Sentinel<T>::insert_front(const T& data) {
    Node* newNode = new Node(data, front_->next_, front_);
    front_->next_->prev_ = newNode;
    front_->next_ = newNode;
}

template <typename T>
void Sentinel<T>::insert_back(const T& data) {
    Node* newNode = new Node(data, back_, back_->prev_);
    back_->prev_->next_ = newNode;
    back_->prev_ = newNode;
}

template <typename T>
void Sentinel<T>::delete_front() {
    if(front_->next != back_) {
        Node* rm = front_->next_;
        front_->next_ = rm->next_;
        rm->next_->prev_ = front_;
        delete rm;
    }
}

template <typename T>
void Sentinel<T>::delete_back() {
    if(front_->next_ != back_) {
        Node* rm = back_->prev_;
        back_->prev_ = rm->prev_;
        back_->prev_->next_ = back_;
        delete rm;
    }
}

template <typename T>
void Sentinel<T>::print() const {
    Node* curr = front_->next_;
    while(curr != back_) {
        std::cout << curr->data_ << " ";
        curr = curr->next_;
    }
    if(front_->next_ == back_) {
        std::cout << "empty list";
    }
    std::cout << std::endl;
}

template <typename T>
Sentinel<T>::~Sentinel() {
    Node* curr = front_->next_;
    while(curr != back_) {
        Node* rm = curr;
        curr = curr->next_;
        delete rm;
    }
}