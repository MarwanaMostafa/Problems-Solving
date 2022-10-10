class Solution {
public:
   int lastStoneWeight(vector<int> &stones)
{
    priority_queue<int> queue;
    for (int i : stones)
        queue.push(i);
    int x = 0;
    int y = 0;
    while (!queue.empty() && queue.size() > 1)
    {
        x = queue.top();
        queue.pop();
        y = queue.top();
        queue.pop();
        if (x != y)
            queue.push(abs(x - y));
    }
    if (queue.size() == 1)
        return queue.top();
    return 0;
}
};