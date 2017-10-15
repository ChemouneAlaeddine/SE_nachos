// Graphe de Golomb
// X(G) = 4
// planaire

int graph[10][10] = {
  // 0  1  2  3  4  5  6  7  8  9
    {0, 1, 1, 0, 0, 1, 0, 0, 0, 0}, //0
    {1, 0, 1, 1, 0, 0, 0, 0, 0, 0}, //1
    {1, 1, 0, 0, 0, 0, 0, 1, 0, 0}, //2
    {0, 1, 0, 0, 1, 0, 0, 0, 1, 1}, //3
    {0, 0, 0, 1, 0, 1, 0, 0, 0, 1}, //4
    {1, 0, 0, 0, 1, 0, 1, 0, 0, 1}, //5
    {0, 0, 0, 0, 0, 1, 0, 1, 0, 1}, //6
    {0, 0, 1, 0, 0, 0, 1, 0, 1, 1}, //7
    {0, 0, 0, 1, 0, 0, 0, 1, 0, 1}, //8
    {0, 0, 0, 1, 1, 1, 1, 1, 1, 0}  //9
};

int orderG(){
return 10;}

int sizeG(){
return 18;
}

int are_adjacent(int u, int v){
  if(0<= u && 0<=v && u<orderG() && v<orderG()){
      return graph[u][v];
  }
  return 0;
}