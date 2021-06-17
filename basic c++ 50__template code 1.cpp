#include<iostream>
using namespace std;
template<class E>
class vector{
	public:
		E *arr;
		int size;
		vector(int ssd){
			size=ssd;
			arr=new E[size];
		}
		E product_of_vectors(vector &voot){
		   E d=0;
		   int i;
		   for(i=0;i<size;i++)
		   {
		   	 d+= this->arr[i]*voot.arr[i];
		   }
		   return d;
		}
		
};

int main(){
	vector<int>obj1(3);
	obj1.arr[0]=1;
	obj1.arr[1]=2;
	obj1.arr[2]=5;
	vector<int>obj2(3);
	obj2.arr[0]=2;
	obj2.arr[1]=0;
	obj2.arr[2]=3;
	
	int bb=obj1.product_of_vectors(obj2);
	cout<<"the value of products is"<<bb<<endl;
	
	return 0;

}
