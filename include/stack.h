#pragma once
#include <iostream>


template<typename T>
class TStack {
private:
    T* arr;
    int topid;
    int sz;
public:
    TStack() {
        sz = 100;
        arr = new T[sz];
        topid = -1;
    }
    TStack(T k) {

        if (k >= 0) {
            sz = k;
            arr = new T[sz];
            topid = -1;
        }
        else {
            throw ("Invalid Argument");
        }
    }
    TStack(const TStack& s) {
        sz = s.sz;
        arr = new T[sz];
        for (int i = 0; i <= s.topid; ++i) {
            arr[i] = s.arr[i];
        }
        topid = s.topid;
    }
    ~TStack() {
        delete[] arr;
    }
    void push(T el) {
        int nsz = getSize();

        if (nsz >= sz) {
            T* tmp = new T[sz * 2];

            for (int i = 0; i < sz; ++i) {
                tmp[i] = arr[i];
            }
            delete[] arr;
            arr = tmp;
            arr[topid++] = el;
            sz = sz * 2;
        }
        else {
            arr[topid++] = el;
        }
      
    }
    T top() {
        if (!isEmpty()) {
            return arr[topid];
        }
        else {
            throw ("Stack is empty");
        }
    }


    void pop() {
        if (isEmpty()) {
            throw ("stack is empty");
        }
        topid--;
    }
    int getSize() {
        return topid + 1;
    }
    bool isEmpty() {
        return topid == -1;
    }
    bool operator==(const TStack& s) {
        for (int i = 0; i < getSize(); ++i) {
            if (arr[i] != s.arr[i]) {
                return false;
            }
        }
        return true;
    }

};
