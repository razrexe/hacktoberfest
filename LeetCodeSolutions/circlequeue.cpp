class MyCircularQueue {
 
    vector<int> queue;
    int frontIndex, qSize, k;
public:
    MyCircularQueue(int _k) : queue(vector<int>(_k)), frontIndex(0), qSize(0), k(_k)  {    }
	
    bool enQueue(int value) {
        if(isFull()) return false;        
        queue[(frontIndex + qSize) % k] = value;
        qSize++;
        return true;
    }
    bool deQueue() {
        if(isEmpty()) return false;  
        frontIndex = (frontIndex + 1) % k;
        qSize--;
        return true;
    }
    int Front()    {   return isEmpty() ? -1 : queue[frontIndex]; }
    int Rear()     {   return isEmpty() ? -1 : queue[(frontIndex + qSize - 1) % k];  }
    bool isEmpty() {   return !qSize;      }
    bool isFull()  {   return qSize == k;  }
};
