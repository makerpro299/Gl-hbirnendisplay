import controlP5.*; //import ControlP5 library
import processing.serial.*;

Serial port;

ControlP5 cp5; //create ControlP5 object
PFont font;

void setup(){ //same as arduino program

  size(1100, 300);    //window size, (width, height)
  
  printArray(Serial.list());   //prints all available serial ports
  
  port = new Serial(this, "COM1", 9600);  //i have connected arduino to com3, it would be different in linux and mac os
  
  //lets add buton to empty window
  
  cp5 = new ControlP5(this);
  font = createFont("calibri light bold", 20);    // custom fonts for buttons and title
  
  cp5.addButton("1")     //"red" is the name of button
    .setPosition(100, 50)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;   

  cp5.addButton("2")     //"yellow" is the name of button
    .setPosition(100, 100)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;

  cp5.addButton("3")     //"blue" is the name of button
    .setPosition(100, 150)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;
  
  cp5.addButton("4")     //"red" is the name of button
    .setPosition(200, 50)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;   

  cp5.addButton("5")     //"yellow" is the name of button
    .setPosition(200, 100)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;

  cp5.addButton("6")     //"blue" is the name of button
    .setPosition(200, 150)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;
  
  cp5.addButton("7")     //"alloff" is the name of button
    .setPosition(300, 50)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;
  
  cp5.addButton("8")     //"yellow" is the name of button
    .setPosition(300, 100)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;

  cp5.addButton("9")     //"blue" is the name of button
    .setPosition(300, 150)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;
  
  cp5.addButton("10")     //"red" is the name of button
    .setPosition(400, 50)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;   

  cp5.addButton("11")     //"yellow" is the name of button
    .setPosition(400, 100)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;

  cp5.addButton("12")     //"blue" is the name of button
    .setPosition(400, 150)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;
  
  cp5.addButton("13")     //"red" is the name of button
    .setPosition(500, 50)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;   

  cp5.addButton("14")     //"yellow" is the name of button
    .setPosition(500, 100)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;

  cp5.addButton("15")     //"blue" is the name of button
    .setPosition(500, 150)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;
  
  cp5.addButton("16")     //"alloff" is the name of button
    .setPosition(600, 50)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;
  
  cp5.addButton("17")     //"yellow" is the name of button
    .setPosition(600, 100)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;

  cp5.addButton("18")     //"blue" is the name of button
    .setPosition(600, 150)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;
  
  cp5.addButton("19")     //"blue" is the name of button
    .setPosition(700, 50)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;
  
  cp5.addButton("20")     //"red" is the name of button
    .setPosition(700, 100)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;   

  cp5.addButton("21")     //"yellow" is the name of button
    .setPosition(700, 150)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;

  cp5.addButton("22")     //"blue" is the name of button
    .setPosition(800, 50)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;
  
  cp5.addButton("23")     //"red" is the name of button
    .setPosition(800, 100)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;   

  cp5.addButton("24")     //"yellow" is the name of button
    .setPosition(800, 150)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;

  cp5.addButton("25")     //"blue" is the name of button
    .setPosition(900, 50)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;
  
  cp5.addButton("26")     //"alloff" is the name of button
    .setPosition(900, 100)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;
  
  cp5.addButton("27")     //"yellow" is the name of button
    .setPosition(900, 150)  //x and y coordinates of upper left corner of button
    .setSize(120, 70)      //(width, height)
    .setFont(font)
  ;

  
  cp5.addButton("alloff")     //"alloff" is the name of button
    .setPosition(100, 200)  //x and y coordinates of upper left corner of button
    .setSize(920, 50)      //(width, height)
    .setFont(font)
  ;
}

void draw(){  //same as loop in arduino

  background(150, 0 , 150); // background color of window (r, g, b) or (0 to 255)
  
  //lets give title to our window
  fill(0, 255, 0);               //text color (r, g, b)
  textFont(font);
  text("Display Control", 80, 30);  // ("text", x coordinate, y coordinat)
}

//lets add some functions to our buttons
//so when you press any button, it sends perticular char over serial port

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
