class Solution
{
    public:
    //Function to insert heap.
    priority_queue <int > small, high;
    //small-->maxheap
    //high--> minHeap
    void insertHeap(int &x)
    {
        if(small.size() == 0 || small.top() >= x) {
            small.push(x);
        }
        else {
            high.push(-x);
        }
        balanceHeaps();
    }
    
    //Function to balance heaps.
    void balanceHeaps()
    {
        if(small.size() - 1 > high.size()) {
            high.push(- small.top() );
            small.pop();
        }
        else if(high.size() > small.size()) {
            small.push(- high.top());
            high.pop();
        }
    }
    
    //Function to return Median.
    double getMedian()
    {
        if((small.size() + high.size() ) % 2 == 0)
            return (small.top() + (- high.top())) / 2.0;
        else
            return (small.top());
    }
};
