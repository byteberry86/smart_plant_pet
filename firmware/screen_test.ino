#include <Adafruit_GFX.h>
#include <Adafruit_ST7789.h>
#include <SPI.h>

#define TFT_CS   10
#define TFT_DC    9
#define TFT_RST   8

Adafruit_ST7789 tft = Adafruit_ST7789(TFT_CS, TFT_DC, TFT_RST);

void setup() {

  Serial.begin(9600);

  // Initialize ST7789 240x240 display
  tft.init(240, 240);

  // Try different rotations if image is strange
  tft.setRotation(0);

  // RED
  tft.fillScreen(ST77XX_RED);
  delay(1000);

  // GREEN
  tft.fillScreen(ST77XX_GREEN);
  delay(1000);

  // BLUE
  tft.fillScreen(ST77XX_BLUE);
  delay(1000);

  // BLACK
  tft.fillScreen(ST77XX_BLACK);

  // White text
  tft.setTextColor(ST77XX_WHITE);
  tft.setTextSize(2);
  tft.setCursor(20, 100);
  tft.println("SCREEN TEST");

  // Draw shapes
  tft.drawRect(10, 10, 220, 220, ST77XX_YELLOW);
  tft.drawLine(0, 0, 239, 239, ST77XX_CYAN);
  tft.drawLine(239, 0, 0, 239, ST77XX_CYAN);
}

void loop() {
}
