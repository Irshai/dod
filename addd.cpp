#include<iostream.h>
#include<time.h>
clock_t starttime;
clock_t endtime;
long long f(int n){
	
		long long fact=1;
	
	while(n>=1){
		fact=fact*n;
		n--;
	}
	return fact;
	
}
main(){	
	
	int a;
	cin>>a;
	starttime=clock();
	cout<<f(a)<<endl;

	endtime=clock();
	std::cout<<((double)endtime-starttime)/CLOCKS_PER_SEC<<endl;
	
}
