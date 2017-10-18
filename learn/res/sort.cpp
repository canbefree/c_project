#include<iostream>
using namespace std;

void sort(int arr[]);
void swap(int *p,int *q);

int main(){
	int a[10] = {1,2,1,4,12,6,7,811,3,10};
	sort(a);
	for(int i = 0;i<10;i++){
	cout<<a[i]<<endl;
	}
}


void sort(int *p){
	int len = 9;
	//冒泡排序
	for(int i =len ;i>0;i--){
		int flag = false;
		for(int j = 0;j<i;j++){
			if(p[j]<p[j+1]){
				flag = true;
				swap(*(p+j),*(p+j+1));
			}
		}
		if(!flag){
			continue;
		}
	}
}

void swap(int *p,int *q){
	int tmp;
	tmp = *p;
	*p = *q;
	*q = tmp;	
}