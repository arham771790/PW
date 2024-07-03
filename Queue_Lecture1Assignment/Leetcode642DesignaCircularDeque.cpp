class MyCircularDeque {
public:
    int f, b, c, s;
    vector<int> arr;
    MyCircularDeque(int k) {
        f = -1, b = -1, c = k, s = 0;
        vector<int> v(k);
        arr=v;
    }

    bool insertFront(int value) {
        if (s == c)
            return false;
        if (f == -1 && b == -1) {
            f = b = 0;
        }
        else  {
            f = (f-1+c)%c;
        }
        arr[f] = value;
        s++;
        return true;
    }

    bool insertLast(int value) {
        if (s == c)
            return false;
        if (isEmpty()) {
        f= b = 0;
        } else {
            b=(b+1)%c;
        }
        arr[b] = value;
        s++;
        return true;
    }

    bool deleteFront() {
        if (s == 0)
            return false;
        if (f == c - 1) {
            f = 0;
        } else if (f == b) {
            f = b = -1;
        } else {
            f=(f+1)%c;
        }
        s--;
        return true;
    }

    bool deleteLast() {
        if (s == 0)
            return false;
        
        if (f == b) {
            f = b = -1;
        } else {
            b=(b-1 +c)%c;
        }
        s--;
        return true;
    }

    int getFront() {
        if (s == 0)
            return -1;
        else
            return arr[f];
    }

    int getRear() {
        if (s == 0)
            return -1;
        else
            return arr[b];
    }

    bool isEmpty() { return s == 0; }

    bool isFull() { return s == c; }
};

/**
 * Your MyCircularDeque object will be instantiated and called as such:
 * MyCircularDeque* obj = new MyCircularDeque(k);
 * bool param_1 = obj->insertFront(value);
 * bool param_2 = obj->insertLast(value);
 * bool param_3 = obj->deleteFront();
 * bool param_4 = obj->deleteLast();
 * int param_5 = obj->getFront();
 * int param_6 = obj->getRear();
 * bool param_7 = obj->isEmpty();
 * bool param_8 = obj->isFull();
 */
