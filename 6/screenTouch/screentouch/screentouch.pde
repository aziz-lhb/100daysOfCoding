float X, Y, r, g, b, rr, rg, rb;
int ac= 2;

void setup() {
  fullScreen();
  //background(23, 45, 154);
}

void draw(){
 //do{
   // rect(X,Y, 100,100);
 //   fill (r, g, b);
//    X=X+1;
 //   Y=Y+1;
 // }
 // while(ac!=1);
  rect(X, Y, 100, 100);
  fill(r,g,b);
  if(mouseX>X && mouseX<X+100 && mouseY>Y && mouseY<Y+100){
    X=random(width-100);
    Y=random(height-100);
    rr=r;
    rg=g;
    rb=b;
    r=random (255);
    g=random (255);
    b=random (255);
    if( r==rr && g== rg && b==rb){
      r=random (255);
      g=random (255);
      b=random (255);
    }
    background (rr, rg, rb);
  }
}
