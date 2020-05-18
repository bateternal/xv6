#include "types.h"
#include "stat.h"
#include "user.h"
 
int main(void)
{
	int child1,child2;
	int pids=0;
	child1=fork();

	if(child1==0){while(1){}}
	else{
		pids = pids*100 + child1;
		child2=fork();
		if(child2==0){while(1){}}
		else{
			pids = pids*100 + child2;
			printf(1,"%d %d %d\n",child1,child2,getChildren());

			if(pids!=getChildren()){
			    printf(1,"test failed! %d\n",pids);
			}
			else{
			    printf(1,"success <3\n");
			    
			}
		}
	}
	exit();
}