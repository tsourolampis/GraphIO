#include <cstdio> 

const int MAXV = 1000000;
const int MAXE = 6000000;

int eList[MAXE][2]; 
int V; // number of nodes 
int E; //number of edges


void GraphIn()
{
	int s; 
	scanf("%d%d", &V,&E);
	for(int i = 0; i < E; i++){
		scanf("%d%d", &eList[i][0], &eList[i][1]);
		s += eList[i][0] + eList[i][1]; 
	}
	printf("checksum: %d\n", s);
}

int main()
{
	GraphIn();
	return 0;
}
