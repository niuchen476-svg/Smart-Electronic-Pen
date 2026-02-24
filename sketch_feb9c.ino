int BASE = 2; // 第一颗 LED 接在数字 2 脚
int NUM = 6;  // LED 的总数

void setup() {
  // 循环设置 2 到 7 号引脚为输出模式
  for (int i = BASE; i < BASE + NUM; i++) {
    pinMode(i, OUTPUT); 
  }
}

void loop() {
  // 逐个熄灭（手册逻辑是先 LOW 再 HIGH）
  for (int i = BASE; i < BASE + NUM; i++) {
    digitalWrite(i, LOW); 
    delay(200); // 延时 0.2 秒
  }
  // 逐个点亮
  for (int i = BASE; i < BASE + NUM; i++) { 
    digitalWrite(i, HIGH); 
    delay(200); 
  }
}