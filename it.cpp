#include<iostream.h>
#include<time.h>
clock_t starttime;
clock_t endtime;
main(){	
	
	int n;
	cin>>n;
	starttime=clock();
	long long fact=1;
	
	while(n>=1){
		fact=fact*n;
		n--;
	}
	cout<<fact<<endl;
	
	endtime=clock();
	std::cout<<((double)endtime-starttime)/CLOCKS_PER_SEC<<endl;
	
}
