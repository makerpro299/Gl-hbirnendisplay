void setup() {
  const int relaisIN1 = 22;
  const int relaisIN2 = 23;
  const int relaisIN3 = 24;
  const int relaisIN4 = 25;
  const int relaisIN5 = 26;
  const int relaisIN6 = 27;
  const int relaisIN7 = 28;
  const int relaisIN8 = 29;
  const int relaisIN9 = 30;
  const int relaisIN10 = 31;
  const int relaisIN11 = 32;
  const int relaisIN12 = 33;
  const int relaisIN13 = 34;
  const int relaisIN14 = 35;
  const int relaisIN15 = 36;
  const int relaisIN16 = 37;
  const int relaisIN17 = 38;
  const int relaisIN18 = 39;
  const int relaisIN19 = 40;
  const int relaisIN20 = 41;
  const int relaisIN21 = 42;
  const int relaisIN22 = 43;
  const int relaisIN23 = 44;
  const int relaisIN24 = 45;
  const int relaisIN25 = 46;
  const int relaisIN26 = 47;
  const int relaisIN27 = 48;
  pinMode(relaisIN1, OUTPUT);
  pinMode(relaisIN2, OUTPUT);
  pinMode(relaisIN3, OUTPUT);
  pinMode(relaisIN4, OUTPUT);
  pinMode(relaisIN5, OUTPUT);
  pinMode(relaisIN6, OUTPUT);
  pinMode(relaisIN7, OUTPUT);
  pinMode(relaisIN8, OUTPUT);
  pinMode(relaisIN9, OUTPUT);
  pinMode(relaisIN10, OUTPUT);
  pinMode(relaisIN11, OUTPUT);
  pinMode(relaisIN12, OUTPUT);
  pinMode(relaisIN13, OUTPUT);
  pinMode(relaisIN14, OUTPUT);
  pinMode(relaisIN15, OUTPUT);
  pinMode(relaisIN16, OUTPUT);
  pinMode(relaisIN17, OUTPUT);
  pinMode(relaisIN18, OUTPUT);
  pinMode(relaisIN19, OUTPUT);
  pinMode(relaisIN20, OUTPUT);
  pinMode(relaisIN21, OUTPUT);
  pinMode(relaisIN22, OUTPUT);
  pinMode(relaisIN23, OUTPUT);
  pinMode(relaisIN24, OUTPUT);
  pinMode(relaisIN25, OUTPUT);
  pinMode(relaisIN26, OUTPUT);
  pinMode(relaisIN27, OUTPUT);

  digitalWrite(relaisIN1, HIGH); 
  digitalWrite(relaisIN2, HIGH); 
  digitalWrite(relaisIN3, HIGH); 
  digitalWrite(relaisIN4, HIGH); 
  digitalWrite(relaisIN5, HIGH); 
  digitalWrite(relaisIN6, HIGH); 
  digitalWrite(relaisIN7, HIGH); 
  digitalWrite(relaisIN8, HIGH); 
  digitalWrite(relaisIN9, HIGH); 
  digitalWrite(relaisIN10, HIGH); 
  digitalWrite(relaisIN11, HIGH); 
  digitalWrite(relaisIN12, HIGH); 
  digitalWrite(relaisIN13, HIGH); 
  digitalWrite(relaisIN14, HIGH); 
  digitalWrite(relaisIN15, HIGH); 
  digitalWrite(relaisIN16, HIGH); 
  digitalWrite(relaisIN17, HIGH); 
  digitalWrite(relaisIN18, HIGH); 
  digitalWrite(relaisIN19, HIGH); 
  digitalWrite(relaisIN20, HIGH); 
  digitalWrite(relaisIN21, HIGH); 
  digitalWrite(relaisIN22, HIGH); 
  digitalWrite(relaisIN23, HIGH); 
  digitalWrite(relaisIN24, HIGH); 
  digitalWrite(relaisIN24, HIGH); 
  digitalWrite(relaisIN26, HIGH); 
  digitalWrite(relaisIN27, HIGH); 
  delay(3000);
  digitalWrite(relaisIN1, LOW); 
  digitalWrite(relaisIN2, LOW); 
  digitalWrite(relaisIN3, LOW); 
  digitalWrite(relaisIN4, LOW); 
  digitalWrite(relaisIN5, LOW); 
  digitalWrite(relaisIN6, LOW); 
  digitalWrite(relaisIN7, LOW); 
  digitalWrite(relaisIN8, LOW); 
  digitalWrite(relaisIN9, LOW); 
  digitalWrite(relaisIN10, LOW); 
  digitalWrite(relaisIN11, LOW); 
  digitalWrite(relaisIN12, LOW); 
  digitalWrite(relaisIN13, LOW); 
  digitalWrite(relaisIN14, LOW); 
  digitalWrite(relaisIN15, LOW); 
  digitalWrite(relaisIN16, LOW); 
  digitalWrite(relaisIN17, LOW); 
  digitalWrite(relaisIN18, LOW); 
  digitalWrite(relaisIN19, LOW); 
  digitalWrite(relaisIN20, LOW); 
  digitalWrite(relaisIN21, LOW); 
  digitalWrite(relaisIN22, LOW); 
  digitalWrite(relaisIN23, LOW); 
  digitalWrite(relaisIN24, LOW); 
  digitalWrite(relaisIN24, LOW); 
  digitalWrite(relaisIN26, LOW); 
  digitalWrite(relaisIN27, LOW); 

}

