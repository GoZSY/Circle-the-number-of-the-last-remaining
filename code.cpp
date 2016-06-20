/****************************************************************************************
链表模拟 时间O（mn） 空间O（n）
*****************************************************************************************/
class Solution {
public:
    int LastRemaining_Solution(unsigned int n, unsigned int m)
    {
        if (n < 1 || m < 1)
            return -1;
        unsigned int i = 0;
        list<int> Num;
        for (int i = 0; i < n; i++)
            Num.push_back(i);
        list<int>::iterator Cur = Num.begin();
        while (Num.size() > 1)
        {
            for (int i = 1; i < m; i++)
            {
                Cur++;
                if (Cur == Num.end())
                    Cur = Num.begin();
            }
            list<int>::iterator Next = ++Cur;
            if (Next == Num.end())
                Next = Num.begin();
            --Cur;
            Num.erase(Cur);
            Cur = Next;
        }
        return *Cur;
    }
};
/**********************************************************************************
使用推导得到的公式：
f(n,m)=0  n=1; f(n,m)=[f(n-1,m)+m]%n n>1;
************************************************************************************/
class Solution {
public:
    int LastRemaining_Solution(unsigned int n, unsigned int m)
    {
        if (n < 1 || m < 1)
            return -1;
        unsigned int i = 0;
        list<int> Num;
        for (int i = 0; i < n; i++)
            Num.push_back(i);
        list<int>::iterator Cur = Num.begin();
        while (Num.size() > 1)
        {
            for (int i = 1; i < m; i++)
            {
                Cur++;
                if (Cur == Num.end())
                    Cur = Num.begin();
            }
            list<int>::iterator Next = ++Cur;
            if (Next == Num.end())
                Next = Num.begin();
            --Cur;
            Num.erase(Cur);
            Cur = Next;
        }
        return *Cur;
    }
};
