#include <FastLED.h>
#define NUM_LEDS 64
CRGB leds[NUM_LEDS];

void setup() { 
  FastLED.addLeds<WS2812, 6>(leds, NUM_LEDS); 
  FastLED.setBrightness(10);
}

void loop() {

  draw_creeper();
  delay(2000);
  draw_bee();
  delay(2000);
  draw_enderman();
  delay(2000);
  draw_skeleton();
  delay(2000);

}

void draw_creeper()
{
  // somehow red and color swithed
  // not RGB bun GRB
  CRGB common_green = CRGB(205, 20, 20);
  CRGB dark_blue = CRGB(0, 0, 55);

  fill_solid(leds, NUM_LEDS, common_green);

  int dark_blue_pixels[] = {10, 11, 16, 17, 18, 20, 21, 28, 29, 30, 33, 34, 35, 42, 43, 45, 46, 47, 52, 53};
  int pixels_size = sizeof(dark_blue_pixels) / sizeof(dark_blue_pixels[0]);
  draw_pixels(dark_blue_pixels, pixels_size, dark_blue); 

  FastLED.show();
}

void draw_bee()
{
  // somehow red and color swithed
  // not RGB bun GRB
  CRGB yellow = CRGB(200, 200, 0);
  CRGB white = CRGB(255, 255, 255);
  CRGB dark_blue = CRGB(0, 0, 55);

  fill_solid(leds, NUM_LEDS, yellow);

  int white_pixels[] = {10, 53};
  int white_pixels_size = sizeof(white_pixels) / sizeof(white_pixels[0]);
  draw_pixels(white_pixels, white_pixels_size, white); 

  int blue_pixels[] = {2, 3, 4, 5, 9, 11, 12, 13, 30, 33, 50, 51, 52, 54, 58, 59, 60, 61};
  int blue_pixels_size = sizeof(blue_pixels) / sizeof(blue_pixels[0]);
  draw_pixels(blue_pixels, blue_pixels_size, dark_blue); 

  FastLED.show();
}

void draw_enderman()
{
  // somehow red and color swithed
  // not RGB bun GRB
  CRGB dark_blue = CRGB(10, 10, 55);
  CRGB purple = CRGB(102, 255, 255);
  CRGB dark_purple = CRGB(0, 204, 153);

  fill_solid(leds, NUM_LEDS, dark_blue);

  int purple_pixels[] = {4, 20, 43, 59};
  int purple_pixels_size = sizeof(purple_pixels) / sizeof(purple_pixels[0]);
  draw_pixels(purple_pixels, purple_pixels_size, purple); 

  int dark_purple_pixels[] = {11, 52};
  int dark_purple_pixels_size = sizeof(dark_purple_pixels) / sizeof(dark_purple_pixels[0]);
  draw_pixels(dark_purple_pixels, dark_purple_pixels_size, dark_purple); 

  FastLED.show();
}

void draw_skeleton()
{
  // somehow red and color swithed
  // not RGB bun GRB
  CRGB dark_blue = CRGB(10, 10, 55);
  CRGB white = CRGB(50, 50, 50);

  fill_solid(leds, NUM_LEDS, white);

  int dark_blue_pixels[] = {14, 17, 30, 33, 46, 49, 12, 19, 44, 51};
  int dark_blue_pixels_size = sizeof(dark_blue_pixels) / sizeof(dark_blue_pixels[0]);
  draw_pixels(dark_blue_pixels, dark_blue_pixels_size, dark_blue); 

  FastLED.show();
}

void draw_pixels(int pixels[], int pixels_size, CRGB crgb)
{
  for (int i = 0; i < pixels_size; ++i) {
    leds[pixels[i]] = crgb;
  }
}