void loop() {

    const int relaisIN1 = 22;
    const int relaisIN2 = 23;
    const int relaisIN3 = 24;
    const int relaisIN4 = 25;
    const int relaisIN5 = 26;
    const int relaisIN6 = 27;
    const int relaisIN7 = 28;
    const int relaisIN8 = 29;
    const int relaisIN9 = 30;
    const int relaisIN10 = 31;
    const int relaisIN11 = 32;
    const int relaisIN12 = 33;
    const int relaisIN13 = 34;
    const int relaisIN14 = 35;
    const int relaisIN15 = 36;
    const int relaisIN16 = 37;
    const int relaisIN17 = 38;
    const int relaisIN18 = 39;
    const int relaisIN19 = 40;
    const int relaisIN20 = 41;
    const int relaisIN21 = 42;
    const int relaisIN22 = 43;
    const int relaisIN23 = 44;
    const int relaisIN24 = 45;
    const int relaisIN25 = 46;
    const int relaisIN26 = 47;
    const int relaisIN27 = 48;
    pinMode(relaisIN1, OUTPUT);
    pinMode(relaisIN2, OUTPUT);
    pinMode(relaisIN3, OUTPUT);
    pinMode(relaisIN4, OUTPUT);
    pinMode(relaisIN5, OUTPUT);
    pinMode(relaisIN6, OUTPUT);
    pinMode(relaisIN7, OUTPUT);
    pinMode(relaisIN8, OUTPUT);
    pinMode(relaisIN9, OUTPUT);
    pinMode(relaisIN10, OUTPUT);
    pinMode(relaisIN11, OUTPUT);
    pinMode(relaisIN12, OUTPUT);
    pinMode(relaisIN13, OUTPUT);
    pinMode(relaisIN14, OUTPUT);
    pinMode(relaisIN15, OUTPUT);
    pinMode(relaisIN16, OUTPUT);
    pinMode(relaisIN17, OUTPUT);
    pinMode(relaisIN18, OUTPUT);
    pinMode(relaisIN19, OUTPUT);
    pinMode(relaisIN20, OUTPUT);
    pinMode(relaisIN21, OUTPUT);
    pinMode(relaisIN22, OUTPUT);
    pinMode(relaisIN23, OUTPUT);
    pinMode(relaisIN24, OUTPUT);
    pinMode(relaisIN25, OUTPUT);
    pinMode(relaisIN26, OUTPUT);
    pinMode(relaisIN27, OUTPUT);
    
    if(Serial.available()){  

    char val = Serial.read();

    if(val == 'a'){      
      digitalWrite(relaisIN1, HIGH); 
      }
    if(val == 'b'){      
      digitalWrite(relaisIN2, HIGH); 
      }
    if(val == 'c'){      
      digitalWrite(relaisIN3, HIGH); 
      }
    if(val == 'd'){      
      digitalWrite(relaisIN4, HIGH); 
      }
    if(val == 'e'){      
      digitalWrite(relaisIN5, HIGH); 
      }
    if(val == 'f'){      
      digitalWrite(relaisIN6, HIGH); 
      }
    if(val == 'g'){      
      digitalWrite(relaisIN7, HIGH); 
      }
    if(val == 'h'){      
      digitalWrite(relaisIN8, HIGH); 
      }
    if(val == 'i'){      
      digitalWrite(relaisIN9, HIGH); 
      }
    if(val == 'j'){      
      digitalWrite(relaisIN10, HIGH); 
      }
    if(val == 'k'){      
      digitalWrite(relaisIN11, HIGH); 
      }
    if(val == 'l'){      
      digitalWrite(relaisIN12, HIGH); 
      }
    if(val == 'm'){      
      digitalWrite(relaisIN13, HIGH); 
      }
    if(val == 'n'){      
      digitalWrite(relaisIN14, HIGH); 
      }
    if(val == 'o'){      
      digitalWrite(relaisIN15, HIGH); 
      }
    if(val == 'p'){      
      digitalWrite(relaisIN16, HIGH); 
      }
    if(val == 'q'){      
      digitalWrite(relaisIN17, HIGH); 
      }
    if(val == 'e'){      
      digitalWrite(relaisIN18, HIGH); 
      }
    if(val == 's'){      
      digitalWrite(relaisIN19, HIGH); 
      }
    if(val == 't'){      
      digitalWrite(relaisIN20, HIGH); 
      }
    if(val == 'u'){      
      digitalWrite(relaisIN21, HIGH); 
    }
    if(val == 'v'){      
      digitalWrite(relaisIN22, HIGH); 
      }
    if(val == 'w'){      
      digitalWrite(relaisIN23, HIGH); 
      }
    if(val == 'x'){      
      digitalWrite(relaisIN24, HIGH); 
      }
    if(val == 'y'){      
      digitalWrite(relaisIN25, HIGH); 
      }
    if(val == 'z'){      
      digitalWrite(relaisIN26, HIGH); 
      }
    if(val == '1'){      
      digitalWrite(relaisIN27, HIGH); 
      }
    if(val == '0'){      
      digitalWrite(relaisIN1, LOW); 
      digitalWrite(relaisIN2, LOW); 
      digitalWrite(relaisIN3, LOW); 
      digitalWrite(relaisIN4, LOW); 
      digitalWrite(relaisIN5, LOW); 
      digitalWrite(relaisIN6, LOW); 
      digitalWrite(relaisIN7, LOW); 
      digitalWrite(relaisIN8, LOW); 
      digitalWrite(relaisIN9, LOW); 
      digitalWrite(relaisIN10, LOW); 
      digitalWrite(relaisIN11, LOW); 
      digitalWrite(relaisIN12, LOW); 
      digitalWrite(relaisIN13, LOW); 
      digitalWrite(relaisIN14, LOW); 
      digitalWrite(relaisIN15, LOW); 
      digitalWrite(relaisIN16, LOW); 
      digitalWrite(relaisIN17, LOW); 
      digitalWrite(relaisIN18, LOW); 
      digitalWrite(relaisIN19, LOW); 
      digitalWrite(relaisIN20, LOW); 
      digitalWrite(relaisIN21, LOW); 
      digitalWrite(relaisIN22, LOW); 
      digitalWrite(relaisIN23, LOW); 
      digitalWrite(relaisIN24, LOW); 
      digitalWrite(relaisIN24, LOW); 
      digitalWrite(relaisIN26, LOW); 
      digitalWrite(relaisIN27, LOW); 
      }      
    }

}






Gui Code (processing):


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
