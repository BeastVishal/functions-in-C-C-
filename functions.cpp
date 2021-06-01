//functions:- Functions is group of instrcutions

//functions prototype
// return_type function_name(parameter_list){
	//functions body	
//}

// 1. void fuction_name(void)

void add(){
	cout<<"\nInside addition function 2+3="<<2+3<<endl;
}

// 2. void function_name(parameter_list)

void sub(int a, int b){
	cout<<"\nInside subraction function "<<a-b<<endl;
}
// 3. return_type function_name(void)

int mul(){
	int a, b;
	cout<<"\nEnter two values to multiply:";
	cin>>a>>b;
	return a*b;
}
// 4. return_type function_name(parameter_list)

int div(int a, int b){
	return a/b;
}


#include<iostream>
using namespace std;

int main(){
	

	add();

	int a, b;
	cout<<"\nEnter two no to sub:";
	cin>>a>>b;
	sub(a, b);

	cout<<"\nReturn from multipliction function: "<<mul();

	cout<<"\nEnter two no to div:";
	cin>>a>>b;
	cout<<"\nReturn from division function: "<<div(a, b);

	return 0;
}