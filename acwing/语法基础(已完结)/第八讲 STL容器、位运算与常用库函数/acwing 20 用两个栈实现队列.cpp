class MyQueue {
public:
    //��������ջ
    stack<int> s1,s2;
    /** Initialize your data structure here. */
    MyQueue() {

    }

    /** Push element x to the back of queue. */
    void push(int x) {
        //�����ݴ���ջ�м���
        s1.push(x);
    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        //�Ӷ�����ȡ����һ��Ԫ�أ�Ҫ�Ƚ�s1�е�����Ԫ�ؿ�����s2��
        while(s1.size()>1)
        {
            s2.push(s1.top());
            //Ȼ��ɾ��s1�еĶ�ӦԪ��
            s1.pop();
        }
        //��¼���Ԫ��
        int res = s1.top();
        //��ջ��ɾ�����Ԫ��
        s1.pop();
        //Ȼ��s2�е�Ԫ�طŻ�s1
        while(s2.size()!=0)
        {
            s1.push(s2.top());
            //���s2
            s2.pop();
        }        
        //�����󷵻�res����
        return res;
    }

    /** Get the front element. */
    int peek() {
        //���ض�ͷԪ�أ�����������һ����ֻ�ǲ���Ҫɾ��ջ��Ԫ�ء�
        while(s1.size()>1)
        {
            s2.push(s1.top());
            //Ȼ��ɾ��s1�еĶ�ӦԪ��
            s1.pop();
        }
        //��¼�����Ԫ��
        int res = s1.top();
        //Ȼ��s2�е�Ԫ�طŻ�s1
        while(s2.size()!=0)
        {
            s1.push(s2.top());
            //���s2
            s2.pop();
        }
        //�����󷵻�res����
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
