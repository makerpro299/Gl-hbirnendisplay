import controlP5.*;
import processing.serial.*;

Serial port;

ControlP5 cp5; 
PFont font;

void setup(){

  size(1100, 300); 
  
  printArray(Serial.list());  
  
  port = new Serial(this, "COM1", 9600);
  
  
  cp5 = new ControlP5(this);
  font = createFont("calibri light bold", 20);
  
  cp5.addButton("1")    
    .setPosition(100, 50) 
    .setSize(120, 70)   
    .setFont(font)
  ;   

  cp5.addButton("2") 
    .setPosition(100, 100)
    .setSize(120, 70)   
    .setFont(font)
  ;

  cp5.addButton("3")    
    .setPosition(100, 150) 
    .setSize(120, 70)  
    .setFont(font)
  ;
  
  cp5.addButton("4")
    .setPosition(200, 50) 
    .setSize(120, 70)    
    .setFont(font)
  ;   

  cp5.addButton("5")    
    .setPosition(200, 100) 
    .setSize(120, 70) 
    .setFont(font)
  ;

  cp5.addButton("6")   
    .setPosition(200, 150) 
    .setSize(120, 70)  
    .setFont(font)
  ;
  
  cp5.addButton("7")  
    .setPosition(300, 50)  
    .setSize(120, 70) 
    .setFont(font)
  ;
  
  cp5.addButton("8")  
    .setPosition(300, 100)  
    .setSize(120, 70)
    .setFont(font)
  ;

  cp5.addButton("9")     
    .setPosition(300, 150)  
    .setSize(120, 70)
    .setFont(font)
  ;
  
  cp5.addButton("10")  
    .setPosition(400, 50)
    .setSize(120, 70)     
    .setFont(font)
  ;   

  cp5.addButton("11")   
    .setPosition(400, 100)
    .setSize(120, 70)     
    .setFont(font)
  ;

  cp5.addButton("12") 
    .setPosition(400, 150) 
    .setSize(120, 70)   
    .setFont(font)
  ;
  
  cp5.addButton("13")
    .setPosition(500, 50)  
    .setSize(120, 70)   
    .setFont(font)
  ;   

  cp5.addButton("14")   
    .setPosition(500, 100) 
    .setSize(120, 70)   
    .setFont(font)
  ;

  cp5.addButton("15")    
    .setPosition(500, 150) 
    .setSize(120, 70)  
    .setFont(font)
  ;
  
  cp5.addButton("16")    
    .setPosition(600, 50) 
    .setSize(120, 70)   
    .setFont(font)
  ;
  
  cp5.addButton("17")
    .setPosition(600, 100) 
    .setSize(120, 70)  
    .setFont(font)
  ;

  cp5.addButton("18")  
    .setPosition(600, 150)  
    .setSize(120, 70)     
    .setFont(font)
  ;
  
  cp5.addButton("19")
    .setPosition(700, 50)
    .setSize(120, 70)   
    .setFont(font)
  ;
  
  cp5.addButton("20")  
    .setPosition(700, 100) 
    .setSize(120, 70)    
    .setFont(font)
  ;   

  cp5.addButton("21")
    .setPosition(700, 150)
    .setSize(120, 70)  
    .setFont(font)
  ;

  cp5.addButton("22")  
    .setPosition(800, 50) 
    .setSize(120, 70)  
    .setFont(font)
  ;
  
  cp5.addButton("23")
    .setPosition(800, 100)
    .setSize(120, 70) 
    .setFont(font)
  ;   

  cp5.addButton("24")  
    .setPosition(800, 150) 
    .setSize(120, 70)  
    .setFont(font)
  ;

  cp5.addButton("25")  
    .setPosition(900, 50)  
    .setSize(120, 70) 
    .setFont(font)
  ;
  
  cp5.addButton("26") 
    .setPosition(900, 100) 
    .setSize(120, 70)
    .setFont(font)
  ;
  
  cp5.addButton("27") 
    .setPosition(900, 150)
    .setSize(120, 70)    
    .setFont(font)
  ;

  
  cp5.addButton("alloff")   
    .setPosition(100, 200)
    .setSize(920, 50)
    .setFont(font)
  ;
}

void draw(){ 

  background(150, 0 , 150);

  fill(0, 255, 0);      
  textFont(font);
  text("Display Control", 80, 30); 
}


void a(){
  port.write('a');
}

void b(){
  port.write('b');
}

void c(){
  port.write('c');
}

void d(){
  port.write('d');
}

void e(){
  port.write('e');
}

void f(){
  port.write('f');
}

void g(){
  port.write('g');
}

void h(){
  port.write('h');
}

void i(){
  port.write('i');
}

void j(){
  port.write('j');
}

void k(){
  port.write('k');
}

void l(){
  port.write('l');
}

void m(){
  port.write('m');
}

void n(){
  port.write('n');
}

void o(){
  port.write('o');
}

void p(){
  port.write('p');
}

void q(){
  port.write('q');
}

void r(){
  port.write('r');
}

void s(){
  port.write('s');
}

void t(){
  port.write('t');
}

void u(){
  port.write('u');
}

void v(){
  port.write('v');
}

void w(){
  port.write('w');
}

void x(){
  port.write('x');
}

void y(){
  port.write('y');
}

void z(){
  port.write('z');
}

void aa(){
  port.write('1');
}


void alloff(){
  port.write('0');
}
