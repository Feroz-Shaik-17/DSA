#include<iostream>
using namespace std;
void TowerofHanoi(int n, char src, char dst, char helper)
{
    if(n ==0)
    {
        return;
    }
    TowerofHanoi(n-1,src,helper,dst);
    cout<<"Move from "<<src<<" to "<<dst<<endl;
    TowerofHanoi(n-1,helper,dst,src);
}
int main()
{
    TowerofHanoi(3,'A','C','B');
    return 0;
}
