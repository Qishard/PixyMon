



  GetBlock();
  int x, y;

  while(x<=118 || x>=138 || y<=118 || y>=138){
    if(x<=118){
        MoveRight();
    }
    if(x>=138){
        MoveLeft();
    }
    if(y<=118){
        MoveUp();
    }
    if(y>=1380){
        MoveDown();
    }
    GetBlock();
  }





void MoveRight(int i){
  
}