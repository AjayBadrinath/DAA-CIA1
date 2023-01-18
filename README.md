# DAA-CIA1
CIA 1 Solution



![image](https://user-images.githubusercontent.com/92035508/213091892-5c4ba2d0-1f04-4f5d-b9d4-92c73f00d116.png)



Analysis  For the Given Problem .

In This given Problem Prims Algorithm all nodes are discovered before encountering the only negative weight.

But For generalised scenario it may not be the case always as  there may be negative penalty weights while discovering nodes 
In those scenario we can avert the penalty by changing the cost and comparing the neighbour cost ... Here I havent done that as the base case itself satisfies without encountering negative weight...

Prims OUTPUT:
  A=0 B=1 C=2 D=3 E 4
  
  
  ![image](https://user-images.githubusercontent.com/92035508/213092800-cb9a9aed-1596-4b51-83da-d354e34d60f4.png)
  
  Total Cost :
      1+2+2+3 =8


# Kruskal :
  In this Problem Kruskal Algorithm Will not work because since kruskal is a greedy algorithm and  in this case the negative penalty is considered in my case ,thereby
  accounting to a total cost of 3 which is not the mst cost we obtained in the prims ..
  Plus on top of that kruskal algorithm will not detect cylcles in a directed graph ..
  Kruskals algorithm will work only for undirected positive weighted graphs ..
  
  
  


![image](https://user-images.githubusercontent.com/92035508/213094148-e60e1667-cd06-4b85-a030-ef8caa5e4bea.png)





  If two edges have low cost kruskal considers it but it cant include into the Disjoint set union  and computes the mst cost imporoperly 
 # Dijkstra :
   Dijkstra will not work for negative weights because it assumes only positve weights in the algorithm input ..
   Shortest path may not work in directed graphs with negative weights because the nodes may have already been discovered /found but only  in later iteration of the algorithm we see that there are much more lower cost paths considering the  penalty but the only constriaint here is  the directed property of graph
