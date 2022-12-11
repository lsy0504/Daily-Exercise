class MyQueue {
public:
    //创建两个栈
    stack<int> s1,s2;
    /** Initialize your data structure here. */
    MyQueue() {

    }

    /** Push element x to the back of queue. */
    void push(int x) {
        //将数据存在栈中即可
        s1.push(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        //从队列中取出第一个元素，要先将s1中的其他元素拷贝到s2中
        while(s1.size()>1)
        {
            s2.push(s1.top());
            //然后删除s1中的对应元素
            s1.pop();
        }
        //记录这个元素
        int res = s1.top();
        //从栈中删掉这个元素
        s1.pop();
        //然后将s2中的元素放回s1
        while(s2.size()!=0)
        {
            s1.push(s2.top());
            //清空s2
            s2.pop();
        }        
        //结束后返回res即可
        return res;
    }

    /** Get the front element. */
    int peek() {
        //返回队头元素，与上述操作一样，只是不需要删除栈顶元素。
        while(s1.size()>1)
        {
            s2.push(s1.top());
            //然后删除s1中的对应元素
            s1.pop();
        }
        //记录下这个元素
        int res = s1.top();
        //然后将s2中的元素放回s1
        while(s2.size()!=0)
        {
            s1.push(s2.top());
            //清空s2
            s2.pop();
        }
        //结束后返回res即可
        return res;
    }

    /** Returns whether the queue is empty. */
    bool empty() {
        return s1.empty();
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue obj = MyQueue();
 * obj.push(x);
 * int param_2 = obj.pop();
 * int param_3 = obj.peek();
 * bool param_4 = obj.empty();
 */
