#include<iostream>
using namespace std;

#include<vector>

/************************************************
vector:

We can copy/assign one vector with the other
vector<int>v{2,4,6},v1(v),v2;
//vector<int>v1(v),v2; //v1=v
v2=v1;

vector<int>v(5,100); //We can initialize vector elements with same value using constructor

API's:
push_back(data)
pop_back()//This deletes the front element,No return type

back()
[] //Index access

size()
empty()

swap()
clear()

insert()
erase()

capacity()
reserve()

Api's returning iterator
begin() 
end()
Api's returning reverse_iterator
rbegin()
rend()

Algorithms:
for map,multimap,set,multiset
find() 
count()

for list,forward_list
sort() //sort in ascending order
merge()
reverse()
unique() //To remove duplicates
*************************************************/

int main()
{
#if 0 
//1st Method: Using index
This is WRONG, since index is used for accessing,modifying the data but not for inserting
        vector<char>v;
        v[0]='A'; //Error
        v[1]='B'; //Error
        v[2]='C'; //Error         
#endif

#if 0
//2nd Method: Using push_back()
        vector<char>v;
        v.push_back('A');
        v.push_back('B');
        v.push_back('C');
        
#endif

#if 0
//3rd Method: Declaring an Array and then insert()            
        char x[]={'A','B','C'};
        vector<char>v;
        v.insert(v.begin(),x,x+3); //1st parameter is iterator position

#endif

#if 1
//4th Method: Default Initialization during vector declaration
	vector<char>v{'A','B','C'}; //C++11 concept
#endif

#if 0   
        //Displays from front due to index
	for(int i=0;i<v.size();i++)
	{
                 cout<<v[i]<<endl;
	}
#endif

#if 0   
        //Displays from front
	for(auto i: v)
	{
		cout<<i<<endl;
	}

#endif

#if 0   
        //Displays from front due to iterator 
	//for(vector<char>::iterator it = v.begin();it != v.end();it++)
	for(auto it = v.begin();it != v.end();it++)
	{
		cout<<*it<<endl;
	}

#endif

#if 0   
        //Displays from back due to reverse_iterator 
        //for(vector<char>::reverse_iterator it = v.rbegin();it != v.rend();it++)
	for(auto it = v.rbegin();it != v.rend();it++)
	{
		cout<<*it<<endl;
	}
#endif

#if 1   
        //Displays from back due to back() API
	for(int i=0;i<v.size();i++) //TBD
	{
                cout<<v[i]<<endl;
		//cout<<v1.back()<<endl;
		//v1.pop_back();
	}
#endif

}














