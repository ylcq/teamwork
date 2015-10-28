/*
 * hello.cpp
 *
 *  Created on: 2015年8月20日
 *      Author: yanglian
 */
#include<iostream>
using namespace std;

/*
* 函数模板，递归调用对一个数组进行全排列
*/
/*
template<class T>
void Perm(T list[],int k,int m)
{
  int i;
  if(k == m)//输出一个全排列
    {
      for(i=0;i <= m;i++)
        cout<<list[i]  ;
		cout<<endl;
    }
  else //list[k:m]有多个排列方式
    //递归的产生这些排列方式
    for(i = k;i <= m;i++)
    {
    extern  void Swap(char& a,char& b);
      Swap(list[k],list[i]);//交换位置，逐步前提
      Perm(list,k+1,m);
      Swap(list[k],list[i]);//将位置还回去，对下一次排列负责
    }
}
*/
 void Swap(char& a,char& b)
{//exchange a and b
  char temp = a;a = b;b = temp;
}

//一个测试程序
int main()
{
  char list[]="12345";
  cout << "hello" << endl;
  //Perm(list,0,4);
	
  return 0;
}




