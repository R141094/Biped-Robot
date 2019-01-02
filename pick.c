
#include <stdio.h>
#include<math.h>
int main(){
    int num;
	scanf("%d", &num);              			// Reading input from STDIN
	while(num--){
	    long long int n,k;
	    scanf("%lld %lld",&n,&k);
	    long long int p =(2*k)/(k-1);
	    printf("%lld p\n",p);
	    long long int pre=0;
	    for(int i=1;i<10000;i++){
	        long long int fg=(int)p*(pow(k,i)-1);
	        printf("%lld fg\n",fg);
	        if(fg >= n){
	            fg=n-pre;
	            if(pow(k,i)<=fg) printf("Alice\n");
	            else printf("Bob\n");
	            break;
	        }pre=fg;
	    }
	}  
}