#include <iostream>
#include <stdlib.h>
#include <graphics.h>
#include <math.h>

using namespace std;

int xmax, ymax, xmid, ymid;
class Line
{
public:
  int x1, x2, y1, y2;
  void dda(int x1, int y1, int x2, int y2)
  {
    float x, y, dx, dy, length;
    int i;
    dx = abs(x2 - x1);
    dy = abs(y2 - y1);
    if (dx > dy)
    {
      length = dx;
    }
    else
    {
      length = dy;
    }
    dx = (x2 - x1) / length;
    dy = (y2 - y1) / length;
    x = x1 + 0.5;
    y = y1 + 0.5;
    i = 1;
    while (i <= length)
    {
      putpixel(x, y, 12);
      x = x + dx;
      y = y + dy;
      i++;
    }
    putpixel(x, y, 12);
  }
};

class Circle
{
public:
  void plot(int x, int y, int x1, int y1)
  {
    putpixel(xmid + x + x1, ymid - (y + y1), 12);
    putpixel(xmid + y + x1, ymid - (x + y1), 12);
    putpixel(xmid - x + x1, ymid - (y + y1), 12);
    putpixel(xmid + y + x1, ymid - (-x + y1), 12);
    putpixel(xmid + x + x1, ymid - (-y + y1), 12);
    putpixel(xmid - y + x1, ymid - (x + y1), 12);
    putpixel(xmid - x + x1, ymid - (-y + y1), 12);
    putpixel(xmid - y + x1, ymid - (-x + y1), 12);
  }

  void drawcircle(float x1, float y1, int r)
  {
    float x, y, d;
    d = 3 - (2 * r);
    x = 0;
    y = r;
    while (x <= y)
    {
      plot(x, y, x1, y1);
      if (d < 0)
        d = d + (4 * x) + 6;
      else
      {
        d = d + (4 * (x - y)) + 10;
        y = y - 1;
      }
      x = x + 1;
    }
  }
};

void display(int x1, int y1, int x2, int y2, int x3, int y3)
{
  Line obj;
  obj.dda(x1 + xmid, ymid - y1, x2 + xmid, ymid - y2);
  delay(300);
  obj.dda(x2 + xmid, ymid - y2, x3 + xmid, ymid - y3);
  delay(300);
  obj.dda(x3 + xmid, ymid - y3, x1 + xmid, ymid - y1);
  delay(300);
}

int main()
{
  Circle obj2;
  int gd = DETECT, gm;
  int x1 = 50, y1 = 50, x2 = 150, y2 = 50, x3 = 100, y3 = 175;
  initgraph(&gd, &gm, NULL);
  xmax = getmaxx();
  ymax = getmaxy();
  xmid = xmax / 2;
  ymid = ymax / 2;

  display(x1, y1, x2, y2, x3, y3);
  float a, b, c, incenterx, incentery, inradius, s;

  a = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
  b = sqrt((x3 - x2) * (x3 - x2) + (y3 - y2) * (y3 - y2));
  c = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));

  incenterx = ((a * x3) + (b * x1) + (c * x2)) / (a + b + c);
  incentery = ((a * y3) + (b * y1) + (c * y2)) / (a + b + c);
  inradius = 0.5 * sqrt(((a + b - c) * (a + c - b) * (c + b - a)) / (a + b + c));
  obj2.drawcircle(incenterx, incentery, inradius);

  float circenterx, circentery, cerradius;
  cerradius = (a * b * c) / (4 * ((a + b + c) * (0.5)) * inradius);
  float A, B, C;
  A = acos(((c * c) + (a * a) - (b * b)) / (2 * a * c));
  B = acos(((b * b) + (a * a) - (c * c)) / (2 * a * b));
  C = acos(((c * c) + (b * b) - (a * a)) / (2 * c * b));

  circenterx = ((x1 * sin(2 * A)) + (x2 * sin(2 * B)) + (x3 * sin(2 * C))) / (sin(2 * A) + sin(2 * B) + sin(2 * C));
  circentery = ((y1 * sin(2 * A)) + (y2 * sin(2 * B)) + (y3 * sin(2 * C))) / (sin(2 * A) + sin(2 * B) + sin(2 * C));
  obj2.drawcircle(circenterx, circentery, cerradius);
  delay(100000000000000000000);

  closegraph();
  return 0;
}
