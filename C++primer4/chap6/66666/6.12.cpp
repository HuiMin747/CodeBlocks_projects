//编写一个小程序，从标准输入读入一系列 string 对象，
//寻找连续重复出现的单词。程序应该找出满足以下条件的
//单词的输入位置：该单词的后面紧跟着再次出现自己本
//身。跟踪重复次数最多的单词及其重复次数。输出重复次
//数的最大值，若没有单词重复则输出说明信息。例如，如
//果输入是：
//how, now now now brown cow cow
//则输出应表明“now”这个单词出现了三次。
#include<iostream>
#include<string>
using namespace std;
int main()
{
    //定义两个string pres, currs,代表当前输入的string和前一个string的比较逻辑
    string pres,currs;
    //定义当前string出现次数的计数，  maxcount表示出现次数最多的string的次数
    int currCnt=0,maxCnt=0;
    string  maxs;//重复次数最多的string

    while(cin>>currs)
    {
        if(currs==pres)
        {
            currCnt++;
        }
        else
        {
            //走到了 now now now || cow 之处   要考虑的是currentcount   maxcount  maxstring的更新了
            if(currCnt>maxCnt)
            {
                maxCnt=currCnt;
                maxs=currs;
            }
            //curentCount 永远是用来计量当前输入的string的重复次数的  所以有新的string出现就用该置1
            currCnt=1;

        }
        pres=currs;  //current string总是要接手新的string所以需要把值丢给prestring    这个逻辑要有
    }

    cout<<"The most repeated word is "<<maxs<<" and the repeat time is "<<maxCnt<<endl;
    return 0;
}
