#include <stdio.h>
#include <stdlib.h>
int vtx;
typedef struct Edges{
	int v1,v2;
	int cost;
}edge;



int mincost(int cost[vtx],int mst[vtx]){
	int min=9884743;
	int minidx;
	for(int i=0;i<vtx;i++){
		if(mst[i]==0&&cost[i]<min){
			min=cost[i];
			minidx=i;

		}
	}
	return minidx;
}

void print(int graph[vtx][vtx],int top[vtx]){
	for(int i=1;i<vtx;i++){
		printf("%d %d \n",top[i],i);
	}


}
void sort(edge es[],int n_edges){
int tmp_cost,v1,v2;
	for(int i=0;i<n_edges;i++){
		for(int j=i+1;j<n_edges;j++){
			if(es[i].cost>es[j].cost){
				tmp_cost=es[i].cost;
				v1=es[i].v1;
				v2=es[i].v2;
				es[i].cost=es[j].cost;
				es[i].v1=es[j].v1;
				es[i].v2=es[j].v2;
				es[j].cost=tmp_cost;
				es[j].v1=v1;
				es[j].v2=v2;
			}	
		}	
	
		
	}
	}
void sort(edge es[],int n_edges){
int tmp_cost,v1,v2;
	for(int i=0;i<n_edges;i++){
		for(int j=i+1;j<n_edges;j++){
			if(es[i].cost>es[j].cost){
				tmp_cost=es[i].cost;
				v1=es[i].v1;
				v2=es[i].v2;
				es[i].cost=es[j].cost;
				es[i].v1=es[j].v1;
				es[i].v2=es[j].v2;
				es[j].cost=tmp_cost;
				es[j].v1=v1;
				es[j].v2=v2;
			}	
		}	
	
		
	}
	}
void kruskal(int graph[vtx][vtx],int n_edges){
	int k=0;
	edge es[n_edges];
	for(int i=0;i<vtx;i++){
		for(int j=0;j<vtx;j++){
			if(graph[i][j]!=0){
				es[k].v1=i;
				es[k].v2=j;
				es[k].cost=graph[i][j];	
				k++;
			}
		}
	}
	sort(es,n_edges);
	for(int i=0;i<n_edges-4;i++){
		printf("%d %d %d\n",es[i].v1,es[i].v2,es[i].cost);
	
	}

}


//void dijkstra(int graph[vtx][vtx]){
		
		
//}
void prim(int graph[vtx][vtx]){
	int top[vtx],cost[vtx],mst[vtx];
	for(int i=0;i<vtx;i++){
		cost[i]=9884743;
		mst[i]=0;
	}
	cost[0]=0;
	for(int i=0;i<vtx;i++){
		int min=mincost(cost,mst);
		mst[min]=1;
		for(int j=0;j<vtx;j++){
			if(graph[min][j]&&mst[j]==0&&graph[min][j]<cost[j]){
				top[j]=min;
				cost[j]=graph[min][j];
			}
		}
	}
	print(graph,top);
}


int main(){
vtx=5;
int adjmat[5][5]={
{0,4,2,0,0},
{0,0,3,2,3},
{0,1,0,4,5},
{0,0,0,0,0},
{0,0,0,-5,0}

};
prim(adjmat);

kruskal(adjmat,9);

}
