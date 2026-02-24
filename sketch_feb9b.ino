int val; // 定义变量 val
int ledpin = 13; // 定义数字接口 13，即板载的 L 灯

void setup() {
  Serial.begin(9600); // 设置波特率为 9600
  pinMode(ledpin, OUTPUT); // 设置 13 号口为输出模式
}

void loop() {
  val = Serial.read(); // 读取电脑发送给 Arduino 的指令
  
  if (val == 'R') { // 如果接收到的指令是字符 “R”
    digitalWrite(ledpin, HIGH); // 点亮 13 号口 LED 灯
    delay(500); // 延迟 0.5 秒
    digitalWrite(ledpin, LOW); // 熄灭 13 号口 LED 灯
    delay(500); // 延迟 0.5 秒
    Serial.println("Hello World!"); // 在串口监视器显示字符串
  }
}