#include <iostream>
using namespace std;
int main() 
{
    int score;		//定义score是整数 
    cin >> score;	//输入score的值 
    if(score>=90)					cout<<"优";			//这里就是根据score的值选择 
	else if(score>=80&&score<90)	cout<<"良"; 
	else if(score>=80&&score<90)	cout<<"中"; 
	else if(score>=80&&score<90)	cout<<"及格"; 
	else							cout<<"不及格";
	
    return 0;
}
 
