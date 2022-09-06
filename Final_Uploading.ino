#include<Servo.h>
Servo Myservo;
int pos;
void setup()
{
Myservo.attach(9);
}

void loop()
{
  
  
for(pos=180;pos>=0;pos--){            //Goes from 180 to 0 Turns ON the AC 
Myservo.write(pos);
delay(10);
}
for(pos=0;pos<=40;pos++){            //Goes from 0 to 40  Fast
Myservo.write(pos);
delay(5);
}
for(pos=40;pos<=180;pos++){          //Goes from 40 to 180 Slow
Myservo.write(pos);
delay(20);
}
delay(300000-5-20);

for(pos=180;pos>=0;pos--){            //Goes from 180 to 0 Turns OFF the AC 
Myservo.write(pos);
delay(10);
}
for(pos=0;pos<=40;pos++){            //Goes from 0 to 40  Fast
Myservo.write(pos);
delay(5);
}
for(pos=40;pos<=180;pos++){          //Goes from 40 to 180 Slow
Myservo.write(pos);
delay(20);
}
delay(1200000);


}
