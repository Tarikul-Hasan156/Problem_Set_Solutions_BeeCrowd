#include<bits/stdc++.h>
#include<set>
using namespace std;
int main ()
{
    set<int>s;
    int x;
    cin>>x;
    int y;
    
    for (int i=0;i<x;i++)
    {
        cin>>y;
        s.insert(y);
    }
    set<int>::iterator it;
    it=s.find(4);
    if (it!=s.end())
    {
        cout<<"Find"<<endl;
    }else 
    cout<<"Not find"<<endl;






//     for (auto it=s.begin();it!=s.end();)
//     {
//         if (*it % 2==0)
//        it= s.erase(it);
//         else 
//         ++it;                                to delete an iteam from the set which is divided  by the even number
//     }
//    for (auto it : s)
//    {
//     cout<<it<<endl;
//    }




    // s.clear();       to clear the full set





    // if (s.empty())
    // cout<<"Empty"<<endl;             check whether set is empty or non empty
    // else 
    // cout<<"NON Empty"<<endl;



    // int l=s.size();
    // cout<<l<<endl;
    // int Max=s.max_size();        size and max size in set
    // cout<<Max<<endl;



    // set<int>::iterator it;
    //  for (it=s.begin();it!=end();it++)    manual iterator create for print
    //  {
    //     cout<<*it<<endl;
    //  }





    // for (auto it:s)
    // {
    //     cout<<it<<endl       auto iterator for print
    // }
    
    return 0;
}